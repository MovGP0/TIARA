/* Ghidra address: 01b1fd10 */
/* Ghidra symbol: FUN_01b1fd10 */


ulonglong FUN_01b1fd10(ushort param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if ((param_1 & 1) != 0) {
    uVar1 = 4;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((param_1 & 0x10) != 0) {
    uVar1 = uVar1 | 2;
  }
  if ((param_1 & 0x20) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  return uVar1;
}

