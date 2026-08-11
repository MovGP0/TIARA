/* Ghidra address: 009f1210 */
/* Ghidra symbol: FUN_009f1210 */


ulonglong FUN_009f1210(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_00a01900(param_1);
  if ((ushort)uVar1 < 0x80) {
    uVar3 = (ulonglong)uVar1;
  }
  else if ((ushort)uVar1 == 0x80) {
    uVar3 = CONCAT62((uint6)(ushort)(uVar1 >> 0x10),0x20ac);
  }
  else {
    uVar2 = FUN_00a01900(param_1);
    uVar3 = FUN_009ef840(param_1,uVar1,uVar2);
  }
  return uVar3;
}

