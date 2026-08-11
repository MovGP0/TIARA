/* Ghidra address: 005fcd80 */
/* Ghidra symbol: FUN_005fcd80 */


void FUN_005fcd80(undefined8 param_1,longlong param_2)

{
  undefined1 local_1b8 [264];
  undefined1 local_b0 [19];
  undefined1 local_9d [133];
  
  if (param_2 != 0) {
    FUN_005fc7d0(param_1,local_b0);
    FUN_0040d200(local_9d,0x7d,0);
    FUN_0041d990(local_1b8,param_2);
    FUN_00415020(local_9d,local_1b8,0x7c);
    FUN_005fc7f0(param_1,local_b0);
  }
  return;
}

