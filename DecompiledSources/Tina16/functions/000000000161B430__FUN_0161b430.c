/* Ghidra address: 0161b430 */
/* Ghidra symbol: FUN_0161b430 */


void FUN_0161b430(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar2);
      uVar1 = FUN_0161adb0(uVar1);
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10),uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

