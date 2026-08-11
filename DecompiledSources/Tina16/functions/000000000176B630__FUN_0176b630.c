/* Ghidra address: 0176b630 */
/* Ghidra symbol: FUN_0176b630 */


longlong * FUN_0176b630(longlong *param_1,short *param_2,longlong param_3)

{
  int iVar1;
  short *local_res10;
  longlong local_res18;
  undefined1 auStack_c8 [32];
  undefined *local_a8;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined4 local_58;
  bool local_51;
  longlong local_50;
  longlong local_48;
  int local_3c;
  int local_38;
  undefined2 local_32;
  longlong *local_30;
  longlong *local_28;
  char local_19;
  
  local_60 = auStack_c8;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414ad0(param_1,local_res10);
  if ((((local_res10 != (short *)0x0) && (*local_res10 != 0x40)) && (local_res18 != 0)) &&
     (iVar1 = (**(code **)(**(longlong **)(local_res18 + 0x438) + 0x28))
                        (*(longlong **)(local_res18 + 0x438)), 0 < iVar1)) {
    local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    (**(code **)(*local_28 + 0x10))(local_28,*(undefined8 *)(local_res18 + 0x438));
    FUN_004b4b10(local_30,local_res10);
    local_38 = (**(code **)(*local_28 + 0x28))(local_28);
    local_38 = local_38 + -1;
    if (-1 < local_38) {
      do {
        local_19 = '\0';
        local_32 = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
        *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
        FUN_004b5390(local_28,&local_68,local_38);
        FUN_00b8f030(local_68);
        *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = local_32;
        FUN_004b3cf0(local_28,&local_70,local_38);
        local_3c = (**(code **)(*local_30 + 0xb8))(local_30,local_70);
        if (-1 < local_3c) {
          if (local_19 == '\0') {
            FUN_004b5390(local_30,&local_78,local_3c);
            local_48 = local_78;
            FUN_004b5390(local_28,&local_80,local_38);
            local_50 = local_80;
            if (local_48 == local_80) {
              local_51 = true;
            }
            else if ((local_48 == 0) || (local_80 == 0)) {
              local_51 = false;
            }
            else {
              iVar1 = FUN_0043e420(local_48,local_80);
              local_51 = iVar1 == 0;
            }
            if (local_51 != false) {
              (**(code **)(*local_30 + 0x98))(local_30,local_3c);
            }
          }
          else {
            (**(code **)(*local_30 + 0x98))(local_30,local_3c);
          }
        }
        local_38 = local_38 + -1;
      } while (local_38 != -1);
    }
    FUN_00414480(param_1);
    iVar1 = (**(code **)(*local_30 + 0x28))();
    local_38 = 0;
    if (-1 < iVar1 + -1) {
      do {
        FUN_004b3cf0(local_30,&local_88,local_38);
        local_3c = (**(code **)(*local_28 + 0xb8))(local_28,local_88);
        if (-1 < local_3c) {
          (**(code **)(*local_30 + 0x18))(local_30,&local_90,local_38);
          local_a8 = &DAT_0176bb2c;
          FUN_00416cd0(param_1,3,*param_1,local_90);
          (**(code **)(*local_28 + 0x98))(local_28,local_3c);
        }
        local_38 = local_38 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    (**(code **)(**(longlong **)(local_res18 + 0x438) + 0x10))
              (*(longlong **)(local_res18 + 0x438),local_28);
    if (*param_1 != 0) {
      local_58 = 0;
      if (*param_1 != 0) {
        local_58 = *(undefined4 *)(*param_1 + -4);
      }
      FUN_00416e20(param_1,local_58,1);
      FUN_00416ba0(param_1,&DAT_0176bb3c,*param_1);
    }
    FUN_00410f20(local_28);
    FUN_00410f20(local_30);
  }
  FUN_00414560(&local_90,6);
  FUN_00414480(&local_res10);
  return param_1;
}

