/* Ghidra address: 0170b110 */
/* Ghidra symbol: FUN_0170b110 */


void FUN_0170b110(longlong param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  byte *pbVar2;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  byte local_128 [264];
  
  lVar1 = (ulonglong)*param_2 + 1;
  pbVar2 = local_128;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pbVar2 = *param_2;
    param_2 = param_2 + 1;
    pbVar2 = pbVar2 + 1;
  }
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  FUN_0170b0c0(param_1,local_128);
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x20))
            (*(longlong **)(param_1 + 0x48),local_res18,4);
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x20))
            (*(longlong **)(param_1 + 0x48),local_res20,4);
  return;
}

