/* Ghidra address: 01086e90 */
/* Ghidra symbol: FUN_01086e90 */


void FUN_01086e90(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_01067560(&PTR_FUN_01065c50,1,param_1);
  (**(code **)(*plVar2 + 0x170))(plVar2,0);
  FUN_00c03380(*(undefined8 *)(param_1 + 0xa78),plVar2);
  cVar1 = FUN_01a90ed0();
  if (cVar1 != '\0') {
    FUN_01b25310(*(undefined8 *)(param_1 + 0xa78));
  }
  return;
}

