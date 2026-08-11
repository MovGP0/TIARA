/* Ghidra address: 0060c370 */
/* Ghidra symbol: FUN_0060c370 */


undefined8 FUN_0060c370(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_0060a460(param_1);
  FUN_006090e0(param_1,param_1);
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x20);
  *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x20) = 0;
  return uVar1;
}

