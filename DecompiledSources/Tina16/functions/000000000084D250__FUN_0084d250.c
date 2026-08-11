/* Ghidra address: 0084d250 */
/* Ghidra symbol: FUN_0084d250 */


undefined8 FUN_0084d250(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 local_20;
  int local_1c;
  
  FUN_0084cd50(param_1,param_3,&local_1c,&local_20);
  if (local_1c < 0) {
    FUN_00414480(param_2);
  }
  else {
    FUN_0084e320(*(undefined8 *)(param_1 + 0x38),param_2,local_1c,local_20);
  }
  return param_2;
}

