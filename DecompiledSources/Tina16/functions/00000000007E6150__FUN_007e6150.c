/* Ghidra address: 007e6150 */
/* Ghidra symbol: FUN_007e6150 */


ulonglong FUN_007e6150(longlong param_1)

{
  ulonglong uVar1;
  short sVar2;
  ushort uVar3;
  undefined8 unaff_RBX;
  undefined6 uVar5;
  undefined1 local_40;
  ulonglong uVar4;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  local_40 = (byte)*(undefined8 *)(param_1 + 8);
  uVar5 = (undefined6)((ulonglong)unaff_RBX >> 0x10);
  uVar3 = (ushort)local_40;
  uVar4 = CONCAT62(uVar5,uVar3);
  if (uVar3 != 0) {
    sVar2 = thunk_FUN_040bd713(0x10);
    if (sVar2 < 0) {
      uVar4 = CONCAT62(uVar5,uVar3 + 0x2000);
    }
    sVar2 = thunk_FUN_040bd713(0x11);
    if (sVar2 < 0) {
      uVar4 = CONCAT62((int6)(uVar4 >> 0x10),(short)uVar4 + 0x4000);
    }
    if ((uVar1 & 0x20000000) != 0) {
      uVar4 = CONCAT62((int6)(uVar4 >> 0x10),(short)uVar4 + -0x8000);
    }
  }
  return uVar4 & 0xffffffff;
}

