/* Ghidra address: 01560320 */
/* Ghidra symbol: FUN_01560320 */


undefined1
FUN_01560320(longlong param_1,undefined8 param_2,longlong param_3,int param_4,undefined8 param_5,
            undefined8 *param_6)

{
  int iVar1;
  undefined8 uVar2;
  longlong local_res18;
  int local_res20;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  int local_50;
  undefined8 local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined1 local_29;
  longlong *local_28;
  longlong *local_20;
  
  local_60 = auStack_98;
  local_78 = 0;
  local_68 = 0;
  local_70 = 0;
  local_48 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  local_29 = 0;
  *param_6 = 0;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_38 = -1;
  local_50 = 0;
  if (local_res18 != 0) {
    local_50 = *(int *)(local_res18 + -4);
  }
  local_40 = local_50;
  local_3c = FUN_004170c0(&LAB_01560604,local_res18,1);
  if (0 < local_3c) {
    FUN_00416dc0(&local_res18,local_res18,local_3c + 1,local_40 - local_3c);
    FUN_004b4b10(local_28,local_res18);
    FUN_017c4360(param_2,local_20);
    iVar1 = (**(code **)(*local_28 + 0x28))();
    local_30 = 0;
    if (-1 < iVar1 + -1) {
      do {
        (**(code **)(*local_28 + 0x18))(local_28,&local_48,local_30);
        local_34 = FUN_0043fc00(local_48);
        if (local_34 == local_res20) {
          local_38 = local_30;
          break;
        }
        local_30 = local_30 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    if ((-1 < local_38) && (iVar1 = (**(code **)(*local_20 + 0x28))(local_20), local_38 < iVar1)) {
      (**(code **)(*local_20 + 0x18))(local_20,&local_70,local_38);
      FUN_0043e1a0(&local_68,local_70);
      FUN_00414ad0(param_5,local_68);
      (**(code **)(*local_20 + 0x18))(local_20,&local_78,local_38);
      uVar2 = FUN_019aff50(*(undefined8 *)(param_1 + 0x748),local_78);
      *param_6 = uVar2;
      local_29 = 1;
    }
  }
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00414560(&local_78,3);
  FUN_00414480(&local_48);
  FUN_00414480(&local_res18);
  return local_29;
}

