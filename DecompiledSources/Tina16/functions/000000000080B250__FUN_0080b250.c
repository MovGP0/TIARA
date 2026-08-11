/* Ghidra address: 0080b250 */
/* Ghidra symbol: FUN_0080b250 */


void FUN_0080b250(longlong param_1,longlong param_2)

{
  undefined8 local_30 [2];
  int local_1c [3];
  
  local_30[0] = 0;
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    local_1c[0] = *(int *)(param_2 + 0x18);
    FUN_004167d0(local_30,*(undefined8 *)(param_2 + 0x10));
    (**(code **)(param_1 + 0x2c0))
              (*(undefined8 *)(param_1 + 0x2c8),param_1,*(undefined4 *)(param_2 + 8),local_30[0],
               local_1c);
    *(longlong *)(param_2 + 0x18) = (longlong)local_1c[0];
  }
  FUN_00414480(local_30);
  return;
}

