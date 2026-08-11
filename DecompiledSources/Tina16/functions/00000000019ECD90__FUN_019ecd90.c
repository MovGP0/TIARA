/* Ghidra address: 019ecd90 */
/* Ghidra symbol: FUN_019ecd90 */


undefined1 FUN_019ecd90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [48];
  undefined1 local_48 [40];
  undefined8 local_20;
  
  local_80 = 0;
  local_88 = 0;
  local_20 = 0;
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_00414630(param_2);
  FUN_00414610(local_res18[0]);
  FUN_00417580(local_48,&DAT_00ea5f80);
  FUN_00417580(local_78,&DAT_00ea5ae8);
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  uVar3 = FUN_00458d50();
  (**(code **)(*plVar2 + 0xe0))(plVar2,local_res18[0],uVar3);
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_20);
  FUN_00415980(&local_80,3,"\\.subckt[\\t\\v ]+",local_res10,"[\\t\\v ]+");
  FUN_00416880(&local_88,local_80);
  FUN_00ea81b0(local_78,local_20,local_88,2);
  uVar1 = FUN_00ea74f0(local_78);
  FUN_00410f20(plVar2);
  FUN_00414480(&local_88);
  FUN_004144d0(&local_80);
  FUN_00417740(local_78,&DAT_00ea5ae8);
  FUN_00417740(local_48,&DAT_00ea5f80);
  FUN_00414480(&local_20);
  FUN_004144d0(&local_res10);
  FUN_00414480(local_res18);
  return uVar1;
}

