/* Ghidra address: 01c8a330 */
/* Ghidra symbol: FUN_01c8a330 */


undefined8 FUN_01c8a330(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    param_2 = *(longlong *)(param_1 + 0x27a8);
  }
  if (*(longlong *)(param_1 + 0x2780) != 0) {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x2780) + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),iVar3);
        if (param_2 == *(longlong *)(lVar1 + 8)) {
          uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),iVar3);
          return uVar2;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return 0;
}

