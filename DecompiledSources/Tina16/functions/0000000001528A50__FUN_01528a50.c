/* Ghidra address: 01528a50 */
/* Ghidra symbol: FUN_01528a50 */


void FUN_01528a50(undefined8 param_1,longlong param_2,double param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_2 + 0x30) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      puVar1 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(param_2 + 0x30),iVar2);
      if (((double)puVar1[1] != param_3) && (puVar1[2] != 0)) {
        *(undefined8 *)puVar1[2] = *puVar1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

