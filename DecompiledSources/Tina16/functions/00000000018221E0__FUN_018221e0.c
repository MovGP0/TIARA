/* Ghidra address: 018221e0 */
/* Ghidra symbol: FUN_018221e0 */


undefined4 FUN_018221e0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  cVar1 = FUN_0043e100(*(undefined2 *)
                        (*(longlong *)(param_1 + 0xa8) + -2 + (longlong)*(int *)(param_1 + 0x84) * 2
                        ),&DAT_01822260);
  if (cVar1 != '\0') {
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    cVar1 = FUN_0043e100(*(undefined2 *)
                          (*(longlong *)(param_1 + 0xa8) + -2 +
                          (longlong)*(int *)(param_1 + 0x84) * 2),&DAT_01822280);
    if (cVar1 != '\0') {
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    }
    uVar2 = FUN_01821f50(param_1);
  }
  return uVar2;
}

