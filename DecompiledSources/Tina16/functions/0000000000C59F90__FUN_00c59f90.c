/* Ghidra address: 00c59f90 */
/* Ghidra symbol: FUN_00c59f90 */


undefined8 FUN_00c59f90(longlong param_1,undefined4 param_2)

{
  byte *pbVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_58 = 0x3ff280000000000;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  pbVar1 = (byte *)((longlong)&local_58 + ((longlong)(ulonglong)(byte)PTR_DAT_02004830[0x17a] >> 3))
  ;
  *pbVar1 = *pbVar1 | '\x01' << ((ulonglong)(byte)PTR_DAT_02004830[0x17a] & 7);
  local_38 = local_58;
  uStack_30 = uStack_50;
  uStack_28 = uStack_48;
  uStack_20 = uStack_40;
  uVar2 = (ushort)param_2;
  if (uVar2 < 0x100) {
    bVar5 = (*(byte *)((longlong)&local_38 + ((longlong)(ulonglong)uVar2 >> 3)) >>
             ((ulonglong)uVar2 & 7) & 1) != 0;
    uVar3 = (ulonglong)CONCAT11((char)((uint)param_2 >> 8),bVar5);
  }
  else {
    uVar3 = 0;
    bVar5 = false;
  }
  if ((bVar5) || ((uVar2 < 0x20 && (uVar2 != 0xd)))) {
    uVar4 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  else {
    uVar4 = 0;
  }
  if ((((byte)uVar4 & *(char *)(param_1 + 0x4f0) == '\0') != 0) &&
     (((0x1f < uVar2 || (uVar2 == 8)) || (uVar2 == 0x2e)))) {
    uVar4 = 0;
  }
  return uVar4;
}

