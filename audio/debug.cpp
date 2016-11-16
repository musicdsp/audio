/** @file
 * @author Edouard DUPIN 
 * @copyright 2011, Edouard DUPIN, all right reserved
 * @license APACHE v2.0 (see license file)
 */

#include <audio/debug.hpp>

int32_t audio::getLogId() {
	static int32_t g_val = elog::registerInstance("audio");
	return g_val;
}