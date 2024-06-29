#pragma once
#include <Player.h>

/// <summary>
/// ICommandクラスの宣言
/// </summary>
class ICommand
{
public://メンバ関数

    // 仮想デストラクタ
    virtual ~ICommand();

    // プレイヤーに対するコマンドの実行メソッド
    virtual void Exec(Player& player) = 0;
};

// 右に移動するコマンドクラス
class MoveRightCommand : public ICommand {
public:
    // 右に移動する処理を実行
    void Exec(Player& player) override;
};

// 左に移動するコマンドクラス
class MoveLeftCommand : public ICommand {
public:
    // 左に移動する処理を実行
    void Exec(Player& player) override;
};