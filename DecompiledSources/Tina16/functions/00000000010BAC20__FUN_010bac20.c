/* Ghidra address: 010bac20 */
/* Ghidra symbol: FUN_010bac20 */


undefined1 FUN_010bac20(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  int local_94;
  undefined1 local_90 [24];
  int local_78;
  int local_74;
  uint local_6c;
  undefined8 local_68;
  undefined1 local_60 [24];
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined1 local_38 [4];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 local_21;
  longlong *local_20;
  
  local_c0 = auStack_148;
  local_100 = 0;
  local_108 = 0;
  local_e8 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  FUN_00417580(local_60,&DAT_010ba1d0);
  FUN_00417580(local_90,&DAT_010ba278);
  local_21 = 0;
  local_20 = (longlong *)FUN_007fc180(&PTR_FUN_010b9c18,1,*(undefined8 *)PTR_DAT_02004030);
  (**(code **)(*local_20 + 0x118))(local_20,0);
  local_94 = 0;
  while( true ) {
    cVar1 = FUN_010bbb70(param_1,param_1[6],local_94,local_38);
    if (cVar1 == '\0') break;
    if (local_94 == 0) {
      FUN_007fded0(local_20,local_2c);
      FUN_007fdf10(local_20,local_28 + *(int *)(local_20[0xd6] + 0x9c) + 5);
    }
    local_a0 = (longlong *)FUN_00742540(&PTR_FUN_00732f28,1,local_20);
    (**(code **)(*local_a0 + 0x130))(local_a0,local_20);
    local_128 = (undefined1 *)CONCAT44(local_128._4_4_,local_28 - local_30);
    (**(code **)(*local_a0 + 400))(local_a0,local_34,local_30,local_2c - local_34);
    local_94 = local_94 + 1;
  }
  local_94 = 0;
  while( true ) {
    cVar1 = FUN_010bbd50(param_1,param_1[6],local_94,local_60);
    if (cVar1 == '\0') break;
    local_a8 = (longlong *)FUN_0067eb90(&PTR_FUN_00669e80,1,local_20);
    (**(code **)(*local_a8 + 0x130))(local_a8,local_20);
    FUN_0064cb30(local_a8,local_48 + -2);
    FUN_0064cb90(local_a8,local_44 + -2);
    FUN_0064de00(local_a8,local_40);
    local_94 = local_94 + 1;
  }
  local_94 = 0;
  while( true ) {
    local_128 = local_90;
    cVar1 = FUN_010bb8c0(param_1,param_1[6],param_1[5],local_94);
    if (cVar1 == '\0') break;
    local_b0 = (longlong *)FUN_00680200(&PTR_FUN_0066b990,1,local_20);
    (**(code **)(*local_b0 + 0x130))(local_b0,local_20);
    FUN_0043f750(&local_d0,local_94);
    FUN_00416ba0(&local_c8,&DAT_010bb2bc,local_d0);
    (**(code **)(*local_b0 + 0x50))(local_b0,local_c8);
    FUN_0064de00(local_b0,local_68);
    FUN_0064cb30(local_b0,local_78 + -2);
    FUN_0064cb90(local_b0,local_74 + -2);
    FUN_0064cbf0(local_b0,(ulonglong)local_6c * 5);
    local_94 = local_94 + 1;
  }
  (**(code **)(*local_20 + 0x118))(local_20,1);
  (**(code **)(*(longlong *)local_20[0xda] + 0x268))((longlong *)local_20[0xda],(char)param_1[7]);
  iVar3 = (**(code **)(*local_20 + 0x2d0))(local_20);
  if (iVar3 == 1) {
    local_21 = 1;
    local_94 = 0;
    FUN_0043f750(&local_e0,0);
    FUN_00416ba0(&local_d8,&DAT_010bb2bc,local_e0);
    local_b0 = (longlong *)FUN_004d3a80(local_20,local_d8);
    while (local_b0 != (longlong *)0x0) {
      FUN_0043f750(&local_f0,local_94);
      FUN_00416ba0(&local_e8,&DAT_010bb2bc,local_f0);
      FUN_0064dd90(local_b0,&local_f8);
      FUN_004b4f10(param_1[5],local_e8,local_f8);
      local_94 = local_94 + 1;
      FUN_0043f750(&local_108,local_94);
      FUN_00416ba0(&local_100,&DAT_010bb2bc,local_108);
      local_b0 = (longlong *)FUN_004d3a80(local_20,local_100);
    }
    uVar2 = (**(code **)(*(longlong *)local_20[0xda] + 0x260))((longlong *)local_20[0xda]);
    *(undefined1 *)(param_1 + 7) = uVar2;
    FUN_019ab9a0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),local_118);
    FUN_010bc210(param_1,param_2,local_118,0);
    (**(code **)(*param_1 + 0xa8))(param_1,param_2);
    (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  }
  FUN_00410f20(local_20);
  FUN_00414560(&local_108,2);
  FUN_00414480(&local_f8);
  FUN_00414560(&local_f0,6);
  FUN_00417740(local_90,&DAT_010ba278);
  FUN_00417740(local_60,&DAT_010ba1d0);
  return local_21;
}

