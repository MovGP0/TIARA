/* Ghidra address: 009d7310 */
/* Ghidra symbol: FUN_009d7310 */


undefined4 FUN_009d7310(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)**(undefined8 **)(param_1 + 0x18))(*(undefined8 **)(param_1 + 0x18));
  *param_2 = uVar1;
  return 0;
}

