/* Ghidra address: 0068e220 */
/* Ghidra symbol: FUN_0068e220 */


undefined8 FUN_0068e220(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x528) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(param_1 + 0x528))(*(undefined8 *)(param_1 + 0x530),param_1,param_2);
  }
  return uVar1;
}

