/* Ghidra address: 01d34bb0 */
/* Ghidra symbol: FUN_01d34bb0 */


/* WARNING: Removing unreachable block (ram,0x01d34bcd) */

undefined8 FUN_01d34bb0(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  do {
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return 0;
}

