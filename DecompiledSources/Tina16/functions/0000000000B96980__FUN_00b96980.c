/* Ghidra address: 00b96980 */
/* Ghidra symbol: FUN_00b96980 */


undefined1
FUN_00b96980(undefined8 param_1,undefined8 param_2,undefined8 *param_3,byte param_4,longlong param_5
            )

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined8 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  longlong *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  uint local_68;
  code *local_60;
  undefined8 local_58;
  undefined1 local_41;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_1c;
  
  local_b0 = auStack_f8;
  local_38 = (longlong *)0x0;
  local_90 = (longlong *)0x0;
  local_41 = 0;
  cVar1 = FUN_00b96de0(*param_3);
  if (cVar1 == '\0') {
    FUN_00414480(param_3);
  }
  FUN_0040d200(&local_88,0x40,0);
  uVar3 = FUN_0041b800(&local_38);
  iVar2 = thunk_FUN_0413aa55(uVar3);
  if ((iVar2 != 0) || (local_38 == (longlong *)0x0)) goto code_r0x00b96ce4;
  local_40 = (**(code **)(*local_38 + 0x18))(local_38,0x208);
  local_a0 = 0;
  iVar2 = FUN_00416420(param_2,0);
  if (iVar2 != 0) {
    uVar3 = FUN_0041b800(&local_90);
    thunk_FUN_03c61602(uVar3);
    uVar3 = FUN_00415f70(param_2);
    local_d8 = local_94;
    local_d0 = &local_a0;
    local_c8 = local_98;
    (**(code **)(*local_90 + 0x18))
              (local_90,*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0),0,uVar3);
  }
  if (param_5 == 0) {
LAB_00b96ae1:
    local_88 = *(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0);
  }
  else {
    cVar1 = FUN_0065be20(param_5);
    if (cVar1 == '\0') goto LAB_00b96ae1;
    local_88 = FUN_0065b870(param_5);
  }
  local_80 = local_a0;
  local_78 = local_40;
  local_70 = FUN_00416740(param_1);
  local_60 = FUN_00b96950;
  local_68 = 1;
  if ((param_4 & 8) != 0) {
    local_68 = 0x41;
  }
  if ((param_4 & 1) == 0) {
    local_68 = local_68 | 0x200;
  }
  if ((param_4 & 2) != 0) {
    local_68 = local_68 | 0x10;
  }
  if (((param_4 & 8) == 0) && ((param_4 & 4) != 0)) {
    local_68 = local_68 | 0x8000;
  }
  if ((param_4 & 0x10) != 0) {
    local_68 = local_68 | 0x4000;
  }
  if ((param_4 & 0x20) != 0) {
    local_68 = local_68 | 0x20;
  }
  local_58 = FUN_00b96e00(&DAT_00b96858,1,*param_3);
  local_30 = local_58;
  local_28 = FUN_007f94c0(0);
  local_1c = thunk_FUN_04118f82(1);
  local_a8 = thunk_FUN_03e5e908(&local_88);
  thunk_FUN_04118f82(local_1c);
  FUN_007f95c0(local_28);
  FUN_00410f20(local_30);
  local_41 = local_a8 != 0;
  if ((bool)local_41) {
    thunk_FUN_0413df99(local_a8,local_40);
    (**(code **)(*local_38 + 0x28))(local_38,local_a8);
    FUN_004167d0(param_3,local_40);
  }
  (**(code **)(*local_38 + 0x28))(local_38,local_40);
code_r0x00b96ce4:
  FUN_0041b800(&local_90);
  FUN_0041b800(&local_38);
  return local_41;
}

