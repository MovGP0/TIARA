/* Ghidra address: 00d20e50 */
/* Ghidra symbol: FUN_00d20e50 */


undefined8 FUN_00d20e50(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_20 = 0;
  local_58 = 0;
  FUN_00414c70(&local_20,param_1);
  FUN_00416880(local_30,local_20);
  iVar1 = FUN_004170c0(&LAB_00d21050,local_30[0],1);
  if (0 < iVar1) {
    FUN_00415b50(&local_20,1,iVar1);
  }
  plVar3 = (longlong *)FUN_00d20e10();
  iVar1 = (**(code **)(*plVar3 + 0x28))();
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_00416880(&local_38,local_20);
      uVar4 = (**(code **)(*DAT_01eca858 + 0x30))(DAT_01eca858,iVar5);
      FUN_00cd7870(&local_40,uVar4);
      FUN_00416880(&local_48,local_40);
      iVar2 = FUN_0043e6d0(local_38,local_48);
      if (iVar2 == 0) {
        local_58 = (**(code **)(*DAT_01eca858 + 0x30))(DAT_01eca858,iVar5);
        goto LAB_00d20fb9;
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00416880(&local_50,local_20);
  iVar1 = (**(code **)(*DAT_01eca858 + 0xb8))(DAT_01eca858,local_50);
  if (-1 < iVar1) {
    local_58 = (**(code **)(*DAT_01eca858 + 0x30))(DAT_01eca858,iVar1);
  }
LAB_00d20fb9:
  FUN_00414560(&local_50,2);
  FUN_004144d0(&local_40);
  FUN_00414560(&local_38,2);
  FUN_004144d0(&local_20);
  return local_58;
}

