/* Ghidra address: 00b07d00 */
/* Ghidra symbol: FUN_00b07d00 */


void FUN_00b07d00(longlong param_1)

{
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_38 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x4d0) + 0xa9) == '\0') {
    if (*(longlong *)(param_1 + 0x498) != 0) {
      (**(code **)(param_1 + 0x498))(*(undefined8 *)(param_1 + 0x4a0),param_1);
    }
    local_30[0] = FUN_00498310(0,0);
    local_20 = FUN_0064d1f0(param_1,local_30);
    FUN_00835150(*(undefined8 *)(param_1 + 0x4b8),&local_38);
    FUN_00b060d0(*(undefined8 *)(param_1 + 0x4d0),*(undefined8 *)(param_1 + 0x4d8),local_38,
                 *(int *)(param_1 + 0x98),(int)local_20 + *(int *)(param_1 + 0x98),local_20._4_4_,
                 local_20._4_4_ + *(int *)(param_1 + 0x9c),8);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x4d0),1);
  }
  FUN_00414480(&local_38);
  return;
}

