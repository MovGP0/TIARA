/* Ghidra address: 00b9af60 */
/* Ghidra symbol: FUN_00b9af60 */


longlong FUN_00b9af60(undefined8 param_1,longlong *param_2,int param_3,longlong param_4)

{
  int iVar1;
  longlong local_30;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_30 = param_4;
  if (param_4 == 0) {
    local_30 = FUN_00458d50();
  }
  iVar1 = FUN_004b6da0(param_1);
  param_3 = param_3 - iVar1;
  if (1 < param_3) {
    if (4 < param_3) {
      param_3 = 4;
    }
    FUN_00419260(local_20,&DAT_00406578,1,(longlong)param_3);
    FUN_004b84c0(param_1,local_20[0],(longlong)param_3);
    local_28 = 0;
    iVar1 = FUN_00b97c40(&PTR_FUN_0043a338,local_20[0],&local_28,local_30);
    *param_2 = *param_2 + (longlong)iVar1;
    if (local_28 != 0) {
      local_30 = local_28;
    }
    if ((local_30 == 0) && (local_30 = param_4, param_4 == 0)) {
      local_30 = FUN_00458d50();
    }
    FUN_004b6dc0(param_1,*param_2);
  }
  FUN_00419430(local_20,&DAT_00406578);
  return local_30;
}

