/* Ghidra address: 016d3e10 */
/* Ghidra symbol: FUN_016d3e10 */


undefined8 FUN_016d3e10(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_016d3db0();
  uVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x4a0);
  if (-1 < iVar4 + -1) {
    do {
      iVar2 = (int)uVar3;
      puVar1 = *(undefined8 **)(param_1 + 0x528 + (longlong)iVar2 * 8);
      *puVar1 = *(undefined8 *)(param_1 + 0x548 + (longlong)iVar2 * 8);
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 0x498);
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      puVar1[2] = 0;
      *(undefined4 *)(puVar1 + 3) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      uVar3 = (ulonglong)(iVar2 + 1);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}

