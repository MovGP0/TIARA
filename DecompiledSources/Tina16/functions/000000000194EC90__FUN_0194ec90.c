/* Ghidra address: 0194ec90 */
/* Ghidra symbol: FUN_0194ec90 */


undefined8 FUN_0194ec90(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0x270) != 0) {
    uVar1 = (**(code **)(param_1 + 0x270))(*(undefined8 *)(param_1 + 0x278),param_1,param_2);
  }
  return uVar1;
}

