#include "Command.h"

// delete処理
ICommand::~ICommand() {}

// MoveRightCommandクラスのExecメソッドの実装
// プレイヤーを右に移動させる
void MoveRightCommand::Exec(Player& player) {
    player.MoveRight();
}

// MoveLeftCommandクラスのExecメソッドの実装
// プレイヤーを左に移動させる
void MoveLeftCommand::Exec(Player& player) {
    player.MoveLeft();
}
