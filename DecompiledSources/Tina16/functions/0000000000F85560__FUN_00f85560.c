/* Ghidra address: 00f85560 */
/* Ghidra symbol: FUN_00f85560 */


void FUN_00f85560(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0xd68) = param_2;
  uVar1 = FUN_019a4600();
  FUN_019af580(uVar1,param_2);
  uVar1 = FUN_019a45d0();
  FUN_019af580(uVar1,param_2);
  return;
}

