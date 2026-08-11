/* Ghidra address: 0165d750 */
/* Ghidra symbol: FUN_0165d750 */


void FUN_0165d750(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  if (*(longlong *)(param_1 + 0x180) != 0) {
    lVar1 = FUN_004afa30(*(longlong *)(param_1 + 0x180));
    iVar4 = *(int *)(lVar1 + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar2 = FUN_004aeac0(lVar1,iVar3);
        FUN_004095f0(uVar2);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_00412130(*(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x10));
    FUN_00410f20();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x188) + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x188),iVar3);
        thunk_FUN_04184b1a(uVar2,0,0x8000);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_00410f20(*(undefined8 *)(param_1 + 0x188));
  }
  return;
}

