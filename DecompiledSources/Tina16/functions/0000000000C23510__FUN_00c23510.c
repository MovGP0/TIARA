/* Ghidra address: 00c23510 */
/* Ghidra symbol: FUN_00c23510 */


undefined4 FUN_00c23510(longlong *param_1,int param_2)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  int local_48;
  undefined2 local_40;
  undefined1 uStack_3e;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  if ((param_2 < 0) || (local_48 = param_2, (int)param_1[2] <= param_2)) {
    FUN_0041ddd0(local_30,PTR_PTR_02004e18);
    (**(code **)(*param_1 + 0x18))(param_1,1,local_30[0]);
    if ((int)param_1[2] == 0) {
      FUN_0041ddd0(&local_38,PTR_PTR_02003748);
      FUN_00c1a320(local_38);
    }
    local_48 = 0;
  }
  puVar1 = (undefined2 *)(param_1[1] + (longlong)local_48 * 3);
  local_40 = *puVar1;
  uStack_3e = *(undefined1 *)(puVar1 + 1);
  uVar2 = FUN_00c22e00(*param_1,&local_40);
  FUN_00414560(&local_38,2);
  return uVar2;
}

