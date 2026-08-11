/* Ghidra address: 00bbfaa0 */
/* Ghidra symbol: FUN_00bbfaa0 */


void FUN_00bbfaa0(longlong *param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  
  iVar1 = *(int *)(param_2 + 8);
  bVar2 = (int)param_1[1] != iVar1;
  if (bVar2) {
    *(int *)(param_1 + 1) = iVar1;
  }
  iVar1 = *(int *)(param_2 + 0x10);
  bVar3 = (int)param_1[2] != iVar1;
  if (bVar3) {
    *(int *)(param_1 + 2) = iVar1;
  }
  bVar4 = (char)param_1[5] != *(char *)(param_2 + 0x28);
  if (bVar4) {
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 0x28);
  }
  if (bVar4 || (bVar3 || bVar2)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return;
}

