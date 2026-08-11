/* Ghidra address: 004095f0 */
/* Ghidra symbol: FUN_004095f0 */


int FUN_004095f0(longlong param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(code *)PTR_FUN_01db9c88)();
    if (iVar1 != 0) {
      FUN_004098e0(2);
    }
  }
  return iVar1;
}

