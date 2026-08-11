/* Ghidra address: 00827470 */
/* Ghidra symbol: FUN_00827470 */


undefined4 FUN_00827470(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00827410(param_1);
  FUN_007d5fa0(param_1,uVar1,param_2,param_3);
  *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
  return uVar1;
}

