/* Ghidra address: 0065ef40 */
/* Ghidra symbol: FUN_0065ef40 */


void FUN_0065ef40(longlong *param_1,longlong param_2,int *param_3)

{
  char cVar1;
  undefined1 local_38 [8];
  undefined8 local_30;
  
  if ((*(ushort *)((longlong)param_1 + 0x34) & 2) == 0) {
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 == '\0') {
      *param_3 = (int)param_1[0x13];
      param_3[1] = *(int *)((longlong)param_1 + 0x9c);
      *(undefined1 *)(param_2 + 0x2e4) = 1;
    }
    else {
      (**(code **)(*param_1 + 0xe0))(param_1,local_38);
      *(undefined8 *)param_3 = local_30;
      *(undefined1 *)(param_2 + 0x2e4) = 0;
    }
  }
  else if ((*(ushort *)(param_2 + 0x34) & 0x10) == 0) {
    *(undefined8 *)param_3 = *(undefined8 *)((longlong)param_1 + 0x47c);
    *(undefined1 *)(param_2 + 0x2e4) = 0;
  }
  *param_3 = *param_3 - (*(int *)(param_1[0x65] + 0x10) + *(int *)(param_1[0x65] + 0x18));
  param_3[1] = param_3[1] - (*(int *)(param_1[0x65] + 0x14) + *(int *)(param_1[0x65] + 0x1c));
  return;
}

