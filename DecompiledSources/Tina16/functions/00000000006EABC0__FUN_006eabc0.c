/* Ghidra address: 006eabc0 */
/* Ghidra symbol: FUN_006eabc0 */


longlong * FUN_006eabc0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int local_34 [7];
  
  iVar1 = (**(code **)(*param_1 + 0x270))(param_1);
  FUN_004169f0(param_2,iVar1 + 1);
  local_34[0] = 0;
  if (*param_2 != 0) {
    local_34[0] = *(int *)(*param_2 + -4);
  }
  local_34[0] = local_34[0] * 2;
  local_34[1] = 2;
  local_34[2] = 0x4b0;
  local_34[3] = 0;
  local_34[4] = 0;
  local_34[5] = 0;
  local_34[6] = 0;
  uVar2 = FUN_0065b870(param_1);
  FUN_0069eba0(uVar2,0x45e,local_34,param_2);
  return param_2;
}

