/* Ghidra address: 009ef730 */
/* Ghidra symbol: FUN_009ef730 */


ulonglong FUN_009ef730(undefined8 param_1,undefined4 param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  
  uVar1 = (ushort)((uint)param_2 >> 0x10);
  if ((byte)param_2 < 0x80) {
    uVar2 = (ulonglong)CONCAT22(uVar1,(ushort)(byte)param_2);
  }
  else {
    uVar2 = CONCAT62((uint6)uVar1,0xfffd);
  }
  return uVar2;
}

