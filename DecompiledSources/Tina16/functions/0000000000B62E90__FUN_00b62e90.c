/* Ghidra address: 00b62e90 */
/* Ghidra symbol: FUN_00b62e90 */


void FUN_00b62e90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined1 *local_20;
  
  local_20 = auStack_48;
  FUN_00414b90(param_1 + 0x38,param_3);
  local_28 = FUN_00b17e60(&DAT_00b16888,1,0,param_2);
  *(longlong *)(param_1 + 0x10) = local_28;
  uVar2 = FUN_00b17ba0(*(undefined8 *)(local_28 + 0x10),"Workbook");
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  FUN_00b62d50(param_1);
  FUN_00b62d60(param_1);
  iVar1 = FUN_00416420(*(undefined8 *)(param_1 + 0x38),0);
  if (iVar1 != 0) {
    FUN_00b68310(param_1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x10) + -0x20))(*(longlong **)(param_1 + 0x10),1);
  return;
}

