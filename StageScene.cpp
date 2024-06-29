#include "StageScene.h"
/// <summary>
/// 初期化処理
/// </summary>
void StageScene::Initialize() {

	//インプットハンドルクラスのインスタンスを作成
	inputHandle = new InputHandle();

	//インプットハンドルクラスからプレイヤーを左移動させるメンバ関数を呼び出す
	inputHandle->AssignMoveLeftCommand2PressKeyA();

	//インプットハンドルクラスからプレイヤーを右移動させるメンバ関数を呼び出す
	inputHandle->AssignMoveRightCommand2PressKeyD();

	//プレイヤークラスのインスタンスを作成
	player = new Player();
	//プレイヤーの初期化処理
	player->Initialize();

}

/// <summary>
/// 更新処理
/// </summary>
void StageScene::Update() {

	///入力ハンドルからコマンドを取得する
	iCommand = inputHandle->HandleInput();

	//取得したコマンドが有効であれば、実行する
	if (this->iCommand) {
		iCommand->Exec(*player);
	}

	//PlayerクラスからUpdate関数を呼び出す
	player->Update();

}

/// <summary>
/// 描画処理
/// </summary>
void StageScene::Draw() {
	
	//playerクラスからDraw関数を呼び出す
	player->Draw();

}


