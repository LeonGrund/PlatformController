#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlatformController
struct  PlatformController_t1174190185  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean PlatformController::extJump
	bool ___extJump_4;
	// UnityEngine.GameObject PlatformController::SR
	GameObject_t1756533147 * ___SR_5;
	// UnityEngine.GameObject PlatformController::K
	GameObject_t1756533147 * ___K_6;
	// UnityEngine.GameObject PlatformController::F
	GameObject_t1756533147 * ___F_7;
	// System.Single PlatformController::moveForce
	float ___moveForce_8;
	// System.Single PlatformController::maxSpeed
	float ___maxSpeed_9;
	// System.Single PlatformController::jumpForce
	float ___jumpForce_10;
	// System.Boolean PlatformController::flag
	bool ___flag_12;
	// UnityEngine.Transform PlatformController::groundCheck
	Transform_t3275118058 * ___groundCheck_13;
	// UnityEngine.GameObject PlatformController::NoFlip
	GameObject_t1756533147 * ___NoFlip_15;
	// UnityEngine.Animator PlatformController::anim
	Animator_t69676727 * ___anim_17;
	// UnityEngine.Rigidbody2D PlatformController::rb2d
	Rigidbody2D_t502193897 * ___rb2d_18;

public:
	inline static int32_t get_offset_of_extJump_4() { return static_cast<int32_t>(offsetof(PlatformController_t1174190185, ___extJump_4)); }
	inline bool get_extJump_4() const { return ___extJump_4; }
	inline bool* get_address_of_extJump_4() { return &___extJump_4; }
	inline void set_extJump_4(bool value)
	{
		___extJump_4 = value;
	}

	inline static int32_t get_offset_of_SR_5() { return static_cast<int32_t>(offsetof(PlatformController_t1174190185, ___SR_5)); }
	inline GameObject_t1756533147 * get_SR_5() const { return ___SR_5; }
	inline GameObject_t1756533147 ** get_address_of_SR_5() { return &___SR_5; }
	inline void set_SR_5(GameObject_t1756533147 * value)
	{
		___SR_5 = value;
		Il2CppCodeGenWriteBarrier(&___SR_5, value);
	}

	inline static int32_t get_offset_of_K_6() { return static_cast<int32_t>(offsetof(PlatformController_t1174190185, ___K_6)); }
	inline GameObject_t1756533147 * get_K_6() const { return ___K_6; }
	inline GameObject_t1756533147 ** get_address_of_K_6() { return &___K_6; }
	inline void set_K_6(GameObject_t1756533147 * value)
	{
		___K_6 = value;
		Il2CppCodeGenWriteBarrier(&___K_6, value);
	}

	inline static int32_t get_offset_of_F_7() { return static_cast<int32_t>(offsetof(PlatformController_t1174190185, ___F_7)); }
	inline GameObject_t1756533147 * get_F_7() const { return ___F_7; }
	inline GameObject_t1756533147 ** get_address_of_F_7() { return &___F_7; }
	inline void set_F_7(GameObject_t1756533147 * value)
	{
		___F_7 = value;
		Il2CppCodeGenWriteBarrier(&___F_7, value);
	}

	inline static int32_t get_offset_of_moveForce_8() { return static_cast<int32_t>(offsetof(PlatformController_t1174190185, ___moveForce_8)); }
	inline float get_moveForce_8() const { return ___moveForce_8; }
	inline float* get_address_of_moveForce_8() { return &___moveForce_8; }
	inline void set_moveForce_8(float value)
	{
		___moveForce_8 = value;
	}

	inline static int32_t get_offset_of_maxSpeed_9() { return static_cast<int32_t>(offsetof(PlatformController_t1174190185, ___maxSpeed_9)); }
	inline float get_maxSpeed_9() const { return ___maxSpeed_9; }
	inline float* get_address_of_maxSpeed_9() { return &___maxSpeed_9; }
	inline void set_maxSpeed_9(float value)
	{
		___maxSpeed_9 = value;
	}

	inline static int32_t get_offset_of_jumpForce_10() { return static_cast<int32_t>(offsetof(PlatformController_t1174190185, ___jumpForce_10)); }
	inline float get_jumpForce_10() const { return ___jumpForce_10; }
	inline float* get_address_of_jumpForce_10() { return &___jumpForce_10; }
	inline void set_jumpForce_10(float value)
	{
		___jumpForce_10 = value;
	}

	inline static int32_t get_offset_of_flag_12() { return static_cast<int32_t>(offsetof(PlatformController_t1174190185, ___flag_12)); }
	inline bool get_flag_12() const { return ___flag_12; }
	inline bool* get_address_of_flag_12() { return &___flag_12; }
	inline void set_flag_12(bool value)
	{
		___flag_12 = value;
	}

	inline static int32_t get_offset_of_groundCheck_13() { return static_cast<int32_t>(offsetof(PlatformController_t1174190185, ___groundCheck_13)); }
	inline Transform_t3275118058 * get_groundCheck_13() const { return ___groundCheck_13; }
	inline Transform_t3275118058 ** get_address_of_groundCheck_13() { return &___groundCheck_13; }
	inline void set_groundCheck_13(Transform_t3275118058 * value)
	{
		___groundCheck_13 = value;
		Il2CppCodeGenWriteBarrier(&___groundCheck_13, value);
	}

	inline static int32_t get_offset_of_NoFlip_15() { return static_cast<int32_t>(offsetof(PlatformController_t1174190185, ___NoFlip_15)); }
	inline GameObject_t1756533147 * get_NoFlip_15() const { return ___NoFlip_15; }
	inline GameObject_t1756533147 ** get_address_of_NoFlip_15() { return &___NoFlip_15; }
	inline void set_NoFlip_15(GameObject_t1756533147 * value)
	{
		___NoFlip_15 = value;
		Il2CppCodeGenWriteBarrier(&___NoFlip_15, value);
	}

	inline static int32_t get_offset_of_anim_17() { return static_cast<int32_t>(offsetof(PlatformController_t1174190185, ___anim_17)); }
	inline Animator_t69676727 * get_anim_17() const { return ___anim_17; }
	inline Animator_t69676727 ** get_address_of_anim_17() { return &___anim_17; }
	inline void set_anim_17(Animator_t69676727 * value)
	{
		___anim_17 = value;
		Il2CppCodeGenWriteBarrier(&___anim_17, value);
	}

	inline static int32_t get_offset_of_rb2d_18() { return static_cast<int32_t>(offsetof(PlatformController_t1174190185, ___rb2d_18)); }
	inline Rigidbody2D_t502193897 * get_rb2d_18() const { return ___rb2d_18; }
	inline Rigidbody2D_t502193897 ** get_address_of_rb2d_18() { return &___rb2d_18; }
	inline void set_rb2d_18(Rigidbody2D_t502193897 * value)
	{
		___rb2d_18 = value;
		Il2CppCodeGenWriteBarrier(&___rb2d_18, value);
	}
};

