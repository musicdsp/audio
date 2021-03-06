/** @file
 * @author Edouard DUPIN 
 * @copyright 2011, Edouard DUPIN, all right reserved
 * @license MPL v2.0 (see license file)
 */
#pragma once

#include <etk/String.hpp>

namespace audio {
	enum format {
		format_unknow,
		format_int8, //!< Signed 8 bits
		format_int8_on_int16, //!< Signed 8 bits on 16 bits data (8 bit fixpoint value)
		format_int16, //!< Signed 16 bits
		format_int16_on_int32, //!< Signed 16 bits on 32 bits data (16 bit fixpoint value)
		format_int24, //!< Signed 24 bits on 24 bits (lower)
		format_int24_on_int32, //!< Signed 24 bits on 32 bits (lower)
		format_int32, //!< Signed 32 bits
		format_int32_on_int64, //!< Signed 32 bits on 64 bits data (32 bit fixpoint value)
		format_int64, //!< Signed 64 bits
		format_float, //!< Floating point 32 bits (single precision)
		format_double //!< Floating point 64 bits (double precision)
	};
	etk::String getFormatString(enum audio::format _format);
	enum audio::format getFormatFromString(const etk::String& _value);
	etk::Vector<enum audio::format> getListFormatFromString(const etk::String& _value);
	etk::Stream& operator <<(etk::Stream& _os, enum audio::format _obj);
	etk::Stream& operator <<(etk::Stream& _os, const etk::Vector<enum audio::format>& _obj);
	uint32_t getFormatBytes(enum audio::format _format);
	// For ROS Interface:
	etk::Vector<uint8_t> convertFormat(const etk::Vector<enum audio::format>& _obj);
	etk::Vector<enum audio::format> convertFormat(const etk::Vector<uint8_t>& _obj);
	uint8_t convertFormat(enum audio::format _obj);
	enum audio::format convertFormat(uint8_t _obj);
}

