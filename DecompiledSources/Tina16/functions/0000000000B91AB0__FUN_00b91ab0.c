/* Ghidra address: 00b91ab0 */
/* Ghidra symbol: FUN_00b91ab0 */


undefined8 FUN_00b91ab0(undefined8 param_1,byte *param_2,byte param_3)

{
  ulonglong uVar1;
  byte *pbVar2;
  byte local_79;
  byte local_78 [88];
  
  uVar1 = (ulonglong)*param_2;
  if (0x4f < uVar1) {
    uVar1 = 0x50;
  }
  local_79 = (byte)uVar1;
  pbVar2 = local_78;
  for (; param_2 = param_2 + 1, uVar1 != 0; uVar1 = uVar1 - 1) {
    *pbVar2 = *param_2;
    pbVar2 = pbVar2 + 1;
  }
  if (param_3 < local_79) {
    FUN_00415260(&local_79,0x50,param_3 + 1,(uint)local_79 - (uint)param_3);
  }
  FUN_00415020(param_1,&local_79,0x50);
  return param_1;
}

