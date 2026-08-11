/* Ghidra address: 00c60be0 */
/* Ghidra symbol: FUN_00c60be0 */


void FUN_00c60be0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  if ((*(longlong *)(param_1 + 0x20) != 0) && (*(char *)(param_1 + 0x2c) != '\0')) {
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x948) + 0x310);
    FUN_005fd640(plVar1[0xf],0xf);
    FUN_005fd670(plVar1[0xf],0);
    FUN_005fd6d0(plVar1[0xf],0);
    FUN_005fd4e0(plVar1[0xf],0x8000);
    FUN_005fdcb0(plVar1[0x10],1);
    piVar2 = (int *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),0);
    lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),0);
    (**(code **)(*plVar1 + 200))
              (plVar1,*(int *)PTR_DAT_020033a8 * *piVar2,
               *(int *)PTR_DAT_02002d48 * *(int *)(lVar3 + 4));
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10) + -1;
    iVar4 = 1;
    if (0 < iVar5) {
      do {
        piVar2 = (int *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar4);
        lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar4);
        (**(code **)(*plVar1 + 0xc0))
                  (plVar1,*(int *)PTR_DAT_020033a8 * *piVar2,
                   *(int *)PTR_DAT_02002d48 * *(int *)(lVar3 + 4));
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}

