#ifndef GAME_INCLUDE_GAME_UTILS_HPP_
#define GAME_INCLUDE_GAME_UTILS_HPP_

namespace game{
bool** createLab(int size, bool val = false);
void copyData(bool** lab, int size, bool data[][8]);
void deleteLab(bool** lab, int size);

}
#endif
