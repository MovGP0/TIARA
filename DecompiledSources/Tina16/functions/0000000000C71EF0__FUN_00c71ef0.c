/* Ghidra address: 00c71ef0 */
/* Ghidra symbol: FUN_00c71ef0 */


undefined4 FUN_00c71ef0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00c71e90(param_1);
  FUN_007d5fa0(param_1,uVar1,param_2,param_3);
  *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
  return uVar1;
}

