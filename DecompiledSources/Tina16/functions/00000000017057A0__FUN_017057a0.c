/* Ghidra address: 017057a0 */
/* Ghidra symbol: FUN_017057a0 */


void FUN_017057a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),iVar2);
      (**(code **)(*param_2 + 0x78))(param_2,*(undefined8 *)(lVar1 + 0x10));
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

