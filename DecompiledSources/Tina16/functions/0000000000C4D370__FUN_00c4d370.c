/* Ghidra address: 00c4d370 */
/* Ghidra symbol: FUN_00c4d370 */


void FUN_00c4d370(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  (**(code **)(*param_2 + 0x38))(param_2,local_20);
  (**(code **)(*(longlong *)param_1[0xf] + 0x38))((longlong *)param_1[0xf],&local_28);
  iVar1 = FUN_0043e650(local_20[0],local_28);
  if (iVar1 != 0) {
    (**(code **)(*(longlong *)param_1[0xf] + 0x10))((longlong *)param_1[0xf],param_2);
    (**(code **)(*param_1 + 0x90))(param_1);
  }
  FUN_00414560(&local_28,2);
  return;
}

