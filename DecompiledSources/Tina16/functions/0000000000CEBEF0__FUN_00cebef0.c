/* Ghidra address: 00cebef0 */
/* Ghidra symbol: FUN_00cebef0 */


void FUN_00cebef0(longlong param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (DAT_01eb1410 != 0)) {
    iVar1 = FUN_004aeba0(DAT_01eb1410,param_1);
    if (iVar1 == -1) {
      FUN_004ae7e0(DAT_01eb1410,param_1);
    }
  }
  return;
}

