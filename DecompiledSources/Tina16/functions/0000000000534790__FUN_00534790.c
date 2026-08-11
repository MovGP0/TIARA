/* Ghidra address: 00534790 */
/* Ghidra symbol: FUN_00534790 */


int FUN_00534790(void)

{
  int iVar1;
  
  LOCK();
  iVar1 = DAT_02011698;
  DAT_02011698 = DAT_02011698 + 1;
  UNLOCK();
  return iVar1;
}

