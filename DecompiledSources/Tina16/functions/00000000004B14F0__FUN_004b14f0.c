/* Ghidra address: 004b14f0 */
/* Ghidra symbol: FUN_004b14f0 */


void FUN_004b14f0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  longlong *local_20 [2];
  
  local_20[0] = (longlong *)0x0;
  uVar1 = FUN_0041b800(local_20);
  FUN_004b13b0(param_1,uVar1);
  if (local_20[0] != (longlong *)0x0) {
    (**(code **)(*local_20[0] + 0x20))(local_20[0],param_2,param_3);
  }
  FUN_0041b800(local_20);
  return;
}

