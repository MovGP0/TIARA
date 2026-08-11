/* Ghidra address: 014bbd40 */
/* Ghidra symbol: FUN_014bbd40 */


void FUN_014bbd40(longlong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (param_1[0x27] != 0) {
    uVar1 = (ulonglong)*(uint *)(param_1[0x27] + -4);
  }
  (**(code **)(*param_1 + 0xe8))(param_1,CONCAT71((int7)(uVar1 >> 8),0 < (int)uVar1));
  return;
}

