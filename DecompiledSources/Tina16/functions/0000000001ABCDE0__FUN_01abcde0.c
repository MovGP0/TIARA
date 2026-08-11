/* Ghidra address: 01abcde0 */
/* Ghidra symbol: FUN_01abcde0 */


undefined8 FUN_01abcde0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_res8 [4];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined1 local_50 [32];
  undefined1 local_30 [8];
  
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  local_68 = 0;
  local_60[0] = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_00417580(local_30,&DAT_0052f3d0);
  FUN_00417580(local_50,&DAT_00527bf8);
  FUN_00545cd0(local_60);
  FUN_00417c40(local_30,local_60,&DAT_0052f3d0);
  FUN_00416ba0(&local_68,L"CurveObj.",local_res8[0]);
  uVar1 = FUN_00545d80(local_30,local_68);
  plVar2 = (longlong *)FUN_004113f0(uVar1,&PTR_FUN_0052c330);
  uVar1 = (**(code **)(*plVar2 + 0x60))(plVar2,L"Create");
  uVar3 = FUN_0054a100(plVar2);
  FUN_00536640(&local_a8,param_2);
  local_88 = local_a8;
  uStack_80 = uStack_a0;
  uStack_78 = uStack_98;
  uStack_70 = uStack_90;
  FUN_00557cd0(uVar1,local_50,uVar3,&local_88,0);
  FUN_00545cf0(local_30);
  uVar1 = FUN_01abec90(local_50,1);
  FUN_00417740(&local_a8,&DAT_00527bf8);
  FUN_00414480(&local_68);
  FUN_00417740(local_60,&DAT_0052f3d0);
  FUN_00417740(local_50,&DAT_00527bf8);
  FUN_00417740(local_30,&DAT_0052f3d0);
  FUN_00414480(local_res8);
  return uVar1;
}

