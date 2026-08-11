/* Ghidra address: 00aa8900 */
/* Ghidra symbol: FUN_00aa8900 */


void FUN_00aa8900(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x1b8) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_00ac5690(*(undefined8 *)(param_1 + 0x1b8),iVar2);
      uVar1 = FUN_00a98b50(uVar1);
      FUN_004ae7e0(param_2,uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

