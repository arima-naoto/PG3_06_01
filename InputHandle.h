#pragma once
#include <Command.h>

/// <summary>
/// InputHandleクラスの宣言
/// </summary>
class InputHandle
{
public://メンバ関数

    // 入力を処理し、対応するコマンドを返すメソッド
    ICommand* HandleInput();

    // キーAが押された場合にMoveLeftCommandを割り当てるメソッド
    void AssignMoveLeftCommand2PressKeyA();

    // キーDが押された場合にMoveRightCommandを割り当てるメソッド
    void AssignMoveRightCommand2PressKeyD();

private://メンバ変数

    // キーDが押された時に実行するコマンドへのポインタ
    ICommand* pressKeyD_;

    // キーAが押された時に実行するコマンドへのポインタ
    ICommand* pressKeyA_;
};

