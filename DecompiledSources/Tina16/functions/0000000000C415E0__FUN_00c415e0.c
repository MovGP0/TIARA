/* Ghidra address: 00c415e0 */
/* Ghidra symbol: FUN_00c415e0 */


undefined1 FUN_00c415e0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90 [48];
  undefined1 *local_60;
  char local_49;
  longlong local_48;
  int local_3c;
  int local_38;
  undefined1 local_31;
  longlong *local_30;
  
  local_60 = auStack_c8;
  local_a0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_31 = 0;
  local_49 = '\x01';
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x10);
  local_38 = 0;
  if (-1 < iVar2 + -1) {
    do {
      local_48 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),local_38);
      if (local_49 == '\0') {
        iVar3 = (**(code **)(*local_30 + 0x28))(local_30);
        if (*(int *)(*(longlong *)(local_48 + 0x30) + 0x10) != iVar3) {
LAB_00c417d6:
          FUN_00c41810(0,local_60);
          goto LAB_00c417e4;
        }
        iVar3 = *(int *)(*(longlong *)(local_48 + 0x30) + 0x10);
        local_3c = 0;
        if (-1 < iVar3 + -1) {
          do {
            FUN_00c3d330(local_48,local_90,(undefined2)local_3c);
            FUN_004169a0(&local_a0,local_90);
            (**(code **)(*local_30 + 0x18))(local_30,&local_a8,local_3c);
            iVar1 = FUN_00416db0(local_a0,local_a8);
            if (iVar1 != 0) goto LAB_00c417d6;
            local_3c = local_3c + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      else {
        iVar3 = *(int *)(*(longlong *)(local_48 + 0x30) + 0x10);
        local_3c = 0;
        if (-1 < iVar3 + -1) {
          do {
            FUN_00c3d330(local_48,local_90,(undefined2)local_3c);
            FUN_004169a0(&local_98,local_90);
            (**(code **)(*local_30 + 0x78))(local_30,local_98);
            local_3c = local_3c + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      local_49 = '\0';
      local_38 = local_38 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_31 = 1;
  FUN_00410f20(local_30);
LAB_00c417e4:
  FUN_00414560(&local_a8,3);
  return local_31;
}

