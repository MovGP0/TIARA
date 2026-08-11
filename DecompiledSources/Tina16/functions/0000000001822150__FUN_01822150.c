/* Ghidra address: 01822150 */
/* Ghidra symbol: FUN_01822150 */


undefined4 FUN_01822150(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x84);
  uVar4 = FUN_01822070(param_1);
  if ((char)uVar4 != '\0') {
    if (*(short *)(*(longlong *)(param_1 + 0xa8) + -2 + (longlong)*(int *)(param_1 + 0x84) * 2) ==
        0x2e) {
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
      uVar4 = FUN_01821f50(param_1);
    }
    if ((char)uVar4 != '\0') {
      uVar2 = *(undefined4 *)(param_1 + 0x84);
      cVar3 = FUN_018221e0(param_1);
      if (cVar3 == '\0') {
        *(undefined4 *)(param_1 + 0x84) = uVar2;
      }
    }
  }
  if ((char)uVar4 == '\0') {
    *(undefined4 *)(param_1 + 0x84) = uVar1;
  }
  return uVar4;
}

