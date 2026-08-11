/* Ghidra address: 01602ea0 */
/* Ghidra symbol: FUN_01602ea0 */


void FUN_01602ea0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_38 [8];
  undefined1 local_30 [4];
  undefined1 local_2c [12];
  
  iVar1 = _GetNextVAMSChangedObjCount();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      _GetNextVAMSChangedObj(param_2,iVar2,local_38,local_2c,local_30);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

