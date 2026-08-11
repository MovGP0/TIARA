/* Ghidra address: 00803830 */
/* Ghidra symbol: FUN_00803830 */


void FUN_00803830(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x2c0))(param_1);
  *(ulonglong *)(param_2 + 0x18) = uVar1 & 0xff;
  return;
}

