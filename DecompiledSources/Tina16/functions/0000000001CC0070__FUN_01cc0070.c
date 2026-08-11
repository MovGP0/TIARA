/* Ghidra address: 01cc0070 */
/* Ghidra symbol: FUN_01cc0070 */


void FUN_01cc0070(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_48 [40];
  
  iVar3 = *(int *)(param_2 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_01d347d0(param_2,iVar2);
      FUN_01cc0030(auStack_48,uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_004b8ba0(*(undefined8 *)(param_1 + 0x438),*(undefined8 *)(param_2 + 0x438),0);
  return;
}

