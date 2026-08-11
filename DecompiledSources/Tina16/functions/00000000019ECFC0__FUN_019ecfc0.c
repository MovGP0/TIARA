/* Ghidra address: 019ecfc0 */
/* Ghidra symbol: FUN_019ecfc0 */


undefined8 FUN_019ecfc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [48];
  undefined1 local_48 [40];
  undefined8 local_20;
  
  local_80 = 0;
  local_88 = 0;
  local_20 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414630(param_3);
  FUN_00414610(local_res20);
  FUN_00417580(local_48,&DAT_00ea5f80);
  FUN_00417580(local_78,&DAT_00ea5ae8);
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  uVar3 = FUN_00458d50();
  (**(code **)(*plVar2 + 0xe0))(plVar2,local_res20,uVar3);
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_20);
  FUN_00415980(&local_80,3,"\\.subckt[\\t\\v ]",local_res18,".*?\\.ends");
  FUN_00416880(&local_88,local_80);
  FUN_00ea81b0(local_78,local_20,local_88,0x22);
  cVar1 = FUN_00ea74f0(local_78);
  if (cVar1 != '\0') {
    FUN_00ea7500(local_78,param_2);
  }
  FUN_00410f20(plVar2);
  FUN_00414480(&local_88);
  FUN_004144d0(&local_80);
  FUN_00417740(local_78,&DAT_00ea5ae8);
  FUN_00417740(local_48,&DAT_00ea5f80);
  FUN_00414480(&local_20);
  FUN_004144d0(&local_res18);
  FUN_00414480(&local_res20);
  return param_2;
}

