/* Ghidra address: 00b91a20 */
/* Ghidra symbol: FUN_00b91a20 */


undefined8 FUN_00b91a20(undefined8 param_1,byte *param_2,undefined4 param_3,byte param_4)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  byte local_89 [89];
  
  uVar2 = (ulonglong)*param_2;
  if (0x4f < uVar2) {
    uVar2 = 0x50;
  }
  local_89[0] = (byte)uVar2;
  pbVar4 = local_89;
  for (uVar3 = uVar2; pbVar4 = pbVar4 + 1, param_2 = param_2 + 1, uVar3 != 0; uVar3 = uVar3 - 1) {
    *pbVar4 = *param_2;
  }
  uVar1 = FUN_00b905f0(uVar2,param_4);
  local_89[0] = param_4;
  FUN_0040d200(local_89 + (int)((uVar1 & 0xff) + 1),(longlong)(int)((uint)param_4 - (uVar1 & 0xff)),
               param_3);
  FUN_00415020(param_1,local_89,0x50);
  return param_1;
}

