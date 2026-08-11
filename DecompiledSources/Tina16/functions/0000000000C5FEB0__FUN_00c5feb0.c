/* Ghidra address: 00c5feb0 */
/* Ghidra symbol: FUN_00c5feb0 */


undefined8
FUN_00c5feb0(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  int iVar1;
  
  FUN_00c5fc40(param_1);
  iVar1 = *(int *)PTR_DAT_02002d48;
  *(int *)(param_1 + 0x28) = param_4 / *(int *)PTR_DAT_020033a8;
  *(int *)(param_1 + 0x2c) = param_5 / iVar1;
  FUN_00c5fc40(param_1,(longlong)param_5 % (longlong)iVar1 & 0xffffffff);
  return 0;
}

