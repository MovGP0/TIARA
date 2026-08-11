/* Ghidra address: 015ab570 */
/* Ghidra symbol: FUN_015ab570 */


void FUN_015ab570(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  undefined4 local_c;
  
  local_c = 0;
  if (-1 < param_3 + -1) {
    do {
      *(byte *)(param_4 + local_c) = *(byte *)(param_1 + local_c) ^ *(byte *)(param_2 + local_c);
      local_c = local_c + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

