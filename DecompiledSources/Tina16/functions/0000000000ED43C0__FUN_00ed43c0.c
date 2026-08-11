/* Ghidra address: 00ed43c0 */
/* Ghidra symbol: FUN_00ed43c0 */


void FUN_00ed43c0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  plVar1 = *(longlong **)(param_1 + 0x828);
  FUN_00416ba0(local_20,*(undefined8 *)PTR_DAT_020049a0,*(undefined8 *)PTR_DAT_02004c08);
  FUN_00724420(plVar1,local_20[0]);
  cVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1);
  if (cVar2 != '\0') {
    FUN_00724270(plVar1,&local_28);
    FUN_00ed4890(param_1,local_28);
  }
  FUN_00414480(&local_28);
  FUN_00414480(local_20);
  return;
}

