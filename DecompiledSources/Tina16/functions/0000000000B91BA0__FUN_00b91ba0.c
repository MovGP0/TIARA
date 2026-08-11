/* Ghidra address: 00b91ba0 */
/* Ghidra symbol: FUN_00b91ba0 */


undefined8 FUN_00b91ba0(undefined8 param_1,byte *param_2,undefined4 param_3)

{
  ulonglong uVar1;
  byte *pbVar2;
  undefined1 local_190 [168];
  undefined1 local_e8 [8];
  undefined1 local_e0 [103];
  char local_79;
  byte local_78 [80];
  
  uVar1 = (ulonglong)*param_2;
  if (0x4f < uVar1) {
    uVar1 = 0x50;
  }
  local_79 = (char)uVar1;
  pbVar2 = local_78;
  for (; param_2 = param_2 + 1, uVar1 != 0; uVar1 = uVar1 - 1) {
    *pbVar2 = *param_2;
    pbVar2 = pbVar2 + 1;
  }
  FUN_00b91ab0(local_e0,&local_79,param_3);
  FUN_00415020(&local_79,local_e0,0x50);
  local_e8[0] = 0;
  FUN_00b91b30(local_e0,local_e8,(char)param_3 - local_79);
  FUN_00414ff0(local_190,local_e0);
  FUN_00415110(local_190,&local_79,0xa0);
  FUN_00415020(param_1,local_190,0x50);
  return param_1;
}

