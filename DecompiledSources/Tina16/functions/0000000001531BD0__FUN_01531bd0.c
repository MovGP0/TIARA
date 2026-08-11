/* Ghidra address: 01531bd0 */
/* Ghidra symbol: FUN_01531bd0 */


void FUN_01531bd0(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_0152fa50(param_1);
  *param_3 = uVar1;
  *(undefined1 *)(param_1 + 0x1bf8) = *param_3;
  return;
}

