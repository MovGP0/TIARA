/* Ghidra address: 00dafac0 */
/* Ghidra symbol: FUN_00dafac0 */


void FUN_00dafac0(undefined8 param_1,longlong param_2,double *param_3,double *param_4,double param_5
                 ,int param_6,longlong param_7,char param_8)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  
  if (param_8 != '\0') {
    if (param_7 == 0) {
      param_6 = FUN_01b057d0(param_1,(undefined2)param_6);
    }
    else {
      param_6 = FUN_01b057d0(param_7,(undefined2)param_6);
    }
  }
  iVar2 = param_6 + 1;
  if (*(char *)(param_2 + 0x886) == '\x01') {
    if (*(char *)(param_2 + 0xb) == '\x01') {
      dVar5 = (double)FUN_01b08a00(param_2,0);
      dVar4 = (double)FUN_01b08a00(param_2,1);
      *(double *)(*(longlong *)(param_2 + 0x1b8) + (longlong)iVar2 * 8) =
           dVar5 * *(double *)(*(longlong *)(param_2 + 0x1b8) + (longlong)param_6 * 8) +
           dVar4 * *(double *)(*(longlong *)(param_2 + 0x1c0) + (longlong)param_6 * 8);
    }
    else if (*(char *)(param_2 + 0xb) == '\x02') {
      lVar3 = *(longlong *)(param_2 + 0x1b8);
      dVar5 = (double)FUN_01b08a00(param_2,1);
      dVar4 = (double)FUN_01b08a00(param_2,0);
      *(double *)(lVar3 + (longlong)iVar2 * 8) =
           -*(double *)(*(longlong *)(param_2 + 0x1c0) + (longlong)iVar2 * 8) * dVar5 +
           dVar4 * (*(double *)(lVar3 + (longlong)param_6 * 8) -
                   *(double *)(*(longlong *)(param_2 + 0x1c0) + (longlong)param_6 * 8));
    }
  }
  else if (*(char *)(param_2 + 0x886) == '\x02') {
    lVar3 = (longlong)iVar2;
    *(undefined8 *)(*(longlong *)(param_2 + 0x1b8) + lVar3 * 8) = 0;
    if (5 < *(byte *)(param_2 + 0xb)) {
      dVar5 = (double)FUN_01b08a00(param_2,6);
      *(double *)(*(longlong *)(param_2 + 0x1b8) + lVar3 * 8) =
           *(double *)(*(longlong *)(param_2 + 0x1b8) + (longlong)iVar2 * 8) +
           dVar5 * *(double *)(*(longlong *)(param_2 + 0x1e8) + (longlong)param_6 * 8);
    }
    if (4 < *(byte *)(param_2 + 0xb)) {
      dVar5 = (double)FUN_01b08a00(param_2,5);
      *(double *)(*(longlong *)(param_2 + 0x1b8) + lVar3 * 8) =
           *(double *)(*(longlong *)(param_2 + 0x1b8) + lVar3 * 8) +
           dVar5 * *(double *)(*(longlong *)(param_2 + 0x1e0) + (longlong)param_6 * 8);
    }
    if (3 < *(byte *)(param_2 + 0xb)) {
      dVar5 = (double)FUN_01b08a00(param_2,4);
      *(double *)(*(longlong *)(param_2 + 0x1b8) + lVar3 * 8) =
           *(double *)(*(longlong *)(param_2 + 0x1b8) + lVar3 * 8) +
           dVar5 * *(double *)(*(longlong *)(param_2 + 0x1d8) + (longlong)param_6 * 8);
    }
    if (2 < *(byte *)(param_2 + 0xb)) {
      dVar5 = (double)FUN_01b08a00(param_2,3);
      *(double *)(*(longlong *)(param_2 + 0x1b8) + lVar3 * 8) =
           *(double *)(*(longlong *)(param_2 + 0x1b8) + lVar3 * 8) +
           dVar5 * *(double *)(*(longlong *)(param_2 + 0x1d0) + (longlong)param_6 * 8);
    }
    if (1 < *(byte *)(param_2 + 0xb)) {
      dVar5 = (double)FUN_01b08a00(param_2,2);
      *(double *)(*(longlong *)(param_2 + 0x1b8) + lVar3 * 8) =
           *(double *)(*(longlong *)(param_2 + 0x1b8) + lVar3 * 8) +
           dVar5 * *(double *)(*(longlong *)(param_2 + 0x1c8) + (longlong)param_6 * 8);
    }
    if (*(char *)(param_2 + 0xb) != '\0') {
      dVar5 = (double)FUN_01b08a00(param_2,1);
      *(double *)(*(longlong *)(param_2 + 0x1b8) + lVar3 * 8) =
           *(double *)(*(longlong *)(param_2 + 0x1b8) + lVar3 * 8) +
           dVar5 * *(double *)(*(longlong *)(param_2 + 0x1c0) + (longlong)param_6 * 8);
      lVar1 = *(longlong *)(param_2 + 0x1b8);
      dVar5 = (double)FUN_01b08a00(param_2,0);
      *(double *)(lVar1 + lVar3 * 8) =
           *(double *)(*(longlong *)(param_2 + 0x1b8) + lVar3 * 8) +
           dVar5 * *(double *)(lVar1 + (longlong)param_6 * 8);
    }
  }
  dVar5 = (double)FUN_01b08a00(param_2,0);
  *param_4 = *(double *)(*(longlong *)(param_2 + 0x1b8) + (longlong)iVar2 * 8) -
             dVar5 * *(double *)(*(longlong *)(param_2 + 0x1b8) + (longlong)param_6 * 8);
  dVar5 = (double)FUN_01b08a00(param_2,0);
  *param_3 = dVar5 * param_5;
  return;
}

