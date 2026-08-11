/* Ghidra address: 0068f560 */
/* Ghidra symbol: FUN_0068f560 */


void FUN_0068f560(longlong *param_1,char param_2)

{
  char cVar1;
  
  cVar1 = FUN_0068f5c0(param_1);
  if (cVar1 != param_2) {
    if (param_2 == '\0') {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x40;
    }
    else {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffffffbf;
    }
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

