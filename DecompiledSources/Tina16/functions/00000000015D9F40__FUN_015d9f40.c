/* Ghidra address: 015d9f40 */
/* Ghidra symbol: FUN_015d9f40 */


void FUN_015d9f40(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  int local_68 [2];
  undefined1 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  char local_19 [9];
  
  local_50 = auStack_98;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_28 = (undefined8 *)0x0;
  local_30 = (undefined8 *)0x0;
  local_48 = 0;
  if (*(char *)((longlong)param_1 + 0x103) == '\0') {
    puVar1 = auStack_98;
    if (param_1[0x4a] == 0) {
      FUN_015d9000(param_1,param_1[0x11]);
      puVar1 = local_50;
    }
    local_50 = puVar1;
    FUN_015c1bf0(param_1[0x13],*(undefined4 *)(param_2 + 0xc));
    *(undefined1 *)(param_1[0x13] + 8) = *(undefined1 *)(param_2 + 8);
    local_19[0] = '\0';
  }
  else if ((short)param_1[0x14] == -0x100) {
    local_50 = auStack_98;
    if (param_1[0x4a] != 0) {
      local_50 = auStack_98;
      FUN_00410f20(param_1[0x4a]);
      param_1[0x4a] = 0;
    }
    local_38 = FUN_015c1f20(param_1[0x21],param_2);
    do {
      FUN_00414b50(&local_30,param_1[0x11]);
      (**(code **)(*param_1 + 0xd0))(param_1,*(undefined4 *)(param_2 + 0xc),&local_30,local_19);
      if (local_19[0] == '\0') {
        local_40 = FUN_015d9770(param_1,local_30);
        if ((0x10000 < local_40) &&
           (((local_38 < 1 || (*(char *)((longlong)param_1 + 0x103) != '\x01')) ||
            (local_38 <= local_40)))) break;
        (**(code **)(*param_1 + 0xf0))(param_1,*(undefined4 *)(param_2 + 0xc),local_30,local_19);
      }
    } while (local_19[0] == '\0');
    if ((local_19[0] == '\0') &&
       (FUN_015d9000(param_1,local_30), *(char *)((longlong)param_1 + 0x103) == '\x01')) {
      cVar2 = FUN_015c1b10(param_2);
      if (cVar2 == '\0') {
        local_68[0] = *(int *)(param_2 + 0xc) + 1;
        local_60 = 0;
        FUN_00442f70(&local_70,L"%.3d",local_68,0);
        FUN_00416ba0(&local_48,L"pkback# ",local_70);
      }
      else {
        local_68[0] = 1;
        local_60 = 0;
        FUN_00442f70(&local_58,L"%.3d",local_68,0);
        FUN_00416ba0(&local_48,L"pkback# ",local_58);
      }
      FUN_00441820(&local_78,local_30);
      uVar4 = FUN_00416740(local_78);
      uVar5 = FUN_00416740(local_48);
      thunk_FUN_041f322b(uVar4,uVar5);
    }
  }
  else {
    local_50 = auStack_98;
    FUN_00414b50(&local_28,0);
    local_19[0] = '\0';
    cVar2 = FUN_015c1cb0(param_1[0x13],param_2);
    do {
      do {
        if (cVar2 != '\0') goto LAB_015da3a0;
        FUN_00414b50(&local_30,param_1[0x11]);
        local_19[0] = '\x01';
        cVar2 = FUN_015c1b10(param_2);
        if (cVar2 == '\0') {
          cVar2 = FUN_015c1b70(param_2);
          if (cVar2 == '\0') {
            (**(code **)(*param_1 + 0xe8))
                      (param_1,*(undefined4 *)(param_2 + 0xc),&local_30,local_19);
          }
          else {
            (**(code **)(*param_1 + 0xe0))(param_1,&local_30,local_19);
          }
        }
        else {
          (**(code **)(*param_1 + 0xd8))(param_1,&local_30,local_19);
        }
        cVar2 = local_19[0];
      } while (local_19[0] != '\0');
      iVar3 = FUN_00416db0(local_30,local_28);
      if ((iVar3 == 0) && (*(char *)((longlong)param_1 + 0x103) != '\x01')) goto LAB_015da3a0;
      cVar2 = FUN_015bf1b0(local_30);
    } while ((cVar2 == '\0') && (cVar2 = local_19[0], (short)param_1[0x14] != -0x100));
    FUN_015d9000(param_1,local_30);
    FUN_015c1bf0(param_1[0x13],*(undefined4 *)(param_2 + 0xc));
    *(undefined1 *)(param_1[0x13] + 8) = *(undefined1 *)(param_2 + 8);
  }
LAB_015da3a0:
  if (local_19[0] != '\0') {
    uVar4 = FUN_015b59b0(&PTR_FUN_015b5818,1,0x2d,param_1);
    FUN_004134c0(uVar4);
  }
  FUN_00414560(&local_78,2);
  FUN_00414480(&local_58);
  FUN_00414480(&local_48);
  FUN_00414560(&local_30,2);
  return;
}

