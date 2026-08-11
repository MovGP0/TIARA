/* Ghidra address: 010717a0 */
/* Ghidra symbol: FUN_010717a0 */


void FUN_010717a0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  FUN_01071c20(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x710) + 0x268))
            (*(longlong **)(param_1 + 0x710),0 < *(int *)(param_1 + 0x760));
  if ((*(uint *)(param_1 + 0x71a) & 1) == 0) {
    FUN_0074b490(*(undefined8 *)(param_1 + 0x6e0),0);
  }
  else {
    FUN_0074b490(*(undefined8 *)(param_1 + 0x6e0),1);
  }
  if ((*(uint *)(param_1 + 0x71a) & 2) == 0) {
    if ((*(uint *)(param_1 + 0x71a) & 0x2000) == 0) {
      FUN_0074b490(*(undefined8 *)(param_1 + 0x6e8),0);
    }
    else {
      FUN_0074b490(*(undefined8 *)(param_1 + 0x6e8),2);
    }
  }
  else {
    FUN_0074b490(*(undefined8 *)(param_1 + 0x6e8),1);
  }
  iVar2 = FUN_01071590(param_1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x708) + 0x4f0);
  iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (iVar2 + -1 < iVar3) {
    (**(code **)(**(longlong **)(param_1 + 0x708) + 0x268))
              (*(longlong **)(param_1 + 0x708),iVar2 + -1);
  }
  return;
}

