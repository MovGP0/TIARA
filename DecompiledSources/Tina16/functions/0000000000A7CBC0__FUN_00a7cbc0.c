/* Ghidra address: 00a7cbc0 */
/* Ghidra symbol: FUN_00a7cbc0 */


undefined8 FUN_00a7cbc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_80 = auStack_d8;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_48 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  FUN_00414b50(&local_58,param_3);
  if (param_4 != '\0') {
    if (param_4 == '\x01') {
      FUN_00414b50(&local_48,L"TEXT");
      goto LAB_00a7cd25;
    }
    if (param_4 == '\x02') {
      FUN_00414480(local_20);
      FUN_00a27e40(&local_88,local_58);
      local_70 = local_88;
      FUN_0043e5a0(local_20,local_88);
      FUN_00414b50(&local_48,local_20[0]);
      FUN_00414480(local_20);
      goto LAB_00a7cd25;
    }
    if (param_4 != '\x03') {
      FUN_00414480(&local_48);
      goto LAB_00a7cd25;
    }
  }
  FUN_00414b50(&local_48,L"HTML");
LAB_00a7cd25:
  uVar1 = FUN_00416740(local_58);
  uVar2 = FUN_00416740(local_48);
  local_50 = thunk_FUN_040ef657(PTR_IMAGE_DOS_HEADER_0200c280,uVar1,uVar2);
  if (local_50 == 0) {
    FUN_00414480(&local_28);
    FUN_00a27e40(&local_90,local_58);
    local_78 = local_90;
    FUN_0043e600(&local_28,local_90);
    FUN_00414b50(&local_60,local_28);
    FUN_00414480(&local_28);
    FUN_00414480(&local_30);
    FUN_0043e600(&local_30,local_58);
    FUN_00416ba0(&local_98,&LAB_00a7d018,local_60);
    local_3c = FUN_004170c0(local_98,local_30,1);
    FUN_00414480(&local_30);
    if (0 < local_3c) {
      FUN_00414b50(&local_68,local_58);
      FUN_004169f0(&local_68,local_3c + -1);
      uVar1 = FUN_00416740(local_68);
      uVar2 = FUN_00416740(local_48);
      local_50 = thunk_FUN_040ef657(PTR_IMAGE_DOS_HEADER_0200c280,uVar1,uVar2);
      if (local_50 != 0) {
        FUN_00414b50(&local_58,local_68);
      }
    }
  }
  if (local_50 != 0) {
    FUN_009ec440(&local_a0,local_58);
    local_b8 = FUN_00416740(local_48);
    local_38 = FUN_004baae0(&PTR_FUN_0047d7f8,1,param_2,local_a0);
  }
  FUN_00414560(&local_a0,4);
  FUN_00414560(&local_68,3);
  FUN_00414480(&local_48);
  FUN_00414560(&local_30,3);
  return local_38;
}

