/* Ghidra address: 00b2e7b0 */
/* Ghidra symbol: FUN_00b2e7b0 */


void FUN_00b2e7b0(undefined8 param_1,char *param_2)

{
  int iVar1;
  
  if (*param_2 != '\x02') {
    return;
  }
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 < 8) {
    if (iVar1 == 7) {
      FUN_004095f0(*(undefined8 *)(param_2 + 0x1f));
      return;
    }
    if (iVar1 == 1) {
      FUN_004095f0(*(undefined8 *)(param_2 + 0x1f));
      return;
    }
    if ((1 < iVar1 - 2U) && (1 < iVar1 - 5U)) {
      return;
    }
  }
  else if ((3 < iVar1 - 8U) && (iVar1 != 0xd)) {
    return;
  }
  FUN_00418590(*(undefined8 *)(param_2 + 0x1f),&DAT_00b25e50);
  return;
}

