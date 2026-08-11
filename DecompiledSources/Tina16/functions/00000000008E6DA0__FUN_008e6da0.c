/* Ghidra address: 008e6da0 */
/* Ghidra symbol: FUN_008e6da0 */


void FUN_008e6da0(longlong *param_1,int *param_2,int *param_3)

{
  if ((char)param_1[6] == '\0') {
    (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3);
  }
  else {
    *param_2 = *(int *)((longlong)param_1 + 0x34);
    *param_3 = (int)param_1[7];
    *(undefined1 *)(param_1 + 6) = 0;
  }
  if ((*param_2 == 0xd) && (*(char *)((longlong)param_1 + 0xc) == '\x01')) {
    (**(code **)(*param_1 + 0x18))(param_1,(longlong)param_1 + 0x34,param_1 + 7);
    if (*(int *)((longlong)param_1 + 0x34) == 10) {
      *param_3 = *param_3 + (int)param_1[7];
    }
    else {
      *(undefined1 *)(param_1 + 6) = 1;
    }
    *param_2 = 10;
  }
  return;
}

