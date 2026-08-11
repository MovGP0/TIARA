/* Ghidra address: 01874e10 */
/* Ghidra symbol: FUN_01874e10 */


void FUN_01874e10(undefined8 param_1,undefined1 *param_2,undefined4 *param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_4 != 0) {
    do {
      *param_2 = *(undefined1 *)param_3;
      param_2[1] = (char)((uint)*param_3 >> 8);
      param_2[2] = (char)((uint)*param_3 >> 0x10);
      param_2[3] = (char)((uint)*param_3 >> 0x18);
      param_2 = param_2 + 4;
      param_3 = param_3 + 1;
      uVar1 = uVar1 + 4;
    } while (uVar1 < param_4);
  }
  return;
}

