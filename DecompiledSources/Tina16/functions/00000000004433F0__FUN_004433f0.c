/* Ghidra address: 004433f0 */
/* Ghidra symbol: FUN_004433f0 */


undefined8 FUN_004433f0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_40 = *param_3;
  uStack_38 = param_3[1];
  uStack_30 = param_3[2];
  FUN_00414480(param_2);
  if ((short)local_40 != 1) {
    if (*(longlong *)PTR_PTR_02001828 == 0) {
      FUN_004098e0(0x10);
    }
    else {
      (**(code **)PTR_PTR_02001828)(param_2,&local_40);
    }
  }
  return param_2;
}

