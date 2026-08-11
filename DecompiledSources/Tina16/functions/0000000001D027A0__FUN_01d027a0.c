/* Ghidra address: 01d027a0 */
/* Ghidra symbol: FUN_01d027a0 */


undefined8 *
FUN_01d027a0(longlong *param_1,undefined8 *param_2,char param_3,undefined1 param_4,
            undefined8 param_5)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined *local_b0;
  short *local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined4 local_6c;
  undefined4 local_68;
  uint local_64;
  char local_5d;
  undefined4 local_5c;
  char local_55;
  double local_50;
  uint local_48;
  uint local_44;
  short *local_40;
  short *local_38;
  short *local_30;
  short *local_28;
  undefined2 *local_20 [2];
  
  local_80 = auStack_d8;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_30 = (short *)0x0;
  local_38 = (short *)0x0;
  local_20[0] = (undefined2 *)0x0;
  local_28 = (short *)0x0;
  FUN_00414610(param_5);
  FUN_00414480(param_2);
  if (param_3 != '\0') {
    if (((char)param_1[0x31] != '\0') && (FUN_01d04330(param_1,&local_38), local_38 != (short *)0x0)
       ) {
      local_b8 = local_38;
      FUN_00416cd0(param_2,3,*param_2,&DAT_01d02fec);
    }
    sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
    if (((sVar3 == 0x39) && (cVar1 = FUN_01d04d40(param_1), cVar1 != '\0')) &&
       ((*(byte *)(param_1[0x35] + 99) & 1) == 0)) {
      FUN_00414480(local_20);
      local_55 = FUN_01d04d70(param_1);
      if (local_55 == '\0') {
        FUN_00414b50(local_20,&DAT_01d0300c);
      }
      else {
        FUN_00414b50(local_20,&DAT_01d02ffc);
      }
      FUN_01d02340(auStack_d8,&local_88,*(undefined8 *)(param_1[0x35] + 0x58),*local_20[0]);
      FUN_00414b50(&local_38,local_88);
      FUN_00414480(local_20);
      if (local_38 != (short *)0x0) {
        if (*local_38 == 0x40) {
          FUN_00414480(&local_28);
          local_5c = 0;
          if (local_38 != (short *)0x0) {
            local_5c = *(undefined4 *)(local_38 + -2);
          }
          FUN_00416dc0(&local_28,local_38,2,local_5c);
          local_b8 = local_28;
          FUN_00416cd0(param_2,3,*param_2,&DAT_01d02fec);
          FUN_00414480(&local_28);
        }
        else {
          local_b8 = local_38;
          FUN_00416cd0(param_2,3,*param_2,&DAT_01d02fec);
        }
      }
    }
    cVar1 = FUN_01d04d70(param_1);
    if (((cVar1 != '\0') && ((*(byte *)(param_1[0x35] + 99) & 4) == 0)) &&
       (local_50 = *(double *)(param_1[0x35] + 0xa8), local_50 != 0.0)) {
      local_b8 = (wchar_t *)CONCAT71(local_b8._1_7_,1);
      FUN_00b8fd60(&local_90,local_50,param_4,0);
      local_b8 = L" (W)";
      FUN_00416cd0(&local_38,3,L"Mpd: ",local_90);
      local_b8 = local_38;
      FUN_00416cd0(param_2,3,*param_2,&DAT_01d02fec);
    }
    local_5d = FUN_01d01e80(param_1);
    local_64 = (uint)(local_5d == '\0');
    local_48 = local_64;
    iVar4 = FUN_01cfd2d0(param_1);
    local_44 = local_48;
    if ((int)local_48 <= iVar4 + -1) {
      iVar4 = ((iVar4 + -1) - local_48) + 1;
      do {
        cVar1 = FUN_01cfdf80(param_1,local_44);
        if (cVar1 != '\0') {
          FUN_01cfd0f0(param_1,&local_30,local_44,param_5);
          iVar5 = FUN_004170c0(&DAT_01d0304c,local_30,1);
          if (0 < iVar5) {
            iVar5 = FUN_004170c0(&DAT_01d0304c,local_30,1);
            FUN_00416dc0(&local_30,local_30,1,iVar5 + -1);
          }
          iVar5 = FUN_004170c0(&DAT_01d0305c,local_30,1);
          if (0 < iVar5) {
            local_6c = FUN_004170c0(&DAT_01d0305c,local_30,1);
            local_68 = 0;
            if (local_30 != (short *)0x0) {
              local_68 = *(undefined4 *)(local_30 + -2);
            }
            FUN_00416e20(&local_30,local_6c,local_68);
          }
          FUN_0043ea00(&local_98,local_30);
          FUN_00414b50(&local_30,local_98);
          bVar2 = (**(code **)(*param_1 + 0x2d0))(param_1,local_44,&local_40);
          if (bVar2 < 8) {
            if (bVar2 == 7) {
              FUN_004169a0(&local_38,local_40);
            }
            else if (bVar2 < 4) {
              if (bVar2 == 3) {
                FUN_004167a0(&local_38,*(undefined8 *)(local_40 + 4));
              }
              else if (bVar2 == 1) {
                FUN_004169a0(&local_38,local_40);
              }
              else {
                if (bVar2 != 2) goto LAB_01d02e5c;
                FUN_0043f750(&local_38,(longlong)*local_40);
              }
            }
            else if (bVar2 == 4) {
              FUN_004169a0(&local_38,local_40);
            }
            else if (bVar2 == 6) {
              FUN_004167a0(&local_38,*(undefined8 *)(local_40 + 4));
            }
            else {
LAB_01d02e5c:
              FUN_00414480(&local_38);
            }
          }
          else if (bVar2 == 9) {
            FUN_004169a0(&local_38,local_40);
          }
          else if (bVar2 == 0xd) {
            FUN_004167a0(&local_38,*(undefined8 *)(local_40 + 8));
          }
          else if (bVar2 == 0x10) {
            local_b8 = (wchar_t *)CONCAT71(local_b8._1_7_,1);
            FUN_00b8fd60(&local_38,*(undefined8 *)local_40,param_4,0);
          }
          else {
            if (bVar2 != 0x11) goto LAB_01d02e5c;
            FUN_004b37d0(*(undefined8 *)local_40,&local_38);
          }
          if (local_38 != (short *)0x0) {
            local_b8 = local_30;
            local_b0 = &DAT_01d02ffc;
            local_a8 = local_38;
            FUN_00416cd0(param_2,5,*param_2,&DAT_01d02fec);
          }
        }
        local_44 = local_44 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  FUN_01d02170(param_1,&local_38);
  if (local_38 != (short *)0x0) {
    local_b8 = local_38;
    FUN_00416cd0(param_2,3,*param_2,&DAT_01d02fec);
  }
  FUN_00414560(&local_98,3);
  FUN_00414560(&local_38,4);
  FUN_00414480(&param_5);
  return param_2;
}

