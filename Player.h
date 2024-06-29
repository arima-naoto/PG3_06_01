#pragma once
#include "Vector2.h"
#include <Novice.h>

/// <summary>
/// Playerクラスの宣言
/// </summary>
class Player
{
private://メンバ変数

	///座標
	Vector2 pos_;

	///半径
	float radius_;
	
	///移動速度
	float speed_;

	///プレイヤーの色
	unsigned int color_;

public:///メンバ関数

	/// <summary>
	/// デストラクタ
	/// </summary>
	~Player();

	/// <summary>
	/// 初期化処理
	/// </summary>
	void Initialize();

	/// <summary>
	/// 更新処理
	/// </summary>
	void Update();

	/// <summary>
	/// 描画処理
	/// </summary>
	void Draw();

	/// <summary>
	/// 右移動処理
	/// </summary>
	void MoveRight();

	/// <summary>
	/// 左移動処理
	/// </summary>
	void MoveLeft();

};

