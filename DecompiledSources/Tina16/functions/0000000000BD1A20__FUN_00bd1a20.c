/* Ghidra address: 00bd1a20 */
/* Ghidra symbol: FUN_00bd1a20 */


undefined8 FUN_00bd1a20(void)

{
  int iVar1;
  
  iVar1 = thunk_FUN_03e49e8d(1);
  if ((iVar1 == 0) && (iVar1 = thunk_FUN_03e49e8d(0xd), iVar1 == 0)) {
    return 0;
  }
  return 1;
}

