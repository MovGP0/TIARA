/* Ghidra address: 01390bc0 */
/* Ghidra symbol: FUN_01390bc0 */


void FUN_01390bc0(longlong param_1,double param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      puVar1 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),iVar2);
      if (((double)puVar1[1] != param_2) && (puVar1[2] != 0)) {
        *(undefined8 *)puVar1[2] = *puVar1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

