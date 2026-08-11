/* Ghidra address: 00bf3d50 */
/* Ghidra symbol: FUN_00bf3d50 */


void FUN_00bf3d50(longlong *param_1,undefined2 *param_2,undefined2 param_3)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  short local_24;
  undefined2 local_22;
  longlong local_20 [2];
  
  local_30 = auStack_58;
  FUN_00659710(param_1,param_2,param_3);
  FUN_00bd9a50(param_1[0xcb],param_1,param_2,param_3);
  local_20[0] = 0;
  local_22 = 0;
  local_24 = FUN_00c03980(param_1,*param_2,param_3,local_20);
  if (local_24 == 0) {
    *(ushort *)(param_1 + 199) = *(ushort *)(param_1 + 199) & 0xfff7;
  }
  else {
    *param_2 = 0;
    *(ushort *)(param_1 + 199) = *(ushort *)(param_1 + 199) | 8;
    (**(code **)(*param_1 + 0x328))(param_1,local_24,local_22,local_20[0]);
  }
  if (local_20[0] != 0) {
    FUN_004095f0(local_20[0]);
  }
  return;
}

