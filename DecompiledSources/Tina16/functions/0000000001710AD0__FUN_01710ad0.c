/* Ghidra address: 01710ad0 */
/* Ghidra symbol: FUN_01710ad0 */


bool FUN_01710ad0(longlong *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_004144d0(param_2);
  iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
  iVar1 = *param_3;
  if (iVar2 > iVar1) {
    (**(code **)(*param_1 + 0x18))(param_1,local_20,*param_3);
    FUN_00415dd0(param_2,local_20[0],0);
    *param_3 = *param_3 + 1;
  }
  FUN_00414480(local_20);
  return iVar2 <= iVar1;
}

