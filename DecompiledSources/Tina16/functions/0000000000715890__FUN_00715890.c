/* Ghidra address: 00715890 */
/* Ghidra symbol: FUN_00715890 */


void FUN_00715890(longlong param_1,int param_2,longlong param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  int local_98 [2];
  undefined1 local_90;
  longlong *local_88;
  undefined1 *local_80;
  longlong local_70;
  longlong local_68;
  longlong local_58;
  longlong local_50;
  int local_44;
  longlong *local_40;
  undefined8 local_38;
  int local_30;
  uint local_2c;
  longlong *local_28;
  uint local_1c;
  
  local_80 = auStack_e8;
  local_b0 = (longlong *)0x0;
  local_a8 = 0;
  local_a0 = (longlong *)0x0;
  local_88 = (longlong *)0x0;
  local_38 = 0;
  local_40 = (longlong *)0x0;
  local_30 = 0;
  puVar1 = auStack_e8;
  if (param_3 != 0) {
    FUN_00414ad0(param_1 + 0x40,param_3);
    puVar1 = local_80;
  }
  local_80 = puVar1;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x10);
  if (iVar4 == 0) {
    uVar3 = FUN_0044d710(&PTR_FUN_00712030,1,PTR_PTR_02004928);
    FUN_004134c0(uVar3);
  }
  else {
    local_2c = 0;
    if (-1 < iVar4 + -1) {
      do {
        local_68 = *(longlong *)(param_1 + 0x28);
        if (*(uint *)(local_68 + 0x10) <= local_2c) {
          FUN_00594f90();
        }
        FUN_0041b840(&local_38,
                     *(undefined8 *)
                      (*(longlong *)(*(longlong *)(local_68 + 8) + (longlong)(int)local_2c * 8) + 8)
                    );
        FUN_0041b890(&local_88,local_38,&DAT_00715d80);
        cVar2 = (**(code **)(*local_88 + 0x70))(local_88,param_2,param_3);
        if (cVar2 != '\0') {
          local_30 = local_30 + 1;
          local_1c = local_2c;
        }
        local_2c = local_2c + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  if (local_30 == 0) {
    if (param_2 == 0) goto LAB_00715cbf;
    local_90 = 0;
    local_c8 = 0;
    local_98[0] = param_2;
    uVar3 = FUN_0044d8d0(&PTR_FUN_00712030,1,PTR_PTR_020049c8,local_98);
    FUN_004134c0(uVar3);
  }
  if (local_30 == 1) {
    FUN_007157a0(auStack_e8,param_2,param_3);
  }
  else if (*(longlong *)(param_1 + 0x18) == 0) {
    FUN_007157a0(auStack_e8,param_2,param_3);
  }
  else {
    FUN_0041b890(&local_40,*(undefined8 *)(param_1 + 0x18),&DAT_00715d90);
    if (local_40 == (longlong *)0x0) {
      FUN_007157a0(auStack_e8,param_2,param_3);
    }
    else {
      local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      iVar4 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x10);
      local_2c = 0;
      if (-1 < iVar4 + -1) {
        do {
          local_70 = *(longlong *)(param_1 + 0x28);
          if (*(uint *)(local_70 + 0x10) <= local_2c) {
            FUN_00594f90();
          }
          local_50 = *(longlong *)(*(longlong *)(local_70 + 8) + (longlong)(int)local_2c * 8);
          FUN_0041b840(&local_38,*(undefined8 *)(local_50 + 8));
          FUN_0041b890(&local_a0,local_38,&DAT_00715d80);
          cVar2 = (**(code **)(*local_a0 + 0x70))(local_a0,param_2,param_3);
          if (cVar2 != '\0') {
            (**(code **)(**(longlong **)(local_50 + 8) + 0x18))
                      (*(longlong **)(local_50 + 8),&local_a8);
            (**(code **)(*local_28 + 0x80))(local_28,local_a8,local_50);
          }
          local_2c = local_2c + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      local_44 = (**(code **)(*local_40 + 0x28))(local_40,local_28);
      if (local_44 < 0) {
        FUN_007157a0(auStack_e8,param_2,param_3);
      }
      else {
        local_58 = (**(code **)(*local_28 + 0x30))(local_28,local_44);
        FUN_0041b840(&local_38,*(undefined8 *)(local_58 + 8));
        FUN_0041b890(&local_b0,local_38,&DAT_00715d80);
        (**(code **)(*local_b0 + 0x78))(local_b0,param_2,param_3);
      }
      FUN_00410f20(local_28);
    }
  }
LAB_00715cbf:
  FUN_0041b800(&local_b0);
  FUN_00414480(&local_a8);
  FUN_0041b800(&local_a0);
  FUN_0041b800(&local_88);
  FUN_0041b800(&local_40);
  FUN_0041b800(&local_38);
  return;
}

