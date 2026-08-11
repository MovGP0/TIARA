/* Ghidra address: 0070f5a0 */
/* Ghidra symbol: FUN_0070f5a0 */


void FUN_0070f5a0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  plVar3 = (longlong *)FUN_00777cd0();
  cVar1 = (**(code **)(*plVar3 + 0x90))(plVar3);
  if (cVar1 != '\0') {
    uVar4 = FUN_00777cd0();
    uVar2 = FUN_00778bd0(uVar4,0xff00000f,0);
    *(ulonglong *)(param_2 + 0x10) = (ulonglong)uVar2;
  }
  return;
}

