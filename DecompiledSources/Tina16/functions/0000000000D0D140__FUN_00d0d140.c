/* Ghidra address: 00d0d140 */
/* Ghidra symbol: FUN_00d0d140 */


undefined8 FUN_00d0d140(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_10;
  
  local_10 = 0;
  plVar2 = (longlong *)FUN_00d0cef0();
  iVar1 = (**(code **)(*plVar2 + 0xc0))(plVar2,param_2);
  if (iVar1 < 0) {
    FUN_00cd7870(param_1,param_2);
  }
  else {
    FUN_004b3cf0(DAT_01ebb7c8,&local_10,iVar1);
    FUN_00415dd0(param_1,local_10,0);
  }
  FUN_00414480(&local_10);
  return param_1;
}

