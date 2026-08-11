/* Ghidra address: 010c2250 */
/* Ghidra symbol: FUN_010c2250 */


undefined8 FUN_010c2250(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  ushort uVar2;
  bool bVar3;
  
  uVar2 = 0;
  do {
    uVar2 = uVar2 + 1;
    bVar3 = *(short *)((longlong)&UNWIND_INFO_01f1252c + (ulonglong)uVar2 * 2 + 2) == param_2;
    if (bVar3) break;
  } while (uVar2 < 0x38);
  if (bVar3) {
    uVar1 = FUN_00b89270();
    FUN_00b8e520(uVar1,param_1,uVar2 + 0x37f);
  }
  else if (param_2 == 0x308) {
    FUN_00414ad0(param_1,L"Name is duplicated");
  }
  else if (param_2 == 0x309) {
    FUN_00414ad0(param_1,L"Invalid use of interval subdiv");
  }
  return param_1;
}

