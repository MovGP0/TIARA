/* Ghidra address: 00b7db20 */
/* Ghidra symbol: FUN_00b7db20 */


void FUN_00b7db20(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  byte *pbVar3;
  byte local_a8 [128];
  
  FUN_0040d200(local_a8,0x80,0);
  uVar2 = (param_3 & 0xffffffff) / 8;
  FUN_00409a70(param_2,local_a8,uVar2);
  if ((uint)uVar2 < 0x80) {
    pbVar3 = local_a8 + uVar2;
    do {
      iVar1 = (int)uVar2;
      *pbVar3 = (&DAT_01e90014)
                [(uint)local_a8[(uint)(iVar1 - (int)((param_3 & 0xffffffff) / 8))] +
                 (uint)local_a8[iVar1 - 1] & 0xff];
      uVar2 = (ulonglong)(iVar1 + 1U);
      pbVar3 = pbVar3 + 1;
    } while (iVar1 + 1U != 0x80);
  }
  local_a8[0] = (&DAT_01e90014)[local_a8[0]];
  FUN_00409a70(local_a8,param_1 + 0x98,0x80);
  return;
}

