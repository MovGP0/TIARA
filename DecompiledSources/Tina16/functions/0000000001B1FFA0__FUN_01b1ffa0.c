/* Ghidra address: 01b1ffa0 */
/* Ghidra symbol: FUN_01b1ffa0 */


bool FUN_01b1ffa0(void)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int local_1c [3];
  
  bVar4 = false;
  uVar2 = FUN_00427be0(L"kernel32");
  pcVar3 = (code *)FUN_00427c10(uVar2,L"IsWow64Process");
  if (pcVar3 != (code *)0x0) {
    uVar2 = thunk_FUN_04149b47();
    iVar1 = (*pcVar3)(uVar2,local_1c);
    if (iVar1 != 0) {
      bVar4 = local_1c[0] != 0;
    }
  }
  return bVar4;
}

