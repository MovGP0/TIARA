/* Ghidra address: 00d24000 */
/* Ghidra symbol: FUN_00d24000 */


uint FUN_00d24000(undefined8 param_1,uint param_2,undefined4 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  ushort uVar7;
  ulonglong uVar8;
  
  if (1 < (ushort)param_2) {
    uVar6 = CONCAT22((short)((uint)param_3 >> 0x10),1);
    uVar8 = 0x10001 / (ulonglong)(param_2 & 0xffff);
    uVar7 = (ushort)uVar8;
    uVar2 = 0x10001 % (ulonglong)(param_2 & 0xffff);
    sVar5 = (short)uVar2;
    while (sVar5 != 1) {
      uVar4 = param_2 & 0xffff;
      uVar3 = (ulonglong)uVar4 % uVar2;
      param_2 = (uint)uVar3;
      sVar5 = (short)uVar6 + (short)uVar8 * (short)(uVar4 / uVar2);
      uVar6 = CONCAT22((short)(uVar6 >> 0x10),sVar5);
      if ((short)uVar3 == 1) {
        return uVar6;
      }
      uVar1 = uVar2 / uVar3;
      uVar2 = uVar2 % uVar3;
      uVar7 = (short)uVar8 + sVar5 * (short)uVar1;
      uVar8 = (ulonglong)uVar7;
      sVar5 = (short)uVar2;
    }
    param_2 = (uint)(ushort)(1 - uVar7);
  }
  return param_2;
}

