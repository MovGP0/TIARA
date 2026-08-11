/* Ghidra address: 016e8fd0 */
/* Ghidra symbol: FUN_016e8fd0 */


byte * FUN_016e8fd0(byte param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  pbVar1 = (byte *)FUN_004095c0(0x78);
  *pbVar1 = param_1;
  uVar3 = (ulonglong)param_1;
  uVar2 = FUN_00409570(PTR_DAT_020036b8[uVar3 * 6]);
  *(undefined8 *)(pbVar1 + 8) = uVar2;
  uVar2 = FUN_00409570((uint)(byte)PTR_DAT_020036b8[uVar3 * 6] * 4);
  *(undefined8 *)(pbVar1 + 0x10) = uVar2;
  uVar2 = FUN_00409570((longlong)
                       (int)((uint)(byte)PTR_DAT_020036b8[uVar3 * 6 + 1] * 8 +
                            *(int *)PTR_DAT_020036d8 * 2));
  *(undefined8 *)(pbVar1 + 0x20) = uVar2;
  *(longlong *)(pbVar1 + 0x18) =
       *(longlong *)(pbVar1 + 0x20) + (longlong)(*(int *)PTR_DAT_020036d8 + -1) &
       (longlong)-*(int *)PTR_DAT_020036d8;
  uVar2 = FUN_00409570(PTR_DAT_020036b8[uVar3 * 6 + 2]);
  *(undefined8 *)(pbVar1 + 0x28) = uVar2;
  uVar2 = FUN_00409570((uint)(byte)PTR_DAT_020036b8[uVar3 * 6 + 2] * 4);
  *(undefined8 *)(pbVar1 + 0x30) = uVar2;
  uVar2 = FUN_00409570((ulonglong)(byte)PTR_DAT_020036b8[uVar3 * 6 + 5] << 3);
  *(undefined8 *)(pbVar1 + 0x40) = uVar2;
  uVar2 = FUN_00409570((uint)(byte)PTR_DAT_020036b8[uVar3 * 6 + 5] * 2);
  *(undefined8 *)(pbVar1 + 0x48) = uVar2;
  uVar2 = FUN_00409570(PTR_DAT_020036b8[uVar3 * 6 + 5]);
  *(undefined8 *)(pbVar1 + 0x50) = uVar2;
  pbVar1[0x58] = 0;
  pbVar1[0x59] = 0;
  pbVar1[0x5a] = 0;
  pbVar1[0x5b] = 0;
  pbVar1[0x5c] = 0;
  pbVar1[0x5d] = 0;
  pbVar1[0x5e] = 0;
  pbVar1[0x5f] = 0;
  pbVar1[0x60] = 0;
  pbVar1[0x61] = 0;
  pbVar1[0x62] = 0;
  pbVar1[99] = 0;
  pbVar1[100] = 0;
  pbVar1[0x65] = 0;
  pbVar1[0x66] = 0;
  pbVar1[0x67] = 0;
  pbVar1[0x68] = 0;
  pbVar1[0x69] = 0;
  pbVar1[0x6a] = 0;
  pbVar1[0x6b] = 0;
  pbVar1[0x6c] = 0;
  pbVar1[0x6d] = 0;
  pbVar1[0x6e] = 0;
  pbVar1[0x6f] = 0;
  pbVar1[0x70] = 0;
  return pbVar1;
}

