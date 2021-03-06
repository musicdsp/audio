/** @file
 * @author Edouard DUPIN 
 * @copyright 2011, Edouard DUPIN, all right reserved
 * @license MPL v2.0 (see license file)
 */
#pragma once

#include <etk/String.hpp>
#include <etk/Vector.hpp>
#include <etk/types.hpp>

namespace audio {
	enum channel {
		channel_unknow, //!< Error channel ...
		// normal level
		channel_frontLeft, //!< channel Front Left
		channel_frontCenter, //!< channel Front Center
		channel_frontRight, //!< channel Front Right
		channel_rearLeft, //!< channel rear Left
		channel_rearCenter, //!< channel rear Center
		channel_rearRight, //!< channel rear Right
		channel_centerLeft, //!< channel center Left
		channel_centerRight, //!< channel center Right
		// top level
		channel_topFrontLeft, //!< channel top front left
		channel_topFrontCenter, //!< channel top front center
		channel_topFrontRight, //!< channel top front right
		channel_topRearLeft, //!< channel top rear left
		channel_topRearCenter, //!< channel top rear center
		channel_topRearRight, //!< channel top rear Right
		channel_topCenterLeft, //!< channel top center left
		channel_topCenterRight, //!< channel top center right
		// global elements
		channel_lfe, //!< channel Low frequency
		// Some user auxyliary channel (audio mixing table)
		channel_aux0,
		channel_aux1,
		channel_aux2,
		channel_aux3,
		channel_aux4,
		channel_aux5,
		channel_aux6,
		channel_aux7,
		channel_aux8,
		channel_aux9,
		channel_aux10,
		channel_aux11,
		channel_aux12,
		channel_aux13,
		channel_aux14,
		channel_aux15,
		channel_aux16,
		channel_aux17,
		channel_aux18,
		channel_aux19,
		channel_aux20,
		channel_aux21,
		channel_aux22,
		channel_aux23,
		channel_aux24,
		channel_aux25,
		channel_aux26,
		channel_aux27,
		channel_aux28,
		channel_aux29,
		channel_aux30,
		channel_aux31,
	};
	etk::String getChannelString(enum audio::channel _obj);
	etk::String getChannelString(const etk::Vector<enum audio::channel>& _obj);
	enum audio::channel getChannelFromString(const etk::String& _value);
	etk::Vector<enum audio::channel> getListChannelFromString(const etk::String& _value);
	etk::Stream& operator <<(etk::Stream& _os, enum audio::channel _obj);
	etk::Stream& operator <<(etk::Stream& _os, const etk::Vector<enum audio::channel>& _obj);
	etk::Stream& operator <<(etk::Stream& _os, const etk::Vector<etk::Vector<enum audio::channel> >& _obj);
	// For ROS Interface:
	etk::Vector<uint8_t> convertChannel(const etk::Vector<enum audio::channel>& _obj);
	etk::Vector<enum audio::channel> convertChannel(const etk::Vector<uint8_t>& _obj);
}

