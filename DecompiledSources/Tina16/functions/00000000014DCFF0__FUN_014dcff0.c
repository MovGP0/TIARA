/* Ghidra address: 014dcff0 */
/* Ghidra symbol: FUN_014dcff0 */


ushort FUN_014dcff0(longlong param_1,byte *param_2,ushort param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte *pbVar5;
  ushort local_33a;
  undefined1 local_338 [256];
  undefined8 local_238;
  undefined8 local_230;
  undefined1 local_228 [256];
  byte local_128 [264];
  
  local_238 = 0;
  local_230 = 0;
  lVar3 = (ulonglong)*param_2 + 1;
  pbVar5 = local_128;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar5 = *param_2;
    param_2 = param_2 + 1;
    pbVar5 = pbVar5 + 1;
  }
  uVar4 = 1;
  local_33a = 1;
  if (param_3 != 0) {
    do {
      FUN_004169a0(&local_230,param_1 + -0x11 + uVar4 * 0x11);
      iVar1 = FUN_004170c0(&DAT_014dd1fc,local_230,1);
      local_33a = (ushort)uVar4;
      if (iVar1 == 0) {
        iVar1 = FUN_00414f50(local_128,param_1 + -0x11 + uVar4 * 0x11,(ulonglong)local_128[0] + 1);
      }
      else {
        FUN_00414ff0(local_228,param_1 + -0x11 + uVar4 * 0x11);
        FUN_004169a0(&local_238,local_228);
        uVar2 = FUN_004170c0(&DAT_014dd1fc,local_238,1);
        FUN_004151b0(local_338,local_228,1,(uVar2 & 0xffff) - 1);
        iVar1 = FUN_00414f50(local_128,local_338,(ulonglong)local_128[0] + 1);
        if (iVar1 == 0) break;
        FUN_004151b0(local_338,local_228,(uVar2 & 0xffff) + 1,local_228[0]);
        iVar1 = FUN_00414f50(local_128,local_338,(ulonglong)local_128[0] + 1);
      }
      if (iVar1 == 0) break;
      local_33a = local_33a + 1;
      uVar4 = (ulonglong)local_33a;
    } while (local_33a <= param_3);
  }
  FUN_00414560(&local_238,2);
  return local_33a;
}

