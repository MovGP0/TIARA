/* Ghidra address: 012a3140 */
/* Ghidra symbol: FUN_012a3140 */


void FUN_012a3140(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  
  FUN_00411a80(param_1,param_2);
  plVar1 = *(longlong **)(param_1 + 0x78);
  iVar2 = (**(code **)(*plVar1 + 0x28))();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar5);
      iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0xc0))(*(longlong **)(param_1 + 8),uVar4);
      if (iVar3 == -1) {
        uVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar5);
        FUN_00410f20(uVar4);
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(plVar1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x88));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x80));
  FUN_010dbcf0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

