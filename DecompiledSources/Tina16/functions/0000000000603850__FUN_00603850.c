/* Ghidra address: 00603850 */
/* Ghidra symbol: FUN_00603850 */


undefined8 FUN_00603850(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10) + -1;
  if (-1 < iVar3) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),iVar3);
      if (uVar1 == (param_2 & 0xffff)) {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar3);
        return uVar2;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return 0;
}

