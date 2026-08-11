/* Ghidra address: 013ba600 */
/* Ghidra symbol: FUN_013ba600 */


double FUN_013ba600(longlong *param_1)

{
  char cVar1;
  double dVar2;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_28 = 0;
  (**(code **)(*param_1 + 0x18))(param_1,&local_28);
  cVar1 = FUN_0043fd30(local_28,local_20);
  if (cVar1 == '\0') {
    dVar2 = (double)FUN_00448650(local_28,PTR_DAT_02004830);
  }
  else {
    dVar2 = (double)local_20[0];
  }
  FUN_00414480(&local_28);
  return dVar2;
}

