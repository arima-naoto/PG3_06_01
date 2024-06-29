#include "Player.h"

/// <summary>
/// delete処理
/// </summary>
Player::~Player(){}

/// <summary>
/// 初期化処理
/// </summary>
void Player::Initialize() {

	//座標
	pos_ = { 640.0f,350.0f };

	//半径
	radius_ = { 16.0f };

	//移動処理
	speed_ = { 5.0f };

	//プレイヤーの色
	color_ = RED;
}

//更新処理
void Player::Update() {
}

/// <summary>
/// 描画処理
/// </summary>
void Player::Draw() {
	Novice::DrawEllipse((int)pos_.x, (int)pos_.y, (int)radius_, (int)radius_, 0.0f, color_, kFillModeSolid);
}

/// <summary>
/// 右方向処理
/// </summary>
void Player::MoveRight() 
{
	//演算子を使用して、自キャラを右方向に動かす
	this->pos_ += Vector2(this->speed_, 0);
}

/// <summary>
/// 左方向処理
/// </summary>
void Player::MoveLeft() 
{
	//演算子を使用して、自キャラを左方向に動かす
	this->pos_ -= Vector2(this->speed_, 0);
}
