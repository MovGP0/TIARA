/* Ghidra address: 0084d2e0 */
/* Ghidra symbol: FUN_0084d2e0 */


undefined8 FUN_0084d2e0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 local_20;
  int local_1c [3];
  
  FUN_0084cd50(param_1,param_2,local_1c,&local_20);
  if (local_1c[0] < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0084e390(*(undefined8 *)(param_1 + 0x38),local_1c[0],local_20);
  }
  return uVar1;
}

