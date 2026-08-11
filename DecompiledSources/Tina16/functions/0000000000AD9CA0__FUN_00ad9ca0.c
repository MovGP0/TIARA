/* Ghidra address: 00ad9ca0 */
/* Ghidra symbol: FUN_00ad9ca0 */


void FUN_00ad9ca0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_88;
  undefined1 *local_80;
  int local_68;
  undefined1 local_61;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_39;
  undefined8 local_38;
  undefined1 local_2a;
  char local_29;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_80 = auStack_b8;
  local_88 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_39 = *(undefined1 *)(param_1 + 0xf0);
  FUN_00ad47e0(param_1,0);
  local_58 = *(longlong *)(param_1 + 0xe8);
  lVar2 = FUN_004aeac0(local_58,*(int *)(local_58 + 0x10) + -1);
  local_40 = *(undefined4 *)(lVar2 + 0x70);
  FUN_00ad4730(param_1);
  FUN_00414480(&local_38);
  local_29 = '\0';
  local_2a = 0;
  local_48 = 0;
  do {
    bVar1 = *(byte *)(param_1 + 0x44);
    if (bVar1 < 200) {
      bVar4 = (*(byte *)(((longlong)((ulonglong)bVar1 + 0x20) >> 3) + 0xada078) >>
               ((ulonglong)bVar1 + 0x20 & 7) & 1) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      if (local_29 != '\0') {
        FUN_00414480(&local_28);
        FUN_0043ea00(&local_28,local_38);
        FUN_00414b50(&local_38,local_28);
        FUN_00414480(&local_28);
        local_98 = local_40;
        FUN_00accfd0(param_2,local_38,local_2a,local_48);
      }
      (**(code **)(*param_2 + 0x178))(param_2);
      FUN_00ad47e0(param_1,local_39);
      FUN_00414480(&local_88);
      FUN_00414480(&local_38);
      FUN_00414560(&local_28,2);
      return;
    }
    if (bVar1 == 2) {
      if (local_29 != '\0') {
        FUN_00a74e40(*(undefined8 *)(param_1 + 0x28),&local_88);
        FUN_00416ad0(&local_38,local_88);
      }
    }
    else if ((bVar1 == 0xbd) || (bVar1 == 0xc3)) {
      FUN_00414480(local_20);
      FUN_0043ea00(local_20,local_38);
      FUN_00414b50(&local_38,local_20[0]);
      FUN_00414480(local_20);
      if (local_29 != '\0') {
        local_98 = local_40;
        FUN_00accfd0(param_2,local_38,local_2a,local_48);
      }
      local_2a = 0;
      FUN_00414480(&local_38);
      local_29 = *(char *)(param_1 + 0x44) == -0x43;
      if ((bool)local_29) {
        local_50 = 0;
        local_60 = *(longlong *)(param_1 + 0x48);
        iVar3 = *(int *)(local_60 + 0x10);
        local_68 = 0;
        if (-1 < iVar3 + -1) {
          do {
            lVar2 = FUN_00a72910(local_60,local_68);
            if (*(char *)(lVar2 + 8) == 'I') {
              local_61 = 1;
              local_50 = FUN_00a72910(local_60,local_68);
              goto code_r0x00ad9e8f;
            }
            local_68 = local_68 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        local_61 = 0;
code_r0x00ad9e8f:
        local_2a = local_61;
        local_48 = FUN_00a72740(*(undefined8 *)(param_1 + 0x48));
      }
    }
    FUN_00ad4730(param_1);
  } while( true );
}

