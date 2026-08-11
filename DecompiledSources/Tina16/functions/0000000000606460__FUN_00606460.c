/* Ghidra address: 00606460 */
/* Ghidra symbol: FUN_00606460 */


void FUN_00606460(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_00607b80(*(undefined8 *)(param_1 + 0x48));
  uVar1 = FUN_00410e60(&PTR_FUN_005f84b0,1);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  FUN_00607b70(uVar1);
  return;
}

