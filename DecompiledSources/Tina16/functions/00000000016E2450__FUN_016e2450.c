/* Ghidra address: 016e2450 */
/* Ghidra symbol: FUN_016e2450 */


void FUN_016e2450(undefined8 param_1,longlong param_2,int param_3,double param_4,double *param_5,
                 double *param_6,longlong param_7,char param_8)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (param_8 != '\0') {
    if (param_7 == 0) {
      param_3 = FUN_01b057d0(param_1,param_3);
    }
    else {
      param_3 = FUN_01b057d0(param_7,param_3);
    }
  }
  if ((*(byte *)(param_2 + 0x88) & 0x40) != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x1c0) + (longlong)param_3 * 8) =
         *(undefined8 *)(*(longlong *)(param_2 + 0x1b8) + (longlong)param_3 * 8);
  }
  if (*(char *)(param_2 + 0x886) == '\x01') {
    if (*(char *)(param_2 + 0xb) == '\x01') {
      dVar3 = (double)FUN_01b08a00(param_2,1);
      dVar4 = (double)FUN_01b08a00(param_2,0);
      *param_5 = (param_4 -
                 dVar3 * *(double *)(*(longlong *)(param_2 + 0x1c0) + (longlong)param_3 * 8)) /
                 dVar4;
    }
    else if (*(char *)(param_2 + 0xb) == '\x02') {
      dVar3 = (double)FUN_01b08a00(param_2,1);
      dVar4 = (double)FUN_01b08a00(param_2,0);
      dVar5 = (double)FUN_01b08a00(param_2,0);
      *param_5 = (param_4 + *(double *)
                             (*(longlong *)(param_2 + 0x1c0) + (longlong)(param_3 + 1) * 8) * dVar3
                 + dVar4 * *(double *)(*(longlong *)(param_2 + 0x1c0) + (longlong)param_3 * 8)) /
                 dVar5;
    }
  }
  else if (*(char *)(param_2 + 0x886) == '\x02') {
    dVar3 = 0.0;
    if (5 < *(byte *)(param_2 + 0xb)) {
      dVar3 = (double)FUN_01b08a00(param_2,6);
      dVar3 = dVar3 * *(double *)(*(longlong *)(param_2 + 0x1e8) + (longlong)param_3 * 8) + 0.0;
    }
    if (4 < *(byte *)(param_2 + 0xb)) {
      dVar4 = (double)FUN_01b08a00(param_2,5);
      dVar3 = dVar3 + dVar4 * *(double *)(*(longlong *)(param_2 + 0x1e0) + (longlong)param_3 * 8);
    }
    if (3 < *(byte *)(param_2 + 0xb)) {
      dVar4 = (double)FUN_01b08a00(param_2,4);
      dVar3 = dVar3 + dVar4 * *(double *)(*(longlong *)(param_2 + 0x1d8) + (longlong)param_3 * 8);
    }
    if (2 < *(byte *)(param_2 + 0xb)) {
      dVar4 = (double)FUN_01b08a00(param_2,3);
      dVar3 = dVar3 + dVar4 * *(double *)(*(longlong *)(param_2 + 0x1d0) + (longlong)param_3 * 8);
    }
    if (1 < *(byte *)(param_2 + 0xb)) {
      dVar4 = (double)FUN_01b08a00(param_2,2);
      dVar3 = dVar3 + dVar4 * *(double *)(*(longlong *)(param_2 + 0x1c8) + (longlong)param_3 * 8);
    }
    if (*(char *)(param_2 + 0xb) != '\0') {
      dVar5 = (double)FUN_01b08a00(param_2,1);
      dVar4 = *(double *)(*(longlong *)(param_2 + 0x1c0) + (longlong)param_3 * 8);
      dVar6 = (double)FUN_01b08a00(param_2,0);
      *param_5 = (param_4 - (dVar3 + dVar5 * dVar4)) / dVar6;
    }
  }
  dVar3 = (double)FUN_01b08a00(param_2,0);
  *param_6 = 1.0 / dVar3;
  lVar1 = *(longlong *)(param_2 + 0x1b8);
  lVar2 = (longlong)(param_3 + 1);
  *(double *)(lVar1 + lVar2 * 8) = param_4;
  *(double *)(lVar1 + (longlong)param_3 * 8) = *param_5;
  if ((*(byte *)(param_2 + 0x88) & 0x40) != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x1c0) + lVar2 * 8) =
         *(undefined8 *)(*(longlong *)(param_2 + 0x1b8) + lVar2 * 8);
  }
  return;
}

