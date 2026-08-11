/* Ghidra address: 015ca7b0 */
/* Ghidra symbol: FUN_015ca7b0 */


void FUN_015ca7b0(longlong param_1,undefined1 param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x84) != '\0') {
    uVar1 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Cannot set spanning mode on open archive");
    FUN_004134c0(uVar1);
  }
  *(undefined1 *)(param_1 + 0x103) = param_2;
  return;
}

