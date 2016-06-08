#ifndef MS_STRING_HPP_20160307_
#define MS_STRING_HPP_20160307_

#include <string>

namespace ms_string {
	// T is std::vector|std::list|std::set
	template <class T>
	bool SplitString2Container(const std::string& content, char ch, T& container) {
		container.clear();
		if (content.empty()) return true;
		long l_index = -1, l_last;
		while ((l_index = content.find(ch, l_last = (l_index + 1))) >= 0) {
			if (0 == l_index) continue;
			typename T::iterator iter(container.end());
			container.insert(iter, content.substr(l_last, l_index - l_last));
		}
		if (l_last >= 0 && l_last < (long)content.size() -1) {
			typename T::iterator iter(container.end());
			container.insert(iter, content.substr(l_last));
		}
		return true;
	}
	
} // namespace ms_string

#endif