/* Ghidra address: 01c6db60 */
/* Ghidra symbol: FUN_01c6db60 */


ulonglong FUN_01c6db60(longlong param_1)

{
  short sVar1;
  ushort uVar2;
  undefined8 unaff_RSI;
  
  uVar2 = (ushort)*(byte *)(*(longlong *)(param_1 + 0x1a8) + 8);
  sVar1 = thunk_FUN_040bd713(0x10);
  if (sVar1 < 0) {
    uVar2 = uVar2 + 0x2000;
  }
  sVar1 = thunk_FUN_040bd713(0x11);
  if (sVar1 < 0) {
    uVar2 = uVar2 + 0x4000;
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x1a8) + 0x10) & 0x20000000) != 0) {
    uVar2 = uVar2 + 0x8000;
  }
  return CONCAT62((int6)((ulonglong)unaff_RSI >> 0x10),uVar2) & 0xffffffff;
}

