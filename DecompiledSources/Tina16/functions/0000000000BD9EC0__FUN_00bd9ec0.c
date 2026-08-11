/* Ghidra address: 00bd9ec0 */
/* Ghidra symbol: FUN_00bd9ec0 */


void FUN_00bd9ec0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [40];
  code *local_30;
  undefined8 local_28;
  undefined1 *local_20;
  int local_c;
  
  local_20 = auStack_58;
  if (*(char *)(param_1 + 0x3d) == '\0') {
    *(undefined1 *)(param_1 + 0x3d) = 1;
    local_c = FUN_00bda1c0(*(undefined8 *)(param_1 + 0x30));
    local_c = local_c + -1;
    if (-1 < local_c) {
      do {
        FUN_00bda1d0(*(undefined8 *)(param_1 + 0x30),&local_30,local_c);
        (*local_30)(local_28,param_2,param_3,param_4);
        local_c = local_c + -1;
      } while (local_c != -1);
    }
    *(undefined1 *)(param_1 + 0x3d) = 0;
  }
  return;
}

