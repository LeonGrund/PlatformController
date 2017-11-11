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

// batFire
struct  batFire_t2482251065  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform batFire::FirePoint
	Transform_t3275118058 * ___FirePoint_2;
	// UnityEngine.GameObject batFire::txn
	GameObject_t1756533147 * ___txn_3;

public:
	inline static int32_t get_offset_of_FirePoint_2() { return static_cast<int32_t>(offsetof(batFire_t2482251065, ___FirePoint_2)); }
	inline Transform_t3275118058 * get_FirePoint_2() const { return ___FirePoint_2; }
	inline Transform_t3275118058 ** get_address_of_FirePoint_2() { return &___FirePoint_2; }
	inline void set_FirePoint_2(Transform_t3275118058 * value)
	{
		___FirePoint_2 = value;
		Il2CppCodeGenWriteBarrier(&___FirePoint_2, value);
	}

	inline static int32_t get_offset_of_txn_3() { return static_cast<int32_t>(offsetof(batFire_t2482251065, ___txn_3)); }
	inline GameObject_t1756533147 * get_txn_3() const { return ___txn_3; }
	inline GameObject_t1756533147 ** get_address_of_txn_3() { return &___txn_3; }
	inline void set_txn_3(GameObject_t1756533147 * value)
	{
		___txn_3 = value;
		Il2CppCodeGenWriteBarrier(&___txn_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
