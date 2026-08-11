/* Ghidra address: 009f0130 */
/* Ghidra symbol: FUN_009f0130 */


ulonglong FUN_009f0130(undefined8 param_1,ulonglong param_2)

{
  uint uVar1;
  char cVar2;
  ulonglong uVar3;
  
  cVar2 = (char)(param_2 & 0xffffffff);
  uVar1 = (uint)param_2;
  if ((byte)(cVar2 + 0x60U) < 0x10) {
    uVar3 = (ulonglong)*(ushort *)(PTR_DAT_02004bf0 + (longlong)(int)((uVar1 & 0xff) - 0xa0) * 2);
  }
  else if ((byte)(cVar2 + 0x30U) < 0x10) {
    uVar3 = (ulonglong)*(ushort *)(PTR_DAT_02004eb8 + (longlong)(int)((uVar1 & 0xff) - 0xd0) * 2);
  }
  else if ((byte)(cVar2 + 0x10U) < 0x10) {
    uVar3 = (ulonglong)*(ushort *)(PTR_DAT_02003648 + (longlong)(int)((uVar1 & 0xff) - 0xf0) * 2);
  }
  else {
    uVar3 = CONCAT62((int6)((param_2 & 0xffffffff) >> 0x10),(ushort)(byte)param_2);
  }
  return uVar3;
}

