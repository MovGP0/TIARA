/* Ghidra address: 00cbb3b0 */
/* Ghidra symbol: FUN_00cbb3b0 */


undefined8 FUN_00cbb3b0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 != 0) {
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        lVar2 = FUN_00cbb450(param_1,iVar4);
        iVar1 = FUN_00416db0(*(undefined8 *)(lVar2 + 0x18),param_2);
        if ((iVar1 == 0) && (lVar2 = FUN_00cbb450(param_1,iVar4), lVar2 != param_3)) {
          uVar3 = FUN_00cbb450(param_1,iVar4);
          return uVar3;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return 0;
}

