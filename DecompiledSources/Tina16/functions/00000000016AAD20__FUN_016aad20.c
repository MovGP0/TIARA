/* Ghidra address: 016aad20 */
/* Ghidra symbol: FUN_016aad20 */


undefined8 FUN_016aad20(undefined8 param_1,double *param_2)

{
  undefined1 local_28 [24];
  
  if (*param_2 <= 80.0) {
    if (-80.0 < *param_2 || *param_2 == -80.0) {
      FUN_00c44870(param_2,param_1);
    }
    else {
      FUN_00c44460(local_28,0xc054000000000000,0);
      FUN_00c44870(local_28,param_1);
    }
  }
  else {
    FUN_00c44460(local_28,0x4054000000000000,0);
    FUN_00c44870(local_28,param_1);
  }
  return param_1;
}

