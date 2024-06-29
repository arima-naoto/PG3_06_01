#pragma once
#include "IScene.h"
#include "InputHandle.h"
#include "Command.h"
#include "Player.h"

/// <summary>
/// ISceneクラスを継承したStageSceneを宣言
/// </summary>
class StageScene : public IScene
{
private:

	///インプットハンドルクラス
	InputHandle* inputHandle = nullptr;

	///コマンドクラス
	ICommand* iCommand = nullptr;

	///プレイヤークラス
	Player* player = nullptr;


public://メンバ関数

	///初期化処理
	void Initialize() override;

	///更新処理
	void Update() override ;

	///描画処理
	void Draw() override;

};

