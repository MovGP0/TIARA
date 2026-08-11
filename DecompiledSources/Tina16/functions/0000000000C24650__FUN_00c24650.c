/* Ghidra address: 00c24650 */
/* Ghidra symbol: FUN_00c24650 */


void FUN_00c24650(longlong param_1,byte param_2)

{
  int iVar1;
  byte local_21;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  local_21 = param_2;
  if ((iVar1 <= (int)(uint)param_2) && (0 < iVar1)) {
    FUN_0041ddd0(local_20,PTR_PTR_02004e18);
    FUN_00c1a780(param_1,1,local_20[0]);
    local_21 = 0;
  }
  *(byte *)(param_1 + 0x15) = local_21;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),param_1);
  FUN_00414480(local_20);
  return;
}

