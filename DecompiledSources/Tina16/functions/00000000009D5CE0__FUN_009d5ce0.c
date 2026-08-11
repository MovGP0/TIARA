/* Ghidra address: 009d5ce0 */
/* Ghidra symbol: FUN_009d5ce0 */


undefined4 FUN_009d5ce0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = 0;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x170))(*(longlong **)(param_1 + 0x18));
  FUN_009d3370(param_2,uVar1,*(undefined8 *)(param_1 + 0x20),0);
  return 0;
}

