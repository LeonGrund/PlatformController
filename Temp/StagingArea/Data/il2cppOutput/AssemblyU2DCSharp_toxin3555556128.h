#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// toxin
struct  toxin_t3555556128  : public MonoBehaviour_t1158329972
{
public:
	// System.Single toxin::LiveTime
	float ___LiveTime_2;
	// System.Single toxin::Speed
	float ___Speed_3;

public:
	inline static int32_t get_offset_of_LiveTime_2() { return static_cast<int32_t>(offsetof(toxin_t3555556128, ___LiveTime_2)); }
	inline float get_LiveTime_2() const { return ___LiveTime_2; }
	inline float* get_address_of_LiveTime_2() { return &___LiveTime_2; }
	inline void set_LiveTime_2(float value)
	{
		___LiveTime_2 = value;
	}

	inline static int32_t get_offset_of_Speed_3() { return static_cast<int32_t>(offsetof(toxin_t3555556128, ___Speed_3)); }
	inline float get_Speed_3() const { return ___Speed_3; }
	inline float* get_address_of_Speed_3() { return &___Speed_3; }
	inline void set_Speed_3(float value)
	{
		___Speed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
