/* Ghidra address: 0162dbe0 */
/* Ghidra symbol: FUN_0162dbe0 */


void FUN_0162dbe0(undefined8 param_1,int param_2,longlong param_3,undefined1 *param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  lVar2 = *(longlong *)(param_3 + 0x5f8);
  iVar1 = *(int *)(lVar2 + 0x10);
  iVar3 = *(int *)(param_3 + 0x5d0);
  *param_4 = 1;
  iVar3 = iVar3 + param_2;
  if (iVar1 + -1 < iVar3) {
    *param_4 = 0;
  }
  else {
    uVar4 = FUN_004aeac0(lVar2,iVar3);
    FUN_01614c70(uVar4);
  }
  return;
}

