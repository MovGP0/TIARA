/* Ghidra address: 0067fe20 */
/* Ghidra symbol: FUN_0067fe20 */


void FUN_0067fe20(longlong *param_1,char param_2)

{
  char cVar1;
  
  cVar1 = FUN_0067fd80(param_1);
  if (cVar1 != param_2) {
    if (param_2 == '\0') {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x40;
    }
    else {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffffffbf;
    }
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  *(undefined1 *)((longlong)param_1 + 0x33f) = 1;
  return;
}

