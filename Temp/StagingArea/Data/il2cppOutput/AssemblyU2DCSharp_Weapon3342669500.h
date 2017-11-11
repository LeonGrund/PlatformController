#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Weapon
struct  Weapon_t3342669500  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform Weapon::FirePoint
	Transform_t3275118058 * ___FirePoint_2;
	// UnityEngine.GameObject Weapon::bulletRight
	GameObject_t1756533147 * ___bulletRight_3;
	// UnityEngine.GameObject Weapon::bulletLeft
	GameObject_t1756533147 * ___bulletLeft_4;

public:
	inline static int32_t get_offset_of_FirePoint_2() { return static_cast<int32_t>(offsetof(Weapon_t3342669500, ___FirePoint_2)); }
	inline Transform_t3275118058 * get_FirePoint_2() const { return ___FirePoint_2; }
	inline Transform_t3275118058 ** get_address_of_FirePoint_2() { return &___FirePoint_2; }
	inline void set_FirePoint_2(Transform_t3275118058 * value)
	{
		___FirePoint_2 = value;
		Il2CppCodeGenWriteBarrier(&___FirePoint_2, value);
	}

	inline static int32_t get_offset_of_bulletRight_3() { return static_cast<int32_t>(offsetof(Weapon_t3342669500, ___bulletRight_3)); }
	inline GameObject_t1756533147 * get_bulletRight_3() const { return ___bulletRight_3; }
	inline GameObject_t1756533147 ** get_address_of_bulletRight_3() { return &___bulletRight_3; }
	inline void set_bulletRight_3(GameObject_t1756533147 * value)
	{
		___bulletRight_3 = value;
		Il2CppCodeGenWriteBarrier(&___bulletRight_3, value);
	}

	inline static int32_t get_offset_of_bulletLeft_4() { return static_cast<int32_t>(offsetof(Weapon_t3342669500, ___bulletLeft_4)); }
	inline GameObject_t1756533147 * get_bulletLeft_4() const { return ___bulletLeft_4; }
	inline GameObject_t1756533147 ** get_address_of_bulletLeft_4() { return &___bulletLeft_4; }
	inline void set_bulletLeft_4(GameObject_t1756533147 * value)
	{
		___bulletLeft_4 = value;
		Il2CppCodeGenWriteBarrier(&___bulletLeft_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
