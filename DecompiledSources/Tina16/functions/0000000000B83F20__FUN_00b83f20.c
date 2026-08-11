/* Ghidra address: 00b83f20 */
/* Ghidra symbol: FUN_00b83f20 */


void FUN_00b83f20(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  undefined4 uVar1;
  
  FUN_0040d200(param_1 + 0x98,0x10,0);
  FUN_00409a70(param_2,param_1 + 0x98,(param_3 & 0xffffffff) / 8);
  uVar1 = FUN_00b83da0(*(undefined4 *)(param_1 + 0x98));
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  uVar1 = FUN_00b83da0(*(undefined4 *)(param_1 + 0x9c));
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  uVar1 = FUN_00b83da0(*(undefined4 *)(param_1 + 0xa0));
  *(undefined4 *)(param_1 + 0xa0) = uVar1;
  uVar1 = FUN_00b83da0(*(undefined4 *)(param_1 + 0xa4));
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  return;
}

