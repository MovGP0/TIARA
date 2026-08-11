/* Ghidra address: 016fc1f0 */
/* Ghidra symbol: FUN_016fc1f0 */


undefined1
FUN_016fc1f0(byte *param_1,undefined8 param_2,undefined4 param_3,int *param_4,int *param_5)

{
  int iVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined1 local_221;
  undefined1 local_220 [256];
  undefined8 local_120;
  byte local_118 [256];
  
  local_120 = 0;
  lVar2 = (ulonglong)*param_1 + 1;
  pbVar3 = local_118;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_1;
    param_1 = param_1 + 1;
    pbVar3 = pbVar3 + 1;
  }
  local_221 = 0;
  FUN_004169a0(&local_120,local_118);
  iVar1 = FUN_004170c0(L"www.",local_120,1);
  *param_4 = iVar1;
  if (0 < *param_4) {
    iVar1 = *param_4;
    while ((iVar1 <= (int)(uint)local_118[0] &&
           (0x1f < (byte)(local_118[iVar1] - 8) ||
            (1 << (local_118[iVar1] - 8 & 0x1f) & 0x1000020U) == 0))) {
      iVar1 = iVar1 + 1;
    }
    *param_5 = iVar1 - *param_4;
    FUN_004151b0(local_220,local_118,*param_4,*param_5);
    FUN_00415020(param_2,local_220,param_3);
    local_221 = 1;
  }
  FUN_00414480(&local_120);
  return local_221;
}

