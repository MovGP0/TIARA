/* Ghidra address: 0147bce0 */
/* Ghidra symbol: FUN_0147bce0 */


void FUN_0147bce0(undefined8 param_1,undefined8 param_2,char param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 *local_60;
  int local_4c;
  int local_48;
  int local_44;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_60 = auStack_98;
  local_20 = (longlong *)FUN_007fc180(&PTR_FUN_007f0370,1,0);
  FUN_005fce30(local_20[0x17],param_4);
  uVar2 = FUN_007ffbe0(local_20);
  local_44 = FUN_005fdff0(uVar2,param_1);
  local_48 = local_44 + 100;
  FUN_0064de00(local_20,param_2);
  FUN_0064cbf0(local_20,local_48);
  FUN_0064cc50(local_20,0x96);
  FUN_00800470(local_20,4);
  FUN_007ff680(local_20,3);
  local_4c = 0;
  if (param_3 == '\0') {
    local_30 = (longlong *)FUN_0067eb90(&PTR_FUN_00669e80,1,local_20);
    (**(code **)(*local_30 + 0x130))(local_30,local_20);
    FUN_0064de00(local_30,param_1);
    (**(code **)(*local_30 + 0x118))(local_30,1);
    FUN_005fce30(local_30[0x17],param_4);
    iVar1 = FUN_0064d0b0(local_20);
    local_78 = 0x32;
    (**(code **)(*local_30 + 400))(local_30,0x14,0x14,iVar1 + -0x28);
    FUN_0067fce0(local_30,2);
    local_40 = local_30;
  }
  else {
    local_28 = (longlong *)FUN_00680200(&PTR_FUN_0066b990,1,local_20);
    (**(code **)(*local_28 + 0x130))(local_28,local_20);
    FUN_0064de00(local_28,param_1);
    FUN_006807e0(local_28,1);
    FUN_005fce30(local_28[0x17],param_4);
    FUN_0064cb30(local_28,0x14);
    FUN_0064cb90(local_28,0x14);
    iVar1 = FUN_0064d0b0(local_20);
    FUN_0064cbf0(local_28,iVar1 + -0x28);
    local_40 = local_28;
    local_4c = 0x14;
  }
  local_38 = (longlong *)FUN_00687cb0(&PTR_FUN_00673008,1,local_20);
  (**(code **)(*local_38 + 0x130))(local_38,local_20);
  FUN_0064de00(local_38,&LAB_0147c004);
  *(undefined4 *)(local_38 + 0x9e) = 1;
  iVar1 = FUN_0064d0b0(local_20);
  FUN_0064cb30(local_38,iVar1 / 2 - (int)local_38[0x13] / 2);
  FUN_0064cb90(local_38,*(int *)((longlong)local_40 + 0x94) + *(int *)((longlong)local_40 + 0x9c) +
                        local_4c);
  FUN_00801e40(local_20,local_38);
  (**(code **)(*local_20 + 0x2d0))(local_20);
  FUN_00410f20(local_20);
  return;
}

