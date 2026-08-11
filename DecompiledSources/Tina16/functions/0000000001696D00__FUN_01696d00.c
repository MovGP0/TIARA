/* Ghidra address: 01696d00 */
/* Ghidra symbol: FUN_01696d00 */


void FUN_01696d00(longlong param_1)

{
  char cVar1;
  
  FUN_01696dd0(param_1);
  if ((*(int *)(param_1 + 0x318) == 3) && (*(short *)(param_1 + 0x30) == 0x3b)) {
    FUN_01696e30(param_1);
  }
  if (((*(int *)(param_1 + 0x318) == 3) && (*(char *)(param_1 + 0x10) != '\0')) &&
     (*(short *)(param_1 + 0x30) == 0x2b)) {
    FUN_01696200(param_1,1);
    FUN_01696dd0(param_1);
  }
  cVar1 = FUN_00c535d0(*(undefined2 *)(param_1 + 0x30));
  if (cVar1 == '\0') {
    cVar1 = FUN_00c53600(*(undefined2 *)(param_1 + 0x30));
    if ((cVar1 == '\0') &&
       (((*(int *)(param_1 + 0x318) != 1 && (*(int *)(param_1 + 0x318) != 2)) ||
        (*(short *)(param_1 + 0x30) != 0x2e)))) {
      FUN_01696fc0(param_1);
    }
    else {
      FUN_01696780(param_1);
    }
  }
  else {
    FUN_01696500(param_1);
  }
  FUN_01697b10(param_1,param_1 + 0xa0);
  if (*(int *)(param_1 + 0xa0) != 0x10b) {
    *(undefined1 *)(param_1 + 0x338) = 1;
  }
  return;
}

