/* Ghidra address: 0154e950 */
/* Ghidra symbol: FUN_0154e950 */


void FUN_0154e950(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  longlong *local_a0;
  undefined8 local_98 [2];
  int local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  int local_78;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_b0 = auStack_108;
  local_c0 = 0;
  local_b8 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  local_28 = (longlong *)FUN_01b21480(local_res18);
  local_80 = (**(code **)(*local_28 + 0x28))(local_28);
  local_38 = (longlong *)0x0;
  local_30 = (longlong *)FUN_01b21480(local_res20);
  local_20 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_a0 = (longlong *)FUN_01cf1750(0,&PTR_FUN_01cf10a8,0x39);
  local_40 = local_a0;
  FUN_01d38290(local_a0,1);
  FUN_01d01990(local_a0,local_80);
  (**(code **)(**(longlong **)(param_1 + 0x748) + 0x20))(*(longlong **)(param_1 + 0x748),local_40);
  FUN_00416ba0(&local_48,*(undefined8 *)(param_1 + 0xa18),L"\\bus_macro.vhd");
  local_e8 = local_48;
  FUN_0154de90(param_1,&local_58,param_2,local_res18);
  local_e8 = *(undefined8 *)(param_1 + 0xa18);
  local_e0 = 0;
  local_d8 = 0;
  FUN_01602900(local_40,0,local_48,local_20);
  local_38 = (longlong *)FUN_01b21480(local_58);
  local_74 = 0;
  iVar2 = local_80;
  if (-1 < local_80 + -1) {
    do {
      (**(code **)(*local_28 + 0x18))(local_28,&local_b8,local_74);
      local_7c = FUN_0043fc00(local_b8);
      (**(code **)(*local_38 + 0x18))(local_38,&local_50,local_74);
      local_78 = FUN_01d40850(local_40,local_50);
      if (local_78 < 0) {
        FUN_00416ba0(&local_c0,L"Pin not found: ",local_50);
        uVar1 = FUN_0044d490(&PTR_FUN_004334c0,1,local_c0);
        FUN_004134c0(uVar1);
      }
      (**(code **)(*local_40 + 0x208))(local_40,local_78,local_7c,0);
      FUN_015755e0(*(undefined8 *)(param_1 + 0x8d0),local_7c,local_98);
      if (local_74 < local_80 + -1) {
        (**(code **)(*local_30 + 0x18))(local_30,&local_70,local_74);
        FUN_01b21b80(local_70,0x3a,&local_60);
        local_84 = FUN_0043fc00(local_60);
        local_88 = FUN_0043fc00(local_68);
        if ((0 < local_84) && (0 < local_88)) {
          local_e8 = CONCAT44(local_e8._4_4_,local_88);
          FUN_01575100(local_98[0],local_40,local_74);
        }
      }
      local_74 = local_74 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x78),local_40);
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00410f20(local_30);
  if (local_38 != (longlong *)0x0) {
    FUN_00410f20(local_38);
  }
  FUN_00414560(&local_c0,2);
  FUN_00414560(&local_70,6);
  FUN_00414560(&local_res18,2);
  return;
}

