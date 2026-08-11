/* Ghidra address: 00654bc0 */
/* Ghidra symbol: FUN_00654bc0 */


void FUN_00654bc0(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x370);
  if (lVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(lVar1 + 0x10);
  }
  if (param_2 < iVar2) {
    FUN_004aeac0(lVar1);
  }
  else {
    FUN_004aeac0(*(undefined8 *)(param_1 + 0x378),param_2 - iVar2);
  }
  return;
}

