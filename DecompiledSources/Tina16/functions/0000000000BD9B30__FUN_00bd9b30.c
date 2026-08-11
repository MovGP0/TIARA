/* Ghidra address: 00bd9b30 */
/* Ghidra symbol: FUN_00bd9b30 */


void FUN_00bd9b30(longlong param_1,undefined8 param_2,short *param_3,undefined2 param_4)

{
  undefined1 auStack_58 [40];
  code *local_30;
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 local_18;
  int local_c;
  
  local_20 = auStack_58;
  if (*(char *)(param_1 + 0x3a) == '\0') {
    *(undefined1 *)(param_1 + 0x3a) = 1;
    local_18 = *(undefined8 *)(param_1 + 0x18);
    local_c = FUN_00bda1c0(local_18);
    local_c = local_c + -1;
    if (-1 < local_c) {
      do {
        FUN_00bda1d0(local_18,&local_30,local_c);
        (*local_30)(local_28,param_2,param_3,param_4);
        if (*param_3 == 0) {
          *(undefined1 *)(param_1 + 0x3a) = 0;
          FUN_00bd9bf0(0,local_20);
          return;
        }
        local_c = local_c + -1;
      } while (local_c != -1);
    }
    *(undefined1 *)(param_1 + 0x3a) = 0;
  }
  return;
}

