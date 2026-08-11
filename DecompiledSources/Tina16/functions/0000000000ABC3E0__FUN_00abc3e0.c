/* Ghidra address: 00abc3e0 */
/* Ghidra symbol: FUN_00abc3e0 */


byte FUN_00abc3e0(longlong param_1,undefined8 param_2,int param_3,int param_4,longlong *param_5,
                 longlong *param_6,undefined8 *param_7)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined4 *local_c0;
  char *local_b8;
  char *local_b0;
  undefined8 *local_a8;
  longlong *local_a0;
  longlong local_98;
  byte local_89;
  undefined8 local_88;
  int local_80;
  int local_7c;
  undefined4 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  char local_36;
  char local_35;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c [3];
  
  local_60[0] = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = (undefined4 *)0x0;
  local_50 = 0;
  *param_7 = 0;
  local_89 = 0;
  *param_5 = 0;
  *param_6 = 0;
  local_98 = param_1;
  local_88 = param_2;
  local_80 = param_3;
  local_7c = param_4;
  if (0 < *(int *)(*(longlong *)(param_1 + 0xf8) + 0x10)) {
    local_c8 = (longlong *)&local_30;
    local_c0 = &local_34;
    local_b8 = &local_35;
    local_b0 = &local_36;
    local_a8 = &local_40;
    local_a0 = &local_48;
    cVar1 = FUN_00ac51f0(*(longlong *)(param_1 + 0xf8),param_3,param_4,local_2c);
    if (cVar1 != '\0') {
      if (*(longlong *)(local_48 + 0xe8) == 0) {
        if (*(longlong *)(local_48 + 200) != 0) {
          FUN_00414ad0(param_7,*(undefined8 *)(local_48 + 200));
          local_89 = local_89 | 4;
        }
      }
      else {
        FUN_00414ad0(param_7,*(undefined8 *)(local_48 + 0xe8));
        local_89 = local_89 | 4;
      }
      *(longlong *)(*(longlong *)(local_98 + 0x18) + 0x270) = local_48;
      if (*(longlong *)(local_48 + 0x1c8) == 0) {
        if (local_36 == '\0') {
          lVar2 = FUN_00a94a50(*(undefined8 *)(local_98 + 0x118),local_34);
          if (*(longlong *)(*(longlong *)(lVar2 + 8) + 8) != 0) {
            local_89 = local_89 | 1;
            lVar3 = FUN_00abc3b0(auStack_e8,*(longlong *)(lVar2 + 8));
            *param_5 = lVar3;
            *(longlong *)(*(longlong *)(local_98 + 0x18) + 0x260) = lVar2;
            if (local_35 != '\0') {
              FUN_0043f750(&local_70,local_2c[0]);
              FUN_0043f750(&local_78,local_30);
              local_c8 = (longlong *)&LAB_00abc910;
              local_c0 = local_78;
              FUN_00416cd0(&local_68,4,&DAT_00abc900,local_70);
              FUN_009ec420(local_60,local_68);
              FUN_00416ad0(*param_5 + 8,local_60[0]);
            }
          }
        }
        else {
          local_c8 = &local_50;
          cVar1 = FUN_00a73340(local_40,local_2c[0],local_30,param_5);
          if ((cVar1 != '\0') && (local_89 = local_89 | 1, local_50 != 0)) {
            FUN_00414ad0(param_7,local_50);
            local_89 = local_89 | 4;
          }
        }
      }
      else {
        *param_6 = *(longlong *)(local_48 + 0x1c8);
        local_89 = local_89 | 2;
        lVar2 = *param_6;
        *(undefined4 *)(lVar2 + 0x158) = local_2c[0];
        *(undefined4 *)(lVar2 + 0x15c) = local_30;
      }
      goto LAB_00abc890;
    }
  }
  lVar3 = 0;
  lVar2 = *(longlong *)(local_98 + 0xf0);
  for (iVar6 = 0; iVar6 < *(int *)(lVar2 + 0x10); iVar6 = iVar6 + 1) {
    lVar3 = FUN_00ac5680(*(undefined8 *)(local_98 + 0xf0),iVar6);
    if (((*(int *)(lVar3 + 0x34) < local_7c) &&
        (local_7c <= *(int *)(lVar3 + 0x34) + *(int *)(lVar3 + 0x18))) &&
       (*(char *)(lVar3 + 0x49) != '\0')) break;
  }
  if (iVar6 < *(int *)(lVar2 + 0x10)) {
    if (*(int *)(lVar3 + 0x2c) <= local_80) {
      iVar6 = local_80 - *(int *)(lVar3 + 0x2c);
      if (0 < *(int *)(lVar3 + 0x38)) {
        uVar4 = FUN_005ffa40(local_88);
        thunk_FUN_04186fad(uVar4,*(undefined4 *)(lVar3 + 0x3c),*(undefined4 *)(lVar3 + 0x38));
      }
      local_c8 = (longlong *)CONCAT44(local_c8._4_4_,*(undefined4 *)(lVar3 + 0x20));
      iVar6 = FUN_00ab5e00(local_98,local_88,iVar6,*(undefined8 *)(lVar3 + 8));
      if (0 < *(int *)(lVar3 + 0x38)) {
        uVar4 = FUN_005ffa40(local_88);
        thunk_FUN_04186fad(uVar4,0,0);
      }
      if (iVar6 < *(int *)(lVar3 + 0x20)) {
        lVar2 = FUN_00a94a50(*(undefined8 *)(local_98 + 0x118),
                             iVar6 + (int)((*(longlong *)(lVar3 + 8) -
                                           *(longlong *)(local_98 + 0xd8)) / 2));
        if ((*(longlong *)(*(longlong *)(lVar2 + 8) + 8) != 0) &&
           (*(short *)(*(longlong *)(lVar3 + 8) + (longlong)iVar6 * 2) != 4)) {
          local_89 = local_89 | 1;
          lVar5 = FUN_00abc3b0(auStack_e8,*(longlong *)(lVar2 + 8));
          *param_5 = lVar5;
          *(longlong *)(*(longlong *)(local_98 + 0x18) + 0x260) = lVar2;
        }
        if ((*(longlong *)(lVar2 + 0x20) != 0) &&
           (*(short *)(*(longlong *)(lVar3 + 8) + (longlong)iVar6 * 2) != 4)) {
          FUN_00414ad0(param_7,*(undefined8 *)(lVar2 + 0x20));
          local_89 = local_89 | 4;
        }
      }
    }
  }
LAB_00abc890:
  FUN_00414560(&local_78,4);
  FUN_00414480(&local_50);
  return local_89;
}

