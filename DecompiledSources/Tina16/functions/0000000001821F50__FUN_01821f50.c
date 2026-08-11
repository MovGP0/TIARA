/* Ghidra address: 01821f50 */
/* Ghidra symbol: FUN_01821f50 */


undefined8 FUN_01821f50(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  cVar1 = FUN_0043e100(*(undefined2 *)
                        (*(longlong *)(param_1 + 0xa8) + -2 + (longlong)*(int *)(param_1 + 0x84) * 2
                        ),&DAT_01821fc0);
  if (cVar1 != '\0') {
    while (cVar1 = FUN_0043e100(*(undefined2 *)
                                 (*(longlong *)(param_1 + 0xa8) + -2 +
                                 (longlong)*(int *)(param_1 + 0x84) * 2),&DAT_01821fc0),
          cVar1 != '\0') {
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    }
    uVar2 = 1;
  }
  return uVar2;
}

