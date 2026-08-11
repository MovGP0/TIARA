/* Ghidra address: 008fdec0 */
/* Ghidra symbol: FUN_008fdec0 */


char FUN_008fdec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  uint local_50;
  longlong local_48;
  uint local_40;
  int local_3c;
  int local_38;
  byte local_31;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_60 = auStack_c8;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_48 = 0;
  FUN_00414520(param_3);
  local_28 = (longlong *)FUN_008fe920(&PTR_FUN_008f9ee8,1);
  local_30 = (longlong *)FUN_008fe920(&PTR_FUN_008f9ee8,1);
  local_31 = (**(code **)(*local_28 + 0x28))(local_28,param_1);
  bVar1 = (**(code **)(*local_30 + 0x28))(local_30,param_2);
  if (((*(char *)((longlong)local_28 + 0x33) == '\0') &&
      (*(char *)((longlong)local_30 + 0x33) == '\0')) || ((local_31 & bVar1) == 0)) {
    local_31 = '\0';
  }
  else {
    local_31 = '\x01';
  }
  if (local_31 != '\0') {
    iVar2 = FUN_00416420(local_30[4],0);
    if (((iVar2 == 0) && (*(char *)((longlong)local_30 + 0x33) == '\0')) &&
       (((char)local_30[6] == '\0' && (*(char *)((longlong)local_30 + 0x32) == '\0')))) {
      (**(code **)(*local_28 + 0x10))
                (local_28,local_30[2],*(undefined1 *)((longlong)local_30 + 0x31));
      (**(code **)*local_28)(local_28,&local_68);
      FUN_00414b90(param_3,local_68);
    }
    else {
      if (*(char *)((longlong)local_30 + 0x33) == '\0') {
        (**(code **)(*local_30 + 0x30))
                  (local_30,local_28[5],*(undefined1 *)((longlong)local_28 + 0x33));
        if ((char)local_30[6] == '\0') {
          (**(code **)(*local_30 + 8))(local_30,local_28[1],(char)local_28[6]);
          FUN_00416430(&local_70,local_30[4],1,1);
          iVar2 = FUN_00416420(local_70,&DAT_008fe668);
          if (iVar2 != 0) {
            local_20 = (longlong *)FUN_00410e60(&PTR_FUN_008f5158,1);
            FUN_004168b0(&local_78,local_28[4]);
            local_3c = FUN_004413f0(&DAT_008fe678,local_78);
            if (local_3c < 1) {
              FUN_00414520(&local_48);
            }
            else {
              FUN_00416430(&local_48,local_28[4],2,local_3c + -1);
            }
            FUN_00415f90(&local_48,local_30[4]);
            local_3c = FUN_00417170(&DAT_008fe668,local_48,1);
            while (0 < local_3c) {
              FUN_00416430(&local_80,local_48,1,local_3c + -1);
              (**(code **)(*local_20 + 0x68))(local_20,local_80);
              local_50 = 0;
              if (local_48 != 0) {
                local_50 = *(uint *)(local_48 + -4) >> 1;
              }
              FUN_00416430(&local_48,local_48,local_3c + 1,local_50 - local_3c);
              local_3c = FUN_00417170(&DAT_008fe668,local_48,1);
            }
            (**(code **)(*local_20 + 0x68))(local_20,local_48);
            iVar2 = FUN_00416420(local_48,&DAT_008fe680);
            if ((iVar2 == 0) || (iVar2 = FUN_00416420(local_48,&DAT_008fe68c), iVar2 == 0)) {
              (**(code **)(*local_20 + 0x68))(local_20,0);
            }
            local_40 = (**(code **)(*local_20 + 0xb8))(local_20,&DAT_008fe68c);
            if (-1 < (int)local_40) {
              do {
                (**(code **)(*local_20 + 0x98))(local_20,local_40);
                local_40 = (**(code **)(*local_20 + 0xb8))(local_20,&DAT_008fe68c);
              } while (local_40 < 0x80000000);
            }
            local_40 = (**(code **)(*local_20 + 0xb8))(local_20,&DAT_008fe680);
            while (0 < (int)local_40) {
              (**(code **)(*local_20 + 0x98))(local_20,local_40);
              (**(code **)(*local_20 + 0x98))(local_20,local_40 + -1);
              local_40 = (**(code **)(*local_20 + 0xb8))(local_20,&DAT_008fe680);
            }
            iVar2 = (**(code **)(*local_20 + 0x38))(local_20);
            if (0 < iVar2) {
              (**(code **)(*local_20 + 0x28))(local_20,&local_88,0);
              iVar2 = FUN_00416420(local_88,&DAT_008fe680);
              if (iVar2 == 0) {
                local_31 = '\0';
                FUN_008fe5d0(0,local_60);
                goto LAB_008fe56f;
              }
            }
            FUN_00414520(&local_48);
            iVar2 = (**(code **)(*local_20 + 0x38))();
            local_38 = 0;
            if (-1 < iVar2 + -1) {
              do {
                (**(code **)(*local_20 + 0x28))(local_20,&local_90,local_38);
                local_a8 = local_90;
                FUN_00416310(&local_48,3,local_48,&DAT_008fe668);
                local_38 = local_38 + 1;
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
            }
            (**(code **)(*local_30 + 0x18))(local_30,local_48);
            FUN_00410f20(local_20);
          }
        }
        (**(code **)*local_30)(local_30,&local_98);
        FUN_00414b90(param_3,local_98);
        FUN_00410f20(local_28);
        FUN_00410f20(local_30);
        goto LAB_008fe57d;
      }
      FUN_00414b90(param_3,param_2);
    }
  }
LAB_008fe56f:
  FUN_008fe5f0(0,local_60);
LAB_008fe57d:
  FUN_004145c0(&local_98,4);
  FUN_00414480(&local_78);
  FUN_004145c0(&local_70,2);
  FUN_00414520(&local_48);
  return local_31;
}

