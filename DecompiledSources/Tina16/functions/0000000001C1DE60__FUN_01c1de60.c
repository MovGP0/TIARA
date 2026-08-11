/* Ghidra address: 01c1de60 */
/* Ghidra symbol: FUN_01c1de60 */


undefined4 FUN_01c1de60(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_68 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  FUN_00414610(local_res18);
  if (DAT_021114c8 != (longlong *)0x0) {
    FUN_00410f20(DAT_021114c8);
  }
  DAT_021114c8 = (longlong *)FUN_005dc9d0(&PTR_FUN_005d4e78,1,local_res18);
  if (DAT_021114c0 == (longlong *)0x0) {
    DAT_021114c0 = (longlong *)FUN_007fc180(&PTR_FUN_01c1cb58,1,*(undefined8 *)PTR_DAT_02004030);
  }
  if (*(longlong *)PTR_DAT_02004230 == 0) {
    uVar4 = FUN_007fc180(&PTR_FUN_01c1c438,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_02004230 = uVar4;
  }
  (**(code **)(*DAT_021114c8 + 0x90))
            (DAT_021114c8,L"History",*(undefined8 *)(DAT_021114c0[0xdf] + 0x4f0));
  iVar2 = (**(code **)(**(longlong **)(DAT_021114c0[0xdf] + 0x4f0) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar1 = *(longlong **)(DAT_021114c0[0xdf] + 0x4f0);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_38,iVar5);
      FUN_00450070(&local_30,local_38,&DAT_01c1e31c,&DAT_01c1e32c,1);
      (**(code **)(*plVar1 + 0x40))(plVar1,iVar5,local_30);
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (local_res8 != 0) {
    FUN_0064dd90(DAT_021114c0[0xdf],&local_40);
    iVar2 = FUN_00416db0(local_40,local_res8);
    if (iVar2 != 0) {
      FUN_0064de00(DAT_021114c0[0xdf],local_res8);
      FUN_01c1fdf0(DAT_021114c0,0);
      goto LAB_01c1e186;
    }
  }
  (**(code **)(*DAT_021114c8 + 0x10))(DAT_021114c8,&local_48,L"View",L"LastURL",0);
  if (local_48 != 0) {
    FUN_0064dd90(DAT_021114c0[0xdf],&local_50);
    (**(code **)(*DAT_021114c8 + 0x10))(DAT_021114c8,&local_58,L"View",L"LastURL",0);
    iVar2 = FUN_00416db0(local_50,local_58);
    if (iVar2 != 0) {
      (**(code **)(*DAT_021114c8 + 0x10))(DAT_021114c8,&local_60,L"View",L"LastURL",0);
      FUN_0064de00(DAT_021114c0[0xdf],local_60);
      FUN_01c1fdf0(DAT_021114c0,0);
    }
  }
LAB_01c1e186:
  FUN_00414ad0(DAT_021114c0 + 0xe5,local_res10);
  uVar3 = (**(code **)(*DAT_021114c0 + 0x2d0))(DAT_021114c0);
  (**(code **)(*param_4 + 0x10))(param_4,DAT_021114c0[0xe4]);
  FUN_0064dd90(DAT_021114c0[0xdf],&local_68);
  (**(code **)(*DAT_021114c8 + 0x18))(DAT_021114c8,L"View",L"LastURL",local_68);
  (**(code **)(*DAT_021114c8 + 200))(DAT_021114c8);
  FUN_00414480(&local_68);
  FUN_00414560(&local_60,2);
  FUN_00414480(&local_50);
  FUN_00414480(&local_48);
  FUN_00414480(&local_40);
  FUN_00414560(&local_38,2);
  FUN_00414560(&local_res8,3);
  return uVar3;
}

