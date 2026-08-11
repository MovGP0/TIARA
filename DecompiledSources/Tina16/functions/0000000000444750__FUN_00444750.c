/* Ghidra address: 00444750 */
/* Ghidra symbol: FUN_00444750 */


undefined8 FUN_00444750(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_40 = *param_3;
  uStack_38 = param_3[1];
  uStack_30 = param_3[2];
  FUN_004144d0(param_2);
  if (*(longlong *)PTR_PTR_02005760 == 0) {
    FUN_004098e0(0x10);
  }
  else {
    (**(code **)PTR_PTR_02005760)(param_2,&local_40,0);
  }
  return param_2;
}

