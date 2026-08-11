/* Ghidra address: 0067ff90 */
/* Ghidra symbol: FUN_0067ff90 */


void FUN_0067ff90(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  
  (**(code **)(*param_1 + -0x38))(param_1);
  plVar2 = (longlong *)FUN_00777cd0();
  cVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
  if ((cVar1 == '\0') || ((*(byte *)(param_1 + 0x59) & 2) == 0)) {
    cVar1 = FUN_0067fd80(param_1);
    if (cVar1 == '\0') {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x40;
    }
  }
  else {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffffffbf;
  }
  FUN_00680130(param_1);
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}

