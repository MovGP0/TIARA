/* Ghidra address: 012adcd0 */
/* Ghidra symbol: FUN_012adcd0 */


void FUN_012adcd0(longlong param_1,undefined1 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0x128))(*(longlong **)(param_1 + 0xdb8));
  *param_3 = uVar1;
  *param_4 = *(undefined8 *)(*(longlong *)(param_1 + 0xdb8) + 0x78);
  *param_2 = *(undefined1 *)(param_1 + 0xdd0);
  return;
}

