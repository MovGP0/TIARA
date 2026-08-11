/* Ghidra address: 01c90980 */
/* Ghidra symbol: FUN_01c90980 */


void FUN_01c90980(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar1 = (**(code **)(*DAT_01fe8868 + 0x28))(DAT_01fe8868);
  if (param_2 < iVar1) {
    (**(code **)(*DAT_01fe8868 + 0x18))(DAT_01fe8868,local_20,param_2);
    FUN_01c681b0(param_1,local_20[0],0,0,0,0,1);
  }
  FUN_00414480(local_20);
  return;
}

