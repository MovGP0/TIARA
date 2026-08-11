/* Ghidra address: 006559c0 */
/* Ghidra symbol: FUN_006559c0 */


undefined8 FUN_006559c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x428) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(param_1 + 0x428))(*(undefined8 *)(param_1 + 0x430),param_1,param_2,param_3)
    ;
  }
  return uVar1;
}

