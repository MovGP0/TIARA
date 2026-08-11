/* Ghidra address: 00948790 */
/* Ghidra symbol: FUN_00948790 */


undefined8 FUN_00948790(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  iVar1 = FUN_009484c0(param_2);
  if (iVar1 < 0x10000) {
    FUN_00415e60(param_1,iVar1);
  }
  else {
    uVar2 = FUN_008f75e0(iVar1);
    FUN_00415e60(local_20,uVar2);
    uVar2 = FUN_008f75f0(iVar1);
    FUN_00415e60(&local_28,uVar2);
    FUN_00416020(param_1,local_20[0],local_28);
  }
  FUN_004145c0(&local_28,2);
  return param_1;
}

