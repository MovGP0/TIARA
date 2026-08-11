/* Ghidra address: 00c2a2f0 */
/* Ghidra symbol: FUN_00c2a2f0 */


void FUN_00c2a2f0(longlong param_1,int param_2,undefined4 param_3,byte param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  if ((param_2 < 0) || ((int)(*(ushort *)(param_1 + 0x4d) - 1) < param_2)) {
    FUN_0041ddd0(local_20,PTR_PTR_02003328);
    FUN_00c1a320(local_20[0]);
  }
  lVar1 = FUN_00c2a3f0(param_1,param_3);
  if (*(byte *)(lVar1 + param_2) != param_4) {
    lVar2 = FUN_00c29d60(param_1);
    if (*(int *)(lVar2 + 0x10) <= (int)(uint)param_4) {
      FUN_0041ddd0(&local_28,PTR_PTR_020042b0);
      FUN_00c1a320(local_28);
    }
    FUN_00c28ba0(param_1);
    FUN_00c28bd0(param_1);
    *(byte *)(lVar1 + param_2) = param_4;
  }
  FUN_00414560(&local_28,2);
  return;
}

