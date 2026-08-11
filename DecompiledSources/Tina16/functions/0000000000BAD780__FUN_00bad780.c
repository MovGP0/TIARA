/* Ghidra address: 00bad780 */
/* Ghidra symbol: FUN_00bad780 */


void FUN_00bad780(longlong param_1,char param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (*(char *)(param_1 + 0x4c) != '\0') {
    if (0 < *(int *)(param_1 + 0x48) || param_2 != '\0') {
      FUN_00b9c2d0(*(undefined8 *)(param_1 + 0x28),&LAB_00bad854);
    }
    if (((*(char *)(param_1 + 0x4c) == '\x02') && (*(int *)(param_1 + 0x48) < 0x7fffffff)) &&
       (0 < *(int *)(param_1 + 0x48))) {
      FUN_00417320(&local_10,0x20,*(int *)(param_1 + 0x48) * 2);
      FUN_00b9c2d0(*(undefined8 *)(param_1 + 0x28),local_10);
    }
  }
  FUN_00414480(&local_10);
  return;
}

