/* Ghidra address: 01417f80 */
/* Ghidra symbol: FUN_01417f80 */


void FUN_01417f80(longlong param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_00414ad0(*(longlong *)(param_1 + 0x6e8) + 0xe0,L"MCU ASM File Name (*.asm;*.s)|*.asm;*.s");
  }
  else if (param_2 == 1) {
    FUN_00414ad0(*(longlong *)(param_1 + 0x6e8) + 0xe0,L"HEX File Name|*.hex|S19 File Name|*.s19");
    FUN_00724380(*(undefined8 *)(param_1 + 0x6e8),L"*.hex");
  }
  else if (param_2 == 2) {
    FUN_00414ad0(*(longlong *)(param_1 + 0x6e8) + 0xe0,L"MCU LST File Name|*.lst");
    FUN_00724380(*(undefined8 *)(param_1 + 0x6e8),L"*.lst");
  }
  return;
}

