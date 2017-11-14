#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlatformFall
struct  PlatformFall_t3714567854  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PlatformFall::fallDelay
	float ___fallDelay_2;
	// UnityEngine.SpriteRenderer PlatformFall::originalPlatform
	SpriteRenderer_t1209076198 * ___originalPlatform_3;
	// UnityEngine.Sprite PlatformFall::touchedPlatform1
	Sprite_t309593783 * ___touchedPlatform1_4;
	// UnityEngine.Sprite PlatformFall::touchedPlatform2
	Sprite_t309593783 * ___touchedPlatform2_5;
	// UnityEngine.Sprite PlatformFall::touchedPlatform3
	Sprite_t309593783 * ___touchedPlatform3_6;
	// System.Boolean PlatformFall::touched
	bool ___touched_7;
	// UnityEngine.Rigidbody2D PlatformFall::rb2d
	Rigidbody2D_t502193897 * ___rb2d_8;

public:
	inline static int32_t get_offset_of_fallDelay_2() { return static_cast<int32_t>(offsetof(PlatformFall_t3714567854, ___fallDelay_2)); }
	inline float get_fallDelay_2() const { return ___fallDelay_2; }
	inline float* get_address_of_fallDelay_2() { return &___fallDelay_2; }
	inline void set_fallDelay_2(float value)
	{
		___fallDelay_2 = value;
	}

	inline static int32_t get_offset_of_originalPlatform_3() { return static_cast<int32_t>(offsetof(PlatformFall_t3714567854, ___originalPlatform_3)); }
	inline SpriteRenderer_t1209076198 * get_originalPlatform_3() const { return ___originalPlatform_3; }
	inline SpriteRenderer_t1209076198 ** get_address_of_originalPlatform_3() { return &___originalPlatform_3; }
	inline void set_originalPlatform_3(SpriteRenderer_t1209076198 * value)
	{
		___originalPlatform_3 = value;
		Il2CppCodeGenWriteBarrier(&___originalPlatform_3, value);
	}

	inline static int32_t get_offset_of_touchedPlatform1_4() { return static_cast<int32_t>(offsetof(PlatformFall_t3714567854, ___touchedPlatform1_4)); }
	inline Sprite_t309593783 * get_touchedPlatform1_4() const { return ___touchedPlatform1_4; }
	inline Sprite_t309593783 ** get_address_of_touchedPlatform1_4() { return &___touchedPlatform1_4; }
	inline void set_touchedPlatform1_4(Sprite_t309593783 * value)
	{
		___touchedPlatform1_4 = value;
		Il2CppCodeGenWriteBarrier(&___touchedPlatform1_4, value);
	}

	inline static int32_t get_offset_of_touchedPlatform2_5() { return static_cast<int32_t>(offsetof(PlatformFall_t3714567854, ___touchedPlatform2_5)); }
	inline Sprite_t309593783 * get_touchedPlatform2_5() const { return ___touchedPlatform2_5; }
	inline Sprite_t309593783 ** get_address_of_touchedPlatform2_5() { return &___touchedPlatform2_5; }
	inline void set_touchedPlatform2_5(Sprite_t309593783 * value)
	{
		___touchedPlatform2_5 = value;
		Il2CppCodeGenWriteBarrier(&___touchedPlatform2_5, value);
	}

	inline static int32_t get_offset_of_touchedPlatform3_6() { return static_cast<int32_t>(offsetof(PlatformFall_t3714567854, ___touchedPlatform3_6)); }
	inline Sprite_t309593783 * get_touchedPlatform3_6() const { return ___touchedPlatform3_6; }
	inline Sprite_t309593783 ** get_address_of_touchedPlatform3_6() { return &___touchedPlatform3_6; }
	inline void set_touchedPlatform3_6(Sprite_t309593783 * value)
	{
		___touchedPlatform3_6 = value;
		Il2CppCodeGenWriteBarrier(&___touchedPlatform3_6, value);
	}

	inline static int32_t get_offset_of_touched_7() { return static_cast<int32_t>(offsetof(PlatformFall_t3714567854, ___touched_7)); }
	inline bool get_touched_7() const { return ___touched_7; }
	inline bool* get_address_of_touched_7() { return &___touched_7; }
	inline void set_touched_7(bool value)
	{
		___touched_7 = value;
	}

	inline static int32_t get_offset_of_rb2d_8() { return static_cast<int32_t>(offsetof(PlatformFall_t3714567854, ___rb2d_8)); }
	inline Rigidbody2D_t502193897 * get_rb2d_8() const { return ___rb2d_8; }
	inline Rigidbody2D_t502193897 ** get_address_of_rb2d_8() { return &___rb2d_8; }
	inline void set_rb2d_8(Rigidbody2D_t502193897 * value)
	{
		___rb2d_8 = value;
		Il2CppCodeGenWriteBarrier(&___rb2d_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
