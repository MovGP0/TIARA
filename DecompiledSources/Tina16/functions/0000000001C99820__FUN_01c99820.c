/* Ghidra address: 01c99820 */
/* Ghidra symbol: FUN_01c99820 */


void FUN_01c99820(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  plVar1 = *(longlong **)(param_1 + 0x1900);
  *(undefined4 *)(plVar1 + 0x1d) = 1;
  FUN_00414ad0(plVar1 + 0x20,&DAT_01c99924);
  FUN_00416cd0(local_20,3,*(undefined8 *)PTR_DAT_020049a0,&DAT_01c99938,plVar1[0x20]);
  FUN_00724380(plVar1,local_20[0]);
  cVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1);
  if (cVar2 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x1900),&local_28);
    FUN_01bb4cc0(local_28,0,0);
  }
  FUN_00414480(&local_28);
  FUN_00414480(local_20);
  return;
}

