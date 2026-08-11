/* Ghidra address: 0146fab0 */
/* Ghidra symbol: FUN_0146fab0 */


void FUN_0146fab0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_0111c5c0(&PTR_FUN_0111ab88,1,param_1);
  (**(code **)(*plVar2 + 0x170))(plVar2,0);
  FUN_00c03380(*(undefined8 *)(param_1 + 0x738),plVar2);
  cVar1 = FUN_01a90ed0();
  if (cVar1 != '\0') {
    FUN_01b25310(*(undefined8 *)(param_1 + 0x738));
  }
  return;
}

