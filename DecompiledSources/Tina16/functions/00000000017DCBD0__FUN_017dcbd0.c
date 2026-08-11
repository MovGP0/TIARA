/* Ghidra address: 017dcbd0 */
/* Ghidra symbol: FUN_017dcbd0 */


longlong FUN_017dcbd0(longlong param_1,undefined8 *param_2,char param_3,longlong param_4)

{
  int local_10;
  int iStack_c;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    iStack_c = (int)((ulonglong)*param_2 >> 0x20);
    if (*(int *)(param_1 + 8) <= iStack_c) {
      local_10 = (int)*param_2;
      if (local_10 < 1) {
        param_4 = param_1 + 0x1a0;
      }
      else if (param_3 == '\0') {
        param_4 = *(longlong *)(param_1 + 0x1c8) + (longlong)local_10 * 8;
      }
      else {
        param_4 = *(longlong *)(param_1 + 0x1c8) + (longlong)(local_10 * 2) * 8;
      }
    }
  }
  else {
    param_4 = 0;
  }
  return param_4;
}

