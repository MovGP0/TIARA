/* Ghidra address: 006db9c0 */
/* Ghidra symbol: FUN_006db9c0 */


undefined8 FUN_006db9c0(longlong param_1)

{
  int iVar1;
  int local_c;
  
  if (((*(char *)(*(longlong *)(param_1 + 0x60) + 0x4b8) != '\0') &&
      (iVar1 = thunk_FUN_03e0f7b4(0x26,0,&local_c,0), iVar1 != 0)) && (local_c != 0)) {
    return 1;
  }
  return 0;
}

