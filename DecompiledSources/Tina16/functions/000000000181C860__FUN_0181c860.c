/* Ghidra address: 0181c860 */
/* Ghidra symbol: FUN_0181c860 */


void FUN_0181c860(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  code *pcVar3;
  
  plVar1 = *(longlong **)(*(longlong *)PTR_DAT_02005950 + 0xd8);
  *(longlong **)(param_1 + 0x6f8) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x128))(plVar1,0);
  }
  FUN_006e6840(*(undefined8 *)(param_1 + 0x6e8),0);
  FUN_006e6860(*(undefined8 *)(param_1 + 0x6e8),100);
  FUN_0181c960(param_1,0);
  pcVar3 = (code *)FUN_00411550(param_1,0xffc5);
  cVar2 = (*pcVar3)(param_1);
  if (cVar2 != '\0') {
    pcVar3 = (code *)FUN_00411550(param_1,0xffb1);
    (*pcVar3)(param_1,1);
  }
  return;
}

