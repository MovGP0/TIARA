/* Ghidra address: 01cb1590 */
/* Ghidra symbol: FUN_01cb1590 */


void FUN_01cb1590(longlong *param_1,undefined8 param_2,char *param_3)

{
  undefined8 *puVar1;
  
  if ((*(int *)((longlong)param_1 + 0xc) == 0) ||
     (*(char *)(param_1[3] + 8 + (longlong)(*(int *)((longlong)param_1 + 0xc) + -1) * 9) != *param_3
     )) {
    if ((*(int *)((longlong)param_1 + 0xc) == (int)param_1[2]) && ((char)param_1[1] == '\0')) {
      (**(code **)(*param_1 + 0x58))(param_1);
    }
    if ((char)param_1[1] == '\0') {
      puVar1 = (undefined8 *)(param_1[3] + (longlong)*(int *)((longlong)param_1 + 0xc) * 9);
      *puVar1 = param_2;
      *(char *)(puVar1 + 1) = *param_3;
      *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
    }
    else {
      *(undefined1 *)(param_1[3] + 8 + (longlong)(*(int *)((longlong)param_1 + 0xc) + -1) * 9) = 4;
    }
  }
  return;
}

