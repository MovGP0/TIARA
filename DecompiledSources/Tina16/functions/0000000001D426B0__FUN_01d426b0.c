/* Ghidra address: 01d426b0 */
/* Ghidra symbol: FUN_01d426b0 */


void FUN_01d426b0(undefined4 param_1,byte *param_2)

{
  ulonglong uVar1;
  byte *pbVar2;
  undefined1 local_79;
  byte local_78 [88];
  
  uVar1 = (ulonglong)*param_2;
  if (0x4f < uVar1) {
    uVar1 = 0x50;
  }
  local_79 = (undefined1)uVar1;
  pbVar2 = local_78;
  for (; param_2 = param_2 + 1, uVar1 != 0; uVar1 = uVar1 - 1) {
    *pbVar2 = *param_2;
    pbVar2 = pbVar2 + 1;
  }
  FUN_00415020(&DAT_03567b54,&local_79,0x50);
  FUN_00414140(param_1);
  return;
}

