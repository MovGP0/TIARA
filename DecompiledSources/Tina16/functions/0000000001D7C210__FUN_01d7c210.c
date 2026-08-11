/* Ghidra address: 01d7c210 */
/* Ghidra symbol: FUN_01d7c210 */


undefined1 FUN_01d7c210(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined8 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_b0;
  int local_a4;
  undefined1 local_a0 [4];
  undefined1 local_9c [4];
  longlong *local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  code *local_58;
  undefined8 local_50;
  undefined1 local_39;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined4 local_1c;
  
  local_b0 = auStack_f8;
  local_30 = (longlong *)0x0;
  local_98 = (longlong *)0x0;
  local_39 = 0;
  cVar1 = FUN_00b96de0(*param_3);
  if (cVar1 == '\0') {
    FUN_00414480(param_3);
  }
  FUN_0040d200(&local_80,0x40,0);
  uVar3 = FUN_0041b800(&local_30);
  iVar2 = thunk_FUN_0413aa55(uVar3);
  if ((iVar2 == 0) && (local_30 != (longlong *)0x0)) {
    local_38 = (**(code **)(*local_30 + 0x18))(local_30,0x104);
    local_88 = 0;
    iVar2 = FUN_00416420(param_2,0);
    if (iVar2 != 0) {
      uVar3 = FUN_0041b800(&local_98);
      thunk_FUN_03c61602(uVar3);
      uVar3 = FUN_00415f70(param_2);
      local_d8 = local_9c;
      local_d0 = &local_88;
      local_c8 = local_a0;
      (**(code **)(*local_98 + 0x18))
                (local_98,*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0),0,uVar3);
    }
    local_a4 = FUN_0044f100(L"shell32.dll");
    local_80 = *(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0);
    local_78 = local_88;
    local_70 = local_38;
    local_68 = FUN_00416740(param_1);
    local_60 = 0x21;
    if (0x4ffff < local_a4) {
      local_60 = 0x71;
    }
    local_58 = FUN_01d7bfb0;
    local_50 = FUN_00416740(*param_3);
    thunk_FUN_03d3249c(0);
    local_28 = FUN_007f94c0(0);
    local_1c = thunk_FUN_04118f82(1);
    local_90 = thunk_FUN_03e5e908(&local_80);
    thunk_FUN_04118f82(local_1c);
    FUN_007f95c0(local_28);
    local_39 = local_90 != 0;
    if ((bool)local_39) {
      thunk_FUN_0413df99(local_90,local_38);
      (**(code **)(*local_30 + 0x28))(local_30,local_90);
      FUN_004167d0(param_3,local_38);
    }
    (**(code **)(*local_30 + 0x28))(local_30,local_38);
  }
  FUN_0041b800(&local_98);
  FUN_0041b800(&local_30);
  return local_39;
}

