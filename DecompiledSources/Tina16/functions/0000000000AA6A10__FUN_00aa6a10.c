/* Ghidra address: 00aa6a10 */
/* Ghidra symbol: FUN_00aa6a10 */


undefined8 FUN_00aa6a10(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x9c) < *(int *)(param_1 + 0xa0)) {
    uVar1 = FUN_00410e60(&PTR_FUN_00a69668,1);
    uVar1 = FUN_00aa68c0(param_1,uVar1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

