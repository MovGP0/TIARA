/* Ghidra address: 0161dbb0 */
/* Ghidra symbol: FUN_0161dbb0 */


void FUN_0161dbb0(longlong param_1,int *param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (param_1 != 0) {
    *(int *)(param_1 + 0x80) = *param_2;
    *param_2 = *param_2 + 1;
    FUN_0161dbb0(*(undefined8 *)(param_1 + 8),param_2);
    FUN_0161dbb0(*(undefined8 *)(param_1 + 0x10),param_2);
  }
  FUN_00414480(&local_10);
  return;
}

