/* Ghidra address: 009f00f0 */
/* Ghidra symbol: FUN_009f00f0 */


ulonglong FUN_009f00f0(undefined8 param_1,ulonglong param_2)

{
  byte bVar1;
  undefined6 uVar3;
  ulonglong uVar2;
  
  bVar1 = (byte)(param_2 & 0xffffffff);
  uVar3 = (undefined6)((param_2 & 0xffffffff) >> 0x10);
  if (bVar1 < 0x80) {
    uVar2 = CONCAT62(uVar3,(ushort)(byte)param_2);
  }
  else if (bVar1 == 0xd5) {
    uVar2 = CONCAT62(uVar3,0x20ac);
  }
  else {
    uVar2 = (ulonglong)*(ushort *)(PTR_DAT_02003168 + (param_2 & 0xff) * 2 + -0x100);
  }
  return uVar2;
}

