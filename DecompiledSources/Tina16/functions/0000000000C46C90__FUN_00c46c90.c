/* Ghidra address: 00c46c90 */
/* Ghidra symbol: FUN_00c46c90 */


void FUN_00c46c90(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    uVar1 = FUN_0044d490(&PTR_FUN_00436b60,1,L"TBufferMemoryStream.Write");
    FUN_004134c0(uVar1);
  }
  return;
}

