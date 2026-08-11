/* Ghidra address: 00545e10 */
/* Ghidra symbol: FUN_00545e10 */


int FUN_00545e10(void)

{
  int iVar1;
  
  FUN_00542ef0(&DAT_02011680);
  LOCK();
  iVar1 = DAT_02011678;
  DAT_02011678 = DAT_02011678 + 1;
  UNLOCK();
  return iVar1;
}

