/* Ghidra address: 01c830b0 */
/* Ghidra symbol: FUN_01c830b0 */


void FUN_01c830b0(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 local_res10 [3];
  undefined1 auStack_b8 [32];
  int local_98;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  double local_40;
  int local_34;
  int local_30;
  char local_29;
  longlong *local_28;
  longlong local_20;
  
  local_50 = auStack_b8;
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_58 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (*PTR_DAT_020028e0 == '\0') {
    local_29 = '\0';
    iVar2 = FUN_0072d440(L"Would you like Macro Pins instead of test signals?",4,0xb,0);
    if (iVar2 == 2) goto LAB_01c83390;
    if (iVar2 == 6) {
      local_29 = '\x01';
    }
    else if (iVar2 == 7) {
      local_29 = '\0';
    }
  }
  else if (*PTR_DAT_02001a98 == '\0') {
    local_29 = '\0';
  }
  else {
    local_29 = '\x01';
  }
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_01c77470(param_1,1);
  local_20 = *(longlong *)(param_1 + 0x27a8);
  local_30 = 0;
  FUN_01c821c0(auStack_b8);
  local_30 = local_30 + 0x40;
  iVar2 = (**(code **)(*local_28 + 0x28))();
  local_34 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*local_28 + 0x18))(local_28,&local_58,local_34);
      local_98 = local_34 + 1;
      FUN_01c82b90(auStack_b8,0x50,local_30,local_58);
      local_30 = local_30 + 0x40;
      local_34 = local_34 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_019a4ba0(local_20,1);
  FUN_0199e310(local_20,1,1,0);
  FUN_004414c0(&local_60,local_res10[0],L".TSC");
  FUN_00414b50(local_res10,local_60);
  FUN_014a1260(*(undefined8 *)PTR_DAT_02004ec0,0);
  (**(code **)(**(longlong **)(param_1 + 0xa10) + 0x180))(*(longlong **)(param_1 + 0xa10));
  if ((local_29 == '\0') && (local_20 != 0)) {
    FUN_01c82f90(auStack_b8,*(undefined8 *)(param_1 + 0x27a8));
    bVar1 = (**(code **)(*local_28 + 0x28))(local_28);
    local_40 = (double)(uint)(1 << (bVar1 & 0x1f)) / 1000.0;
    *(double *)(PTR_DAT_02004010 + 0x2c0) = local_40;
  }
  FUN_00410f20(local_28);
LAB_01c83390:
  FUN_00414560(&local_70,4);
  FUN_00414480(local_res10);
  return;
}

