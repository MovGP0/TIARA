/* Ghidra address: 00daed90 */
/* Ghidra symbol: FUN_00daed90 */


void FUN_00daed90(longlong *param_1,byte *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *pbVar3;
  byte local_128 [264];
  
  lVar2 = (ulonglong)*param_2 + 1;
  pbVar3 = local_128;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_2;
    param_2 = param_2 + 1;
    pbVar3 = pbVar3 + 1;
  }
  uVar1 = FUN_00daec50(&DAT_00dadf30,1,1,local_128);
  (**(code **)(*param_1 + 0x50))(param_1,uVar1);
  return;
}

