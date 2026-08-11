/* Ghidra address: 00f7f370 */
/* Ghidra symbol: FUN_00f7f370 */


ulonglong FUN_00f7f370(longlong param_1)

{
  char cVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  cVar1 = FUN_015f6460(*(undefined8 *)(param_1 + 0x20));
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0xd8))
              (*(longlong **)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20));
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x98))(*(longlong **)(param_1 + 0x10),0);
  }
  return uVar2 & 0xffffffff;
}

