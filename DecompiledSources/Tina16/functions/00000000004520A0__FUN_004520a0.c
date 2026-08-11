/* Ghidra address: 004520a0 */
/* Ghidra symbol: FUN_004520a0 */


int FUN_004520a0(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_2;
  *param_2 = *param_2 + param_3;
  UNLOCK();
  return iVar1;
}

