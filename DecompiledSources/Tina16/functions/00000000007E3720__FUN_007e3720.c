/* Ghidra address: 007e3720 */
/* Ghidra symbol: FUN_007e3720 */


void FUN_007e3720(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (param_1[0x14] == 0) {
    lVar1 = FUN_00608c80(&PTR_FUN_005f92e8,1);
    param_1[0x14] = lVar1;
  }
  (**(code **)(*(longlong *)param_1[0x14] + 0x10))((longlong *)param_1[0x14],param_2);
  (**(code **)(*param_1 + 0xa0))(param_1,1);
  return;
}

