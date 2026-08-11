/* Ghidra address: 0105a9e0 */
/* Ghidra symbol: FUN_0105a9e0 */


void FUN_0105a9e0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x68) = param_2;
  if ((*(int *)(param_1 + 0x68) == 1) || (*(int *)(param_1 + 0x68) == 3)) {
    FUN_00414ad0(param_1 + 0x80,L"arm-none-eabi-");
    FUN_00414ad0(param_1 + 0x60,L"arm-none-eabi-gcc.exe");
  }
  return;
}

