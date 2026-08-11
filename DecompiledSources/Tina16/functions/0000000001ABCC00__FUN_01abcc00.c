/* Ghidra address: 01abcc00 */
/* Ghidra symbol: FUN_01abcc00 */


undefined8 FUN_01abcc00(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_res8 [4];
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined1 local_40 [32];
  undefined1 local_20 [8];
  
  local_58 = 0;
  local_50[0] = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_00417580(local_20,&DAT_0052f3d0);
  FUN_00417580(local_40,&DAT_00527bf8);
  FUN_00545cd0(local_50);
  FUN_00417c40(local_20,local_50,&DAT_0052f3d0);
  FUN_00416ba0(&local_58,L"Curve.",local_res8[0]);
  uVar1 = FUN_00545d80(local_20,local_58);
  plVar2 = (longlong *)FUN_004113f0(uVar1,&PTR_FUN_0052c330);
  uVar1 = (**(code **)(*plVar2 + 0x60))(plVar2,L"Create");
  uVar3 = FUN_0054a100(plVar2);
  FUN_00557cd0(uVar1,local_40,uVar3,&local_58,0xffffffff);
  FUN_00545cf0(local_20);
  uVar1 = FUN_01abec40(local_40,1);
  FUN_00414480(&local_58);
  FUN_00417740(local_50,&DAT_0052f3d0);
  FUN_00417740(local_40,&DAT_00527bf8);
  FUN_00417740(local_20,&DAT_0052f3d0);
  FUN_00414480(local_res8);
  return uVar1;
}

