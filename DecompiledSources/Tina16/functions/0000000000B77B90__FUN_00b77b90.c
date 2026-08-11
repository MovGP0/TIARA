/* Ghidra address: 00b77b90 */
/* Ghidra symbol: FUN_00b77b90 */


uint FUN_00b77b90(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  for (; param_2 != 0; param_2 = param_2 >> 1) {
    if ((param_2 & 1) != 0) {
      uVar1 = uVar1 ^ param_1;
    }
    param_1 = param_1 * 2;
    if (0xff < param_1) {
      param_1 = param_1 ^ param_3;
    }
  }
  return uVar1;
}

