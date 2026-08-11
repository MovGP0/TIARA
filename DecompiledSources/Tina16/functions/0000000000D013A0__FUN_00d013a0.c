/* Ghidra address: 00d013a0 */
/* Ghidra symbol: FUN_00d013a0 */


undefined8 FUN_00d013a0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  iVar1 = (**(code **)(*param_3 + 0x28))(param_3);
  if (iVar1 < 2) {
    (**(code **)(*param_3 + 0x38))(param_3,&local_30);
    FUN_0043ea00(param_2,local_30);
  }
  else {
    (**(code **)(*param_3 + 0x38))(param_3,&local_28);
    FUN_0043ea00(local_20,local_28);
    FUN_00877b30(param_2,local_20[0],&DAT_00d01488,&DAT_00d0149c);
  }
  FUN_00414560(&local_30,3);
  return param_2;
}

