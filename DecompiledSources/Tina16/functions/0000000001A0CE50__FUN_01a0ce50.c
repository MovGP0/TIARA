/* Ghidra address: 01a0ce50 */
/* Ghidra symbol: FUN_01a0ce50 */


bool FUN_01a0ce50(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  bool local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_30 = 0;
  local_28 = 0;
  local_31 = false;
  if (param_2 != (longlong *)0x0) {
    cVar1 = FUN_0198a580(param_2);
    if (cVar1 == '\x03') {
      (**(code **)(*param_2 + 0x288))(param_2,&local_28);
      FUN_0043e130(local_20,local_28);
      FUN_0043e130(&local_30,*(undefined8 *)(param_1 + 0x58));
      iVar2 = FUN_00416db0(local_20[0],local_30);
      local_31 = iVar2 == 0;
    }
  }
  FUN_00414560(&local_30,3);
  return local_31;
}

