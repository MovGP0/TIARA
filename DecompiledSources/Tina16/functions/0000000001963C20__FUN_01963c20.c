/* Ghidra address: 01963c20 */
/* Ghidra symbol: FUN_01963c20 */


longlong * FUN_01963c20(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong local_res20;
  undefined1 auStack_d8 [39];
  char local_b1;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  int local_24;
  int local_20;
  char local_19;
  
  local_30 = auStack_d8;
  local_a8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_50 = 0;
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  local_24 = 0;
  cVar1 = FUN_005fcf90(*(undefined8 *)(param_1 + 0x78));
  if (cVar1 != '\x01') {
    cVar1 = FUN_0195f670(param_1,0xb);
    if (cVar1 == '\0') {
      local_19 = '\x01';
      goto LAB_01963cf2;
    }
  }
  local_19 = '\0';
LAB_01963cf2:
  local_res20 = param_4;
  if (param_4 == 0) {
    local_res20 = FUN_0195f5e0(param_1);
  }
  cVar1 = FUN_0046c3d0(param_3);
  if (cVar1 == '\0') {
    local_b1 = *(char *)(local_res20 + 0x30);
    if (local_b1 == '\0') {
      if (local_19 == '\0') {
        FUN_0046c450(param_2,param_3);
      }
      else {
        FUN_0046c3f0(&local_38,param_3);
        FUN_00415dd0(&local_40,local_38,0);
        uVar2 = FUN_005fcf90(*(undefined8 *)(param_1 + 0x78));
        FUN_01807bd0(param_2,local_40,uVar2,0);
      }
    }
    else if (local_b1 == '\x01') {
      iVar4 = FUN_004170c0(&DAT_0196434c,*(undefined8 *)(local_res20 + 0x28),1);
      if ((iVar4 == 0) &&
         (iVar4 = FUN_004170c0(&DAT_0196435c,*(undefined8 *)(local_res20 + 0x28),1), iVar4 != 1)) {
        iVar4 = FUN_004170c0(&DAT_0196436c,*(undefined8 *)(local_res20 + 0x28),1);
        if ((iVar4 == 0) &&
           (iVar4 = FUN_004170c0(&DAT_0196437c,*(undefined8 *)(local_res20 + 0x28),1), iVar4 == 0))
        {
          local_70 = FUN_00464c60(param_3);
          local_60 = &local_70;
          local_58 = 3;
          FUN_00442f70(&local_68,*(undefined8 *)(local_res20 + 0x28),&local_60,0);
          FUN_004168e0(param_2,local_68);
        }
        else {
          uVar3 = FUN_00462650(param_3);
          local_60 = (undefined8 *)CONCAT44(local_60._4_4_,uVar3);
          local_58 = 0;
          FUN_00442f70(&local_50,*(undefined8 *)(local_res20 + 0x28),&local_60,0);
          FUN_004168e0(param_2,local_50);
        }
      }
      else {
        uVar5 = FUN_00464c60(param_3);
        FUN_00448580(&local_48,*(undefined8 *)(local_res20 + 0x28),uVar5);
        FUN_004168e0(param_2,local_48);
      }
      iVar4 = FUN_00414cb0(*(undefined8 *)(local_res20 + 0x18));
      if (((iVar4 == 1) &&
          (*(short *)(PTR_DAT_02004830 + 0x17a) != **(short **)(local_res20 + 0x18))) &&
         (local_20 = FUN_00414cc0(*param_2), 0 < local_20)) {
        do {
          if (*(short *)(*param_2 + -2 + (longlong)local_20 * 2) ==
              *(short *)(PTR_DAT_02004830 + 0x17a)) {
            local_24 = local_20;
            break;
          }
          local_20 = local_20 + -1;
        } while (local_20 != 0);
      }
      iVar4 = FUN_00414cb0(*(undefined8 *)(local_res20 + 0x20));
      if ((iVar4 == 1) && (*(short *)(PTR_DAT_02004830 + 0x178) != **(short **)(local_res20 + 0x20))
         ) {
        iVar4 = FUN_00414cc0(*param_2);
        local_20 = 1;
        if (0 < iVar4) {
          do {
            if (*(short *)(*param_2 + -2 + (longlong)local_20 * 2) ==
                *(short *)(PTR_DAT_02004830 + 0x178)) {
              *(undefined2 *)(*param_2 + -2 + (longlong)local_20 * 2) =
                   **(undefined2 **)(local_res20 + 0x20);
            }
            local_20 = local_20 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      if (0 < local_24) {
        *(undefined2 *)(*param_2 + -2 + (longlong)local_24 * 2) =
             **(undefined2 **)(local_res20 + 0x18);
      }
    }
    else if (local_b1 == '\x02') {
      uVar5 = FUN_00464c60(param_3);
      FUN_0044a380(&local_78,*(undefined8 *)(local_res20 + 0x28),uVar5);
      FUN_004168e0(param_2,local_78);
    }
    else if (local_b1 == '\x03') {
      FUN_00468820(&local_90,1);
      cVar1 = FUN_0046f320(param_3,&local_90);
      if (cVar1 == '\0') {
        iVar4 = FUN_004170c0(&DAT_0196438c,*(undefined8 *)(local_res20 + 0x28),1);
        FUN_00416dc0(&local_a0,*(undefined8 *)(local_res20 + 0x28),1,iVar4 + -1);
        FUN_004168e0(param_2,local_a0);
      }
      else {
        iVar4 = FUN_004170c0(&DAT_0196438c,*(undefined8 *)(local_res20 + 0x28),1);
        FUN_00416dc0(&local_98,*(undefined8 *)(local_res20 + 0x28),iVar4 + 1,0xff);
        FUN_004168e0(param_2,local_98);
      }
    }
    else {
      FUN_0046c450(param_2,param_3);
    }
  }
  else {
    FUN_00414520(param_2);
  }
  FUN_004144d0(&local_b0);
  FUN_00414560(&local_a8,3);
  FUN_00460ba0(&local_90);
  FUN_00414480(&local_78);
  FUN_00414480(&local_68);
  FUN_00414560(&local_50,2);
  FUN_004144d0(&local_40);
  FUN_00414480(&local_38);
  return param_2;
}

