/* Ghidra address: 0161af70 */
/* Ghidra symbol: FUN_0161af70 */


void FUN_0161af70(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_2 + 0x20) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x20),iVar2);
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x20),uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

