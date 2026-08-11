/* Ghidra address: 004b4f10 */
/* Ghidra symbol: FUN_004b4f10 */


void FUN_004b4f10(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  iVar1 = (**(code **)(*param_1 + 0xb8))(param_1,param_2);
  if (param_3 == 0) {
    if (-1 < iVar1) {
      (**(code **)(*param_1 + 0x98))(param_1,iVar1);
    }
  }
  else {
    if (iVar1 < 0) {
      iVar1 = (**(code **)(*param_1 + 0x78))(param_1,0);
    }
    FUN_00416780(&local_28,(short)param_1[6]);
    FUN_00416cd0(local_20,3,param_2,local_28,param_3);
    (**(code **)(*param_1 + 0x40))(param_1,iVar1,local_20[0]);
  }
  FUN_00414560(&local_28,2);
  return;
}