struct PlatformController_t1174190185_StaticFields
{
public:
	// System.Boolean PlatformController::facingRight
	bool ___facingRight_2;
	// System.Boolean PlatformController::jump
	bool ___jump_3;
	// System.Int32 PlatformController::extraJump
	int32_t ___extraJump_11;
	// System.Int32 PlatformController::score
	int32_t ___score_14;
	// System.Boolean PlatformController::grounded
	bool ___grounded_16;

public:
	inline static int32_t get_offset_of_facingRight_2() { return static_cast<int32_t>(offsetof(PlatformController_t1174190185_StaticFields, ___facingRight_2)); }
	inline bool get_facingRight_2() const { return ___facingRight_2; }
	inline bool* get_address_of_facingRight_2() { return &___facingRight_2; }
	inline void set_facingRight_2(bool value)
	{
		___facingRight_2 = value;
	}

	inline static int32_t get_offset_of_jump_3() { return static_cast<int32_t>(offsetof(PlatformController_t1174190185_StaticFields, ___jump_3)); }
	inline bool get_jump_3() const { return ___jump_3; }
	inline bool* get_address_of_jump_3() { return &___jump_3; }
	inline void set_jump_3(bool value)
	{
		___jump_3 = value;
	}

	inline static int32_t get_offset_of_extraJump_11() { return static_cast<int32_t>(offsetof(PlatformController_t1174190185_StaticFields, ___extraJump_11)); }
	inline int32_t get_extraJump_11() const { return ___extraJump_11; }
	inline int32_t* get_address_of_extraJump_11() { return &___extraJump_11; }
	inline void set_extraJump_11(int32_t value)
	{
		___extraJump_11 = value;
	}

	inline static int32_t get_offset_of_score_14() { return static_cast<int32_t>(offsetof(PlatformController_t1174190185_StaticFields, ___score_14)); }
	inline int32_t get_score_14() const { return ___score_14; }
	inline int32_t* get_address_of_score_14() { return &___score_14; }
	inline void set_score_14(int32_t value)
	{
		___score_14 = value;
	}

	inline static int32_t get_offset_of_grounded_16() { return static_cast<int32_t>(offsetof(PlatformController_t1174190185_StaticFields, ___grounded_16)); }
	inline bool get_grounded_16() const { return ___grounded_16; }
	inline bool* get_address_of_grounded_16() { return &___grounded_16; }
	inline void set_grounded_16(bool value)
	{
		___grounded_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
