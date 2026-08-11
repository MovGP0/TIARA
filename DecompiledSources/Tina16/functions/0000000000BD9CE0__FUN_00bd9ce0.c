/* Ghidra address: 00bd9ce0 */
/* Ghidra symbol: FUN_00bd9ce0 */


void FUN_00bd9ce0(longlong param_1,undefined8 param_2,undefined1 param_3,undefined2 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  code *local_30;
  undefined8 local_28;
  undefined1 *local_20;
  int local_c;
  
  local_20 = auStack_68;
  if (*(char *)(param_1 + 0x3b) == '\0') {
    *(undefined1 *)(param_1 + 0x3b) = 1;
    local_c = FUN_00bda1c0(*(undefined8 *)(param_1 + 0x20));
    local_c = local_c + -1;
    if (-1 < local_c) {
      do {
        FUN_00bda1d0(*(undefined8 *)(param_1 + 0x20),&local_30,local_c);
        local_48 = param_5;
        local_40 = param_6;
        (*local_30)(local_28,param_2,param_3,param_4);
        local_c = local_c + -1;
      } while (local_c != -1);
    }
    *(undefined1 *)(param_1 + 0x3b) = 0;
  }
  return;
}

