/* Ghidra address: 004c40f0 */
/* Ghidra symbol: FUN_004c40f0 */


void FUN_004c40f0(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_004c3730(param_1,8);
  *(char *)(*(longlong *)(param_1 + 0x10) + *(longlong *)(param_1 + 0x20)) = (char)param_2;
  if (((((param_3 < 2) ||
        (*(char *)(*(longlong *)(param_1 + 0x10) + 1 + *(longlong *)(param_1 + 0x20)) =
              (char)((ulonglong)param_2 >> 8), param_3 < 3)) ||
       (*(char *)(*(longlong *)(param_1 + 0x10) + 2 + *(longlong *)(param_1 + 0x20)) =
             (char)((ulonglong)param_2 >> 0x10), param_3 < 4)) ||
      ((*(char *)(*(longlong *)(param_1 + 0x10) + 3 + *(longlong *)(param_1 + 0x20)) =
             (char)((ulonglong)param_2 >> 0x18), param_3 < 5 ||
       (*(char *)(*(longlong *)(param_1 + 0x10) + 4 + *(longlong *)(param_1 + 0x20)) =
             (char)((ulonglong)param_2 >> 0x20), param_3 < 6)))) ||
     ((*(char *)(*(longlong *)(param_1 + 0x10) + 5 + *(longlong *)(param_1 + 0x20)) =
            (char)((ulonglong)param_2 >> 0x28), param_3 < 7 ||
      ((*(char *)(*(longlong *)(param_1 + 0x10) + 6 + *(longlong *)(param_1 + 0x20)) =
             (char)((ulonglong)param_2 >> 0x30), param_3 < 8 ||
       (*(char *)(*(longlong *)(param_1 + 0x10) + 7 + *(longlong *)(param_1 + 0x20)) =
             (char)((ulonglong)param_2 >> 0x38), param_3 < 9)))))) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3;
  }
  else {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 8;
    FUN_004c3f90(param_1,0,param_3 + -8);
  }
  return;
}

