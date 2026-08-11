/* Ghidra address: 01c92dd0 */
/* Ghidra symbol: FUN_01c92dd0 */


void FUN_01c92dd0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_01537800(0,*(undefined8 *)(param_1 + 0x2788),0,0,0);
  if (cVar1 == '\0') {
    uVar2 = FUN_01536240(PTR_DAT_02004010);
    FUN_013d6a00(*(undefined8 *)(*(longlong *)(param_1 + 0x2788) + 0xe00),uVar2,0,0,1);
    FUN_00414ad0(param_1 + 0x27e8,L"NetworkAnalysisMnuClick");
  }
  return;
}

