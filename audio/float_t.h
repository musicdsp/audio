/** @file
 * @author Edouard DUPIN 
 * @copyright 2011, Edouard DUPIN, all right reserved
 * @license APACHE v2.0 (see license file)
 */

#include <audio/types.h>

#ifndef __AUDIO_TYPE_FLOAT_T_H__
#define __AUDIO_TYPE_FLOAT_T_H__

namespace audio {
	class float_t {
		private:
			float m_data;
		public:
			float get() const {
				return m_data;
			}
	};
}

#endif

