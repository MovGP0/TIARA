/* Ghidra address: 009f03b0 */
/* Ghidra symbol: FUN_009f03b0 */


ulonglong FUN_009f03b0(longlong param_1)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = FUN_00a01900(param_1);
  if ((ushort)uVar2 < 0x81) {
    uVar3 = (ulonglong)uVar2;
  }
  else if ((ushort)((ushort)uVar2 - 0xa1) < 0x5e) {
    cVar1 = FUN_00a01900(param_1);
    uVar3 = (**(code **)(param_1 + 0x20))
                      (*(undefined8 *)(param_1 + 0x28),(char)uVar2 + -0x80,cVar1 + -0x80);
  }
  else {
    uVar3 = CONCAT62((uint6)(ushort)(uVar2 >> 0x10),0xfffd);
  }
  return uVar3;
}

