/* Ghidra address: 0149ead0 */
/* Ghidra symbol: FUN_0149ead0 */


undefined2 FUN_0149ead0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined2 local_22;
  longlong local_20 [2];
  
  local_20[0] = 0;
  local_22 = FUN_01cf0da0(param_1,param_2,param_3,param_4);
  uVar1 = FUN_01a97e00(param_2);
  FUN_01a5e7d0(*(undefined8 *)(param_1 + 0x28),local_20,uVar1,param_3,param_4);
  if (local_20[0] != 0) {
    local_22 = 0xffeb;
  }
  FUN_01a97ea0(param_2,uVar1);
  FUN_00414480(local_20);
  return local_22;
}

