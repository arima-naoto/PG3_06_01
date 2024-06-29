#include "InputHandle.h"

// キーAにMoveLeftCommandを割り当てるメソッドの実装
void InputHandle::AssignMoveLeftCommand2PressKeyA()
{
    // MoveLeftCommandの新しいインスタンスを作成
    ICommand* command = new MoveLeftCommand();
    // キーAが押された時に実行するコマンドとして設定
    this->pressKeyA_ = command;
}

// キーDにMoveRightCommandを割り当てるメソッドの実装
void InputHandle::AssignMoveRightCommand2PressKeyD() {
    // MoveRightCommandの新しいインスタンスを作成
    ICommand* command = new MoveRightCommand();
    // キーDが押された時に実行するコマンドとして設定
    this->pressKeyD_ = command;
}

// 入力を処理し、対応するコマンドを返すメソッドの実装
ICommand* InputHandle::HandleInput() {
    // キーDが押された場合、pressKeyD_を返す
    if (Novice::CheckHitKey(DIK_D)) {
        return pressKeyD_;
    }

    // キーAが押された場合、pressKeyA_を返す
    if (Novice::CheckHitKey(DIK_A)) {
        return pressKeyA_;
    }

    // どのキーも押されていない場合、nullptrを返す
    return nullptr;
}