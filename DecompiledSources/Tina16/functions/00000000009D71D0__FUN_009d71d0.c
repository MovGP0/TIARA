/* Ghidra address: 009d71d0 */
/* Ghidra symbol: FUN_009d71d0 */


void FUN_009d71d0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_0094bda0(*(undefined8 *)(param_1 + 0x18));
  if (cVar2 == '\0') {
    uVar1 = FUN_0044d490(&PTR_FUN_004334c0,1,L"NamedNodeMap must be namespace-aware.");
    FUN_004134c0(uVar1);
  }
  return;
}

