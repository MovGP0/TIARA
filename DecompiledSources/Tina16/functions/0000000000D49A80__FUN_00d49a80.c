/* Ghidra address: 00d49a80 */
/* Ghidra symbol: FUN_00d49a80 */


int FUN_00d49a80(longlong param_1)

{
  int iVar1;
  int local_18 [2];
  int local_10;
  
  iVar1 = thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18),0x467,
                             (longlong)*(int *)(param_1 + 0x10),local_18);
  if (iVar1 == 0) {
    local_10 = 0xf;
  }
  else {
    local_10 = local_10 - local_18[0];
  }
  return local_10;
}

