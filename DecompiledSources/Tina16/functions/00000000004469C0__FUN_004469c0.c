/* Ghidra address: 004469c0 */
/* Ghidra symbol: FUN_004469c0 */


int * FUN_004469c0(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    FUN_00446330(*(undefined8 *)(param_1 + 0x60),
                 *(undefined2 *)(*(longlong *)(param_1 + 0x60) + 0x72));
    FUN_00446330(*(undefined8 *)(param_1 + 0x60),param_2);
    piVar1 = (int *)(param_1 + 0x3c);
    *piVar1 = *piVar1 + -1;
  }
  else {
    FUN_00446330(*(undefined8 *)(param_1 + 0x60),param_2);
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
    piVar1 = *(int **)(param_1 + 0x60);
    if (((*(char *)((longlong)piVar1 + 0x9a) != '\0') && (1 < *(int *)(param_1 + 0x3c))) &&
       (piVar1 = (int *)((longlong)*(int *)(param_1 + 0x3c) / 3 & 0xffffffff),
       *(int *)(param_1 + 0x3c) % 3 == 0)) {
      piVar1 = (int *)FUN_00446330(*(undefined8 *)(param_1 + 0x60),
                                   *(undefined2 *)(*(longlong *)(param_1 + 0x60) + 0x70));
    }
  }
  return piVar1;
}

