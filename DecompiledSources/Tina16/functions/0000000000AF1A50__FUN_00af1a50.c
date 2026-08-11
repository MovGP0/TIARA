/* Ghidra address: 00af1a50 */
/* Ghidra symbol: FUN_00af1a50 */


int * FUN_00af1a50(longlong param_1,int *param_2,int param_3,int param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x738);
  iVar3 = FUN_0064d0b0(lVar1);
  iVar3 = *(int *)(lVar1 + 0x98) - iVar3;
  param_2[1] = iVar3;
  *param_2 = iVar3 / 2;
  param_2[2] = *(int *)(param_1 + 0x98) - param_2[1];
  param_2[3] = *(int *)(param_1 + 0x9c) - param_2[1];
  cVar2 = *(char *)(param_1 + 0x799);
  if (cVar2 == '\x01') {
    *(undefined1 *)((longlong)param_2 + 0x11) = 0;
    *(bool *)(param_2 + 4) = param_2[2] < param_3;
    if (param_2[2] < param_3) {
      param_2[3] = param_2[3] - *(int *)(param_1 + 0x760);
    }
  }
  else if (cVar2 == '\x02') {
    if (((*(ushort *)(param_1 + 0x79a) & 0x40) == 0) && (param_4 <= param_2[3])) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
    *(char *)((longlong)param_2 + 0x11) = cVar2;
    if (cVar2 != '\0') {
      param_2[2] = param_2[2] - *(int *)(param_1 + 0x760);
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  else if (cVar2 == '\x03') {
    if (((*(ushort *)(param_1 + 0x79a) & 0x40) == 0) && (param_4 <= param_2[3])) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
    *(char *)((longlong)param_2 + 0x11) = cVar2;
    if (cVar2 != '\0') {
      param_2[2] = param_2[2] - *(int *)(param_1 + 0x760);
    }
    *(bool *)(param_2 + 4) = param_2[2] < param_3;
    if (((param_2[2] < param_3) &&
        (param_2[3] = param_2[3] - *(int *)(param_1 + 0x760),
        *(char *)((longlong)param_2 + 0x11) == '\0')) && (param_2[3] < param_4)) {
      *(undefined1 *)((longlong)param_2 + 0x11) = 1;
      param_2[2] = param_2[2] - *(int *)(param_1 + 0x760);
    }
  }
  else {
    *(undefined1 *)(param_2 + 4) = 0;
    *(undefined1 *)((longlong)param_2 + 0x11) = 0;
  }
  return param_2;
}

