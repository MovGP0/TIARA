/* Ghidra address: 01877720 */
/* Ghidra symbol: FUN_01877720 */


void FUN_01877720(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if ((int)param_1[1] < iVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1);
  }
  FUN_01877200(param_1,param_2,local_res18);
  return;
}

