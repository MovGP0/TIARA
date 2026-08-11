/* Ghidra address: 009d8150 */
/* Ghidra symbol: FUN_009d8150 */


void FUN_009d8150(void)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)FUN_009d81f0();
  uVar3 = (**(code **)(*plVar2 + 0x100))(plVar2);
  cVar1 = FUN_0094bda0(uVar3);
  if (cVar1 == '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Element must be namespace-aware.");
    FUN_004134c0(uVar3);
  }
  return;
}

