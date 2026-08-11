/* Ghidra address: 01821020 */
/* Ghidra symbol: FUN_01821020 */


ulonglong FUN_01821020(longlong param_1)

{
  char cVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  FUN_018210c0(param_1);
  cVar1 = FUN_0043e100(*(undefined2 *)
                        (*(longlong *)(param_1 + 0xa8) + -2 + (longlong)*(int *)(param_1 + 0x84) * 2
                        ),&DAT_01821098);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    while (cVar1 = FUN_0043e100(*(undefined2 *)
                                 (*(longlong *)(param_1 + 0xa8) + -2 +
                                 (longlong)*(int *)(param_1 + 0x84) * 2),&DAT_01821098),
          cVar1 != '\0') {
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    }
  }
  return uVar2 & 0xffffffff;
}

