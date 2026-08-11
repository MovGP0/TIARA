/* Ghidra address: 00b91b30 */
/* Ghidra symbol: FUN_00b91b30 */


undefined8 FUN_00b91b30(undefined8 param_1,byte *param_2,undefined4 param_3)

{
  undefined8 in_RAX;
  ulonglong uVar1;
  byte *pbVar2;
  undefined1 local_e0 [103];
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
  FUN_00b91a20(local_e0,&local_79,CONCAT62((int6)((ulonglong)in_RAX >> 0x10),0x20) & 0xffffffff,
               param_3);
  FUN_00415020(param_1,local_e0,0x50);
  return param_1;
}

