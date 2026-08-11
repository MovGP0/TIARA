/* Ghidra address: 015db3a0 */
/* Ghidra symbol: FUN_015db3a0 */


undefined1
FUN_015db3a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_78;
  undefined1 *local_70;
  longlong *local_60;
  longlong *local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  undefined1 local_21;
  longlong *local_20;
  
  local_70 = auStack_a8;
  local_78 = 0;
  local_21 = 0;
  local_20 = (longlong *)FUN_007fc180(&PTR_FUN_007f0370,1,*(undefined8 *)PTR_DAT_02004030);
  uVar3 = FUN_007ffbe0(local_20);
  FUN_005ff880(uVar3,local_20[0x17]);
  uVar3 = FUN_007ffbe0(local_20);
  local_40 = FUN_015db2d0(param_1,uVar3);
  FUN_007ff680(local_20,3);
  FUN_0064de00(local_20,param_2);
  uVar1 = thunk_FUN_03f3ed25(0xb4,local_40 & 0xffffffff,4);
  FUN_007fded0(local_20,uVar1);
  uVar1 = thunk_FUN_03f3ed25(0x3f,local_40._4_4_,8);
  FUN_007fdf10(local_20,uVar1);
  FUN_00800470(local_20,4);
  local_30 = (longlong *)FUN_0067eb90(&PTR_FUN_00669e80,1,local_20);
  (**(code **)(*local_30 + 0x130))(local_30,local_20);
  (**(code **)(*local_30 + 0x118))(local_30,1);
  uVar1 = thunk_FUN_03f3ed25(8,local_40 & 0xffffffff,4);
  FUN_0064cb30(local_30,uVar1);
  uVar1 = thunk_FUN_03f3ed25(8,local_40._4_4_,8);
  FUN_0064cb90(local_30,uVar1);
  FUN_0064de00(local_30,param_3);
  local_38 = (longlong *)FUN_00680200(&PTR_FUN_0066b990,1,local_20);
  (**(code **)(*local_38 + 0x130))(local_38,local_20);
  FUN_0064cb30(local_38,(int)local_30[0x12]);
  uVar1 = thunk_FUN_03f3ed25(0x13,local_40._4_4_,8);
  FUN_0064cb90(local_38,uVar1);
  uVar1 = thunk_FUN_03f3ed25(0xa4,local_40 & 0xffffffff,4);
  FUN_0064cbf0(local_38,uVar1);
  FUN_00680590(local_38,0xff);
  FUN_006807a0(local_38,0x2a);
  FUN_0064de00(local_38,*param_4);
  FUN_00680ad0(local_38);
  local_44 = thunk_FUN_03f3ed25(0x29,local_40._4_4_,8);
  local_48 = thunk_FUN_03f3ed25(0x32,local_40 & 0xffffffff,4);
  local_4c = thunk_FUN_03f3ed25(0xe,local_40 >> 0x20,8);
  local_58 = (longlong *)FUN_00687cb0(&PTR_FUN_00673008,1,local_20);
  (**(code **)(*local_58 + 0x130))(local_58,local_20);
  FUN_0064de00(local_58,&DAT_015db804);
  *(undefined4 *)(local_58 + 0x9e) = 1;
  FUN_00688430(local_58,1);
  uVar1 = thunk_FUN_03f3ed25(0x26,local_40 & 0xffffffff,4);
  local_88 = local_4c;
  (**(code **)(*local_58 + 400))(local_58,uVar1,local_44,local_48);
  local_60 = (longlong *)FUN_00687cb0(&PTR_FUN_00673008,1,local_20);
  (**(code **)(*local_60 + 0x130))(local_60,local_20);
  FUN_0064de00(local_60,L"Cancel");
  *(undefined4 *)(local_60 + 0x9e) = 2;
  *(undefined1 *)((longlong)local_60 + 0x499) = 1;
  uVar1 = thunk_FUN_03f3ed25(0x5c,local_40 & 0xffffffff,4);
  local_88 = local_4c;
  (**(code **)(*local_60 + 400))(local_60,uVar1,local_44,local_48);
  iVar2 = (**(code **)(*local_20 + 0x2d0))(local_20);
  if (iVar2 == 1) {
    FUN_0064dd90(local_38,&local_78);
    FUN_00414ad0(param_4,local_78);
    local_21 = 1;
  }
  FUN_00410f20(local_20);
  FUN_00414480(&local_78);
  return local_21;
}

