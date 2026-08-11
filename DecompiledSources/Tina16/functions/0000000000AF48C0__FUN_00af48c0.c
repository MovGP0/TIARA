/* Ghidra address: 00af48c0 */
/* Ghidra symbol: FUN_00af48c0 */


ulonglong FUN_00af48c0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  longlong local_28;
  ushort local_1a;
  
  uVar2 = CONCAT62((int6)((ulonglong)unaff_RSI >> 0x10),0x20);
  cVar1 = FUN_00a9bfa0(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x8b0),param_2,&local_1a,
                       &local_28);
  if ((cVar1 != '\0') && (local_28 == *(longlong *)(param_1 + 0x88))) {
    uVar2 = (ulonglong)local_1a;
  }
  return uVar2 & 0xffffffff;
}

