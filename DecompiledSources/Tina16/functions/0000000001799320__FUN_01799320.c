/* Ghidra address: 01799320 */
/* Ghidra symbol: FUN_01799320 */


void FUN_01799320(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar2);
      FUN_017afd00(uVar1,1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_0064e770(*(undefined8 *)(param_1 + 0x948));
  return;
}

