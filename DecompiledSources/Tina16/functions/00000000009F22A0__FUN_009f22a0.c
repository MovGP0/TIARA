/* Ghidra address: 009f22a0 */
/* Ghidra symbol: FUN_009f22a0 */


undefined8 FUN_009f22a0(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_30;
  
  local_30 = param_1;
  uVar1 = FUN_00a01900();
  uVar7 = (ulonglong)uVar1;
  uVar5 = uVar7 & 0xffff;
  if (uVar5 < 0xa3) {
    if (uVar5 != 0xa2) {
      if (uVar5 < 0x80) {
        uVar6 = FUN_009ef730(local_30,uVar7);
        return uVar6;
      }
      if (uVar5 - 0x81 < 4) {
        uVar2 = FUN_00a01900(local_30);
        if (9 < (ushort)((short)uVar2 - 0x30U)) {
          return CONCAT62((uint6)(ushort)((uint)uVar2 >> 0x10),0xfffd);
        }
        uVar3 = FUN_00a01900(local_30);
        if ((ushort)((short)uVar3 - 0x81U) < 0x7e) {
          local_48 = FUN_00a01900(local_30);
          uVar6 = FUN_009f21c0(auStack_68,uVar7,uVar2,uVar3);
          return uVar6;
        }
        return CONCAT62((uint6)(ushort)((uint)uVar3 >> 0x10),0xfffd);
      }
LAB_009f23d4:
      uVar2 = FUN_00a01900(local_30);
      uVar6 = FUN_009ef840(local_30,uVar7,uVar2);
      return uVar6;
    }
  }
  else if ((1 < uVar5 - 0xa8) && (uVar5 - 0xa8 != 0x56)) goto LAB_009f23d4;
  uVar4 = FUN_00a01900(local_30);
  if ((ushort)((short)uVar4 - 0x40U) < 0x3f) {
    uVar6 = FUN_009f2140(auStack_68,(uVar1 & 0xffff) - 0x81,(uVar4 & 0xffff) - 0x40);
  }
  else if ((ushort)((short)uVar4 - 0x80U) < 0x7f) {
    uVar6 = FUN_009f2140(auStack_68,(uVar1 & 0xffff) - 0x81,(uVar4 & 0xffff) - 0x41);
  }
  else {
    uVar6 = CONCAT62((uint6)(ushort)(uVar4 >> 0x10),0xfffd);
  }
  return uVar6;
}

