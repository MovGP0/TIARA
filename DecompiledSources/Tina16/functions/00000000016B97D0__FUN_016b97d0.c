/* Ghidra address: 016b97d0 */
/* Ghidra symbol: FUN_016b97d0 */


undefined8 FUN_016b97d0(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(char *)(param_1 + 0x28) == 'B') && (*(int *)(*(longlong *)(param_1 + 0x30) + 0x10) == 3))
     && (*(longlong *)(param_1 + 0x10) != 0)) {
    uVar1 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x30) >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

