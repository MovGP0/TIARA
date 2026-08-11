/* Ghidra address: 016d4330 */
/* Ghidra symbol: FUN_016d4330 */


undefined4 FUN_016d4330(longlong param_1)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0x578) == '\0') {
    local_10 = 0;
  }
  else {
    local_14 = 2;
    iVar1 = thunk_FUN_03ed2574(*(undefined8 *)(param_1 + 0x5a0),&local_14,0xc);
    if (iVar1 != 0) {
      local_10 = 0;
    }
  }
  return local_10;
}

