/* Ghidra address: 00c23600 */
/* Ghidra symbol: FUN_00c23600 */


void FUN_00c23600(longlong *param_1,int param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  undefined2 local_38;
  undefined1 uStack_36;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  if ((param_2 < 0) || ((int)param_1[2] <= param_2)) {
    FUN_0041ddd0(local_30,PTR_PTR_02004e18);
    FUN_00c1a320(local_30[0]);
  }
  FUN_00c22dd0(*param_1,&local_38,param_3);
  puVar1 = (undefined2 *)(param_1[1] + (longlong)param_2 * 3);
  *puVar1 = local_38;
  *(undefined1 *)(puVar1 + 1) = uStack_36;
  (**(code **)(*param_1 + 0x38))(param_1);
  FUN_00414480(local_30);
  return;
}

