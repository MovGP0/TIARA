/* Ghidra address: 01677970 */
/* Ghidra symbol: FUN_01677970 */


double * FUN_01677970(longlong param_1,double *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int *local_30;
  
  FUN_016ee260(*(undefined8 *)(param_1 + 0x30),&local_30,0x130,0);
  if (local_30[0xb] == 0) {
    iVar1 = FUN_01b05600(param_3,*(undefined1 *)((longlong)local_30 + 0x11));
    local_30[0xb] = iVar1;
  }
  if (local_30[10] == 0) {
    iVar1 = FUN_01b05600(param_3,(char)local_30[4]);
    local_30[10] = iVar1;
  }
  if (local_30[9] == 0) {
    iVar1 = FUN_01b05600(param_3,*(undefined1 *)((longlong)local_30 + 0xf));
    local_30[9] = iVar1;
  }
  dVar2 = (double)*local_30 *
          (*(double *)(*(longlong *)(param_4 + 0x118) + (longlong)local_30[9] * 8) -
          *(double *)(*(longlong *)(param_4 + 0x118) + (longlong)local_30[10] * 8));
  dVar3 = (double)*local_30 *
          (*(double *)(*(longlong *)(param_4 + 0x118) + (longlong)local_30[0xb] * 8) -
          *(double *)(*(longlong *)(param_4 + 0x118) + (longlong)local_30[10] * 8));
  dVar4 = dVar3 - dVar2;
  if (dVar2 < 0.0) {
    iVar1 = -1;
  }
  else {
    iVar1 = 1;
  }
  if (*(char *)(param_4 + 0xed7) == '\x01') {
    if (iVar1 == 1) {
      dVar4 = dVar3;
    }
    *param_2 = dVar4;
  }
  else {
    if (iVar1 != 1) {
      dVar3 = dVar4;
    }
    *param_2 = dVar3;
    if (iVar1 != 1) {
      dVar2 = -dVar2;
    }
    param_2[1] = dVar2;
  }
  return param_2;
}

