/* Ghidra address: 01a49570 */
/* Ghidra symbol: FUN_01a49570 */


bool FUN_01a49570(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  FUN_00416880(local_20,*(undefined8 *)(param_1 + 0x138));
  plVar2 = (longlong *)FUN_01b21480(local_20[0]);
  FUN_0043f750(&local_28,param_2);
  iVar1 = (**(code **)(*plVar2 + 0xb0))(plVar2,local_28);
  FUN_00410f20(plVar2);
  FUN_00414560(&local_28,2);
  return -1 < iVar1;
}

