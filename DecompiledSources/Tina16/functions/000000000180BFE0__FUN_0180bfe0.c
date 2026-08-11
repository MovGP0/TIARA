/* Ghidra address: 0180bfe0 */
/* Ghidra symbol: FUN_0180bfe0 */


undefined8 FUN_0180bfe0(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar1 = FUN_0180bfb0();
  FUN_0043f750(local_20,param_2);
  FUN_01809b60(uVar1,param_1,local_20[0]);
  FUN_00414480(local_20);
  return param_1;
}

