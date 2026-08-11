/* Ghidra address: 00f55ad0 */
/* Ghidra symbol: FUN_00f55ad0 */


void FUN_00f55ad0(byte *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1;
  if (uVar1 != 0) {
    param_1 = param_1 + 8;
    do {
      FUN_00f55390(param_1,param_2,param_3,param_4);
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}

