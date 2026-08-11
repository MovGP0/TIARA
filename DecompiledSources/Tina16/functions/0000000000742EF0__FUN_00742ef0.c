/* Ghidra address: 00742ef0 */
/* Ghidra symbol: FUN_00742ef0 */


void FUN_00742ef0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x88) = *param_2;
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  FUN_00742de0();
  return;
}

