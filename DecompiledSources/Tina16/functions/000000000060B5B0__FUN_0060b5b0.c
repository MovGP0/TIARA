/* Ghidra address: 0060b5b0 */
/* Ghidra symbol: FUN_0060b5b0 */


void FUN_0060b5b0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 local_a0 [106];
  short local_36 [11];
  
  FUN_0060a440(param_1);
  if (param_3 == 0) {
    FUN_0040d200(local_a0,0x68,0);
    FUN_0060ab20(param_1,0,0,local_a0,0,0);
  }
  else {
    FUN_004b84c0(param_2,local_36,0xe);
    if (local_36[0] != 0x4d42) {
      FUN_005ffe50();
    }
    FUN_0060acc0(param_1,param_2,param_3 + -0xe,local_36);
  }
  return;
}

