/* Ghidra address: 008b95b0 */
/* Ghidra symbol: FUN_008b95b0 */


void FUN_008b95b0(longlong param_1,longlong param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_008bb870(&PTR_FUN_008bc3d0,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    *(code **)(param_1 + 0x30) = FUN_008b9590;
  }
  FUN_0041b800(&local_10);
  return;
}

