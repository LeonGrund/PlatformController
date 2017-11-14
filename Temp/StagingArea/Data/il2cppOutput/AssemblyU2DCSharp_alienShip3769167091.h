#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// alienShip
struct  alienShip_t3769167091  : public MonoBehaviour_t1158329972
{
public:
	// System.Single alienShip::fallDelay
	float ___fallDelay_2;
	// System.Boolean alienShip::touched
	bool ___touched_3;
	// System.Int32 alienShip::HP
	int32_t ___HP_4;
	// UnityEngine.Rigidbody2D alienShip::rb2d
	Rigidbody2D_t502193897 * ___rb2d_5;
	// System.Single alienShip::LiveTime
	float ___LiveTime_6;
	// System.Boolean alienShip::deadly
	bool ___deadly_7;

public:
	inline static int32_t get_offset_of_fallDelay_2() { return static_cast<int32_t>(offsetof(alienShip_t3769167091, ___fallDelay_2)); }
	inline float get_fallDelay_2() const { return ___fallDelay_2; }
	inline float* get_address_of_fallDelay_2() { return &___fallDelay_2; }
	inline void set_fallDelay_2(float value)
	{
		___fallDelay_2 = value;
	}

	inline static int32_t get_offset_of_touched_3() { return static_cast<int32_t>(offsetof(alienShip_t3769167091, ___touched_3)); }
	inline bool get_touched_3() const { return ___touched_3; }
	inline bool* get_address_of_touched_3() { return &___touched_3; }
	inline void set_touched_3(bool value)
	{
		___touched_3 = value;
	}

	inline static int32_t get_offset_of_HP_4() { return static_cast<int32_t>(offsetof(alienShip_t3769167091, ___HP_4)); }
	inline int32_t get_HP_4() const { return ___HP_4; }
	inline int32_t* get_address_of_HP_4() { return &___HP_4; }
	inline void set_HP_4(int32_t value)
	{
		___HP_4 = value;
	}

	inline static int32_t get_offset_of_rb2d_5() { return static_cast<int32_t>(offsetof(alienShip_t3769167091, ___rb2d_5)); }
	inline Rigidbody2D_t502193897 * get_rb2d_5() const { return ___rb2d_5; }
	inline Rigidbody2D_t502193897 ** get_address_of_rb2d_5() { return &___rb2d_5; }
	inline void set_rb2d_5(Rigidbody2D_t502193897 * value)
	{
		___rb2d_5 = value;
		Il2CppCodeGenWriteBarrier(&___rb2d_5, value);
	}

	inline static int32_t get_offset_of_LiveTime_6() { return static_cast<int32_t>(offsetof(alienShip_t3769167091, ___LiveTime_6)); }
	inline float get_LiveTime_6() const { return ___LiveTime_6; }
	inline float* get_address_of_LiveTime_6() { return &___LiveTime_6; }
	inline void set_LiveTime_6(float value)
	{
		___LiveTime_6 = value;
	}

	inline static int32_t get_offset_of_deadly_7() { return static_cast<int32_t>(offsetof(alienShip_t3769167091, ___deadly_7)); }
	inline bool get_deadly_7() const { return ___deadly_7; }
	inline bool* get_address_of_deadly_7() { return &___deadly_7; }
	inline void set_deadly_7(bool value)
	{
		___deadly_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
