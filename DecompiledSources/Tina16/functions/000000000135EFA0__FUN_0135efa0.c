/* Ghidra address: 0135efa0 */
/* Ghidra symbol: FUN_0135efa0 */


void FUN_0135efa0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0);
  iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (0 < iVar2) {
    iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0) + 0x28))();
    iVar3 = 0;
    if (-1 < iVar2 + -1) {
      do {
        FUN_00821790(*(undefined8 *)(param_1 + 0x6b0),iVar3,1);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_0135ed00(param_1,1);
  }
  return;
}

