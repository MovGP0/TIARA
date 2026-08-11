/* Ghidra address: 01ba0f30 */
/* Ghidra symbol: FUN_01ba0f30 */


undefined8 FUN_01ba0f30(byte param_1)

{
  ushort uVar1;
  undefined8 in_RAX;
  undefined6 uVar3;
  undefined8 uVar2;
  
  uVar3 = (undefined6)((ulonglong)in_RAX >> 0x10);
  uVar1 = (ushort)param_1;
  uVar2 = CONCAT62(uVar3,uVar1);
  if ((uVar1 < 0x61) || (0x7a < uVar1)) {
    uVar1 = (ushort)param_1;
    uVar2 = CONCAT62(uVar3,uVar1);
    if ((uVar1 < 0x41) || (0x5a < uVar1)) {
      uVar1 = (ushort)param_1;
      uVar2 = CONCAT62(uVar3,uVar1);
      if (((((uVar1 < 0x30) || (0x39 < uVar1)) && (param_1 != 0x20)) &&
          ((param_1 != 0x5f && (param_1 != 0x2c)))) &&
         ((param_1 != 0x3a && (((param_1 != 0x3b && (param_1 != 0xd)) && (param_1 != 10)))))) {
        return 0;
      }
    }
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}

