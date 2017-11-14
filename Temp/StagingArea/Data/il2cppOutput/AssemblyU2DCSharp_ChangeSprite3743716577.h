#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChangeSprite
struct  ChangeSprite_t3743716577  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite ChangeSprite::groundSprite
	Sprite_t309593783 * ___groundSprite_2;
	// UnityEngine.Sprite ChangeSprite::airSprite
	Sprite_t309593783 * ___airSprite_3;
	// UnityEngine.SpriteRenderer ChangeSprite::SRenderer
	SpriteRenderer_t1209076198 * ___SRenderer_4;
	// UnityEngine.Transform ChangeSprite::groundCheck
	Transform_t3275118058 * ___groundCheck_5;

public:
	inline static int32_t get_offset_of_groundSprite_2() { return static_cast<int32_t>(offsetof(ChangeSprite_t3743716577, ___groundSprite_2)); }
	inline Sprite_t309593783 * get_groundSprite_2() const { return ___groundSprite_2; }
	inline Sprite_t309593783 ** get_address_of_groundSprite_2() { return &___groundSprite_2; }
	inline void set_groundSprite_2(Sprite_t309593783 * value)
	{
		___groundSprite_2 = value;
		Il2CppCodeGenWriteBarrier(&___groundSprite_2, value);
	}

	inline static int32_t get_offset_of_airSprite_3() { return static_cast<int32_t>(offsetof(ChangeSprite_t3743716577, ___airSprite_3)); }
	inline Sprite_t309593783 * get_airSprite_3() const { return ___airSprite_3; }
	inline Sprite_t309593783 ** get_address_of_airSprite_3() { return &___airSprite_3; }
	inline void set_airSprite_3(Sprite_t309593783 * value)
	{
		___airSprite_3 = value;
		Il2CppCodeGenWriteBarrier(&___airSprite_3, value);
	}

	inline static int32_t get_offset_of_SRenderer_4() { return static_cast<int32_t>(offsetof(ChangeSprite_t3743716577, ___SRenderer_4)); }
	inline SpriteRenderer_t1209076198 * get_SRenderer_4() const { return ___SRenderer_4; }
	inline SpriteRenderer_t1209076198 ** get_address_of_SRenderer_4() { return &___SRenderer_4; }
	inline void set_SRenderer_4(SpriteRenderer_t1209076198 * value)
	{
		___SRenderer_4 = value;
		Il2CppCodeGenWriteBarrier(&___SRenderer_4, value);
	}

	inline static int32_t get_offset_of_groundCheck_5() { return static_cast<int32_t>(offsetof(ChangeSprite_t3743716577, ___groundCheck_5)); }
	inline Transform_t3275118058 * get_groundCheck_5() const { return ___groundCheck_5; }
	inline Transform_t3275118058 ** get_address_of_groundCheck_5() { return &___groundCheck_5; }
	inline void set_groundCheck_5(Transform_t3275118058 * value)
	{
		___groundCheck_5 = value;
		Il2CppCodeGenWriteBarrier(&___groundCheck_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
