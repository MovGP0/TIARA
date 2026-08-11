/* Ghidra address: 012ddec0 */
/* Ghidra symbol: FUN_012ddec0 */


void FUN_012ddec0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  FUN_00410f20();
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        plVar1 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),iVar2);
        (**(code **)(*plVar1 + -0x20))(plVar1,1);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10));
    FUN_00410f20(*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}

