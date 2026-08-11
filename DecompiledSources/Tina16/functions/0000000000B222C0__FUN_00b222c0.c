/* Ghidra address: 00b222c0 */
/* Ghidra symbol: FUN_00b222c0 */


void FUN_00b222c0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_30 [8];
  
  iVar1 = FUN_00b22360();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_00b22330(param_2,local_30,iVar2);
      FUN_00b22280(param_1,local_30);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

