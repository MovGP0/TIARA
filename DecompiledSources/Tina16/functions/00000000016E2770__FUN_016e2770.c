/* Ghidra address: 016e2770 */
/* Ghidra symbol: FUN_016e2770 */


void FUN_016e2770(undefined8 param_1,longlong param_2,int param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 *param_6,longlong param_7,char param_8)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  
  if (param_8 != '\0') {
    if (param_7 == 0) {
      param_3 = FUN_01b057d0(param_1,param_3);
    }
    else {
      param_3 = FUN_01b057d0(param_7,param_3);
    }
  }
  iVar2 = param_3 + 1;
  lVar3 = (longlong)param_3;
  *(undefined8 *)(*(longlong *)(param_2 + 0x1b8) + lVar3 * 8) = param_4;
  if ((*(byte *)(param_2 + 0x88) & 0x40) != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x1c0) + lVar3 * 8) =
         *(undefined8 *)(*(longlong *)(param_2 + 0x1b8) + lVar3 * 8);
  }
  if (*(char *)(param_2 + 0x886) == '\x01') {
    if (*(char *)(param_2 + 0xb) == '\x01') {
      dVar6 = (double)FUN_01b08a00(param_2,0);
      dVar5 = (double)FUN_01b08a00(param_2,1);
      *(double *)(*(longlong *)(param_2 + 0x1b8) + (longlong)iVar2 * 8) =
           dVar6 * *(double *)(*(longlong *)(param_2 + 0x1b8) + lVar3 * 8) +
           dVar5 * *(double *)(*(longlong *)(param_2 + 0x1c0) + lVar3 * 8);
    }
    else if (*(char *)(param_2 + 0xb) == '\x02') {
      lVar4 = *(longlong *)(param_2 + 0x1b8);
      dVar6 = (double)FUN_01b08a00(param_2,1);
      dVar5 = (double)FUN_01b08a00(param_2,0);
      *(double *)(lVar4 + (longlong)iVar2 * 8) =
           -*(double *)(*(longlong *)(param_2 + 0x1c0) + (longlong)iVar2 * 8) * dVar6 +
           dVar5 * (*(double *)(lVar4 + lVar3 * 8) -
                   *(double *)(*(longlong *)(param_2 + 0x1c0) + lVar3 * 8));
    }
  }
  else if (*(char *)(param_2 + 0x886) == '\x02') {
    lVar4 = (longlong)iVar2;
    *(undefined8 *)(*(longlong *)(param_2 + 0x1b8) + lVar4 * 8) = 0;
    if (5 < *(byte *)(param_2 + 0xb)) {
      dVar6 = (double)FUN_01b08a00(param_2,6);
      *(double *)(*(longlong *)(param_2 + 0x1b8) + lVar4 * 8) =
           *(double *)(*(longlong *)(param_2 + 0x1b8) + (longlong)iVar2 * 8) +
           dVar6 * *(double *)(*(longlong *)(param_2 + 0x1e8) + lVar3 * 8);
    }
    if (4 < *(byte *)(param_2 + 0xb)) {
      dVar6 = (double)FUN_01b08a00(param_2,5);
      *(double *)(*(longlong *)(param_2 + 0x1b8) + lVar4 * 8) =
           *(double *)(*(longlong *)(param_2 + 0x1b8) + lVar4 * 8) +
           dVar6 * *(double *)(*(longlong *)(param_2 + 0x1e0) + lVar3 * 8);
    }
    if (3 < *(byte *)(param_2 + 0xb)) {
      dVar6 = (double)FUN_01b08a00(param_2,4);
      *(double *)(*(longlong *)(param_2 + 0x1b8) + lVar4 * 8) =
           *(double *)(*(longlong *)(param_2 + 0x1b8) + lVar4 * 8) +
           dVar6 * *(double *)(*(longlong *)(param_2 + 0x1d8) + lVar3 * 8);
    }
    if (2 < *(byte *)(param_2 + 0xb)) {
      dVar6 = (double)FUN_01b08a00(param_2,3);
      *(double *)(*(longlong *)(param_2 + 0x1b8) + lVar4 * 8) =
           *(double *)(*(longlong *)(param_2 + 0x1b8) + lVar4 * 8) +
           dVar6 * *(double *)(*(longlong *)(param_2 + 0x1d0) + lVar3 * 8);
    }
    if (1 < *(byte *)(param_2 + 0xb)) {
      dVar6 = (double)FUN_01b08a00(param_2,2);
      *(double *)(*(longlong *)(param_2 + 0x1b8) + lVar4 * 8) =
           *(double *)(*(longlong *)(param_2 + 0x1b8) + lVar4 * 8) +
           dVar6 * *(double *)(*(longlong *)(param_2 + 0x1c8) + lVar3 * 8);
    }
    if (*(char *)(param_2 + 0xb) != '\0') {
      dVar6 = (double)FUN_01b08a00(param_2,1);
      *(double *)(*(longlong *)(param_2 + 0x1b8) + lVar4 * 8) =
           *(double *)(*(longlong *)(param_2 + 0x1b8) + lVar4 * 8) +
           dVar6 * *(double *)(*(longlong *)(param_2 + 0x1c0) + lVar3 * 8);
      lVar1 = *(longlong *)(param_2 + 0x1b8);
      dVar6 = (double)FUN_01b08a00(param_2,0);
      *(double *)(lVar1 + lVar4 * 8) =
           *(double *)(*(longlong *)(param_2 + 0x1b8) + lVar4 * 8) +
           dVar6 * *(double *)(lVar1 + lVar3 * 8);
    }
  }
  uVar7 = FUN_01b08a00(param_2,0);
  *param_6 = uVar7;
  lVar3 = (longlong)iVar2;
  *param_5 = *(undefined8 *)(*(longlong *)(param_2 + 0x1b8) + lVar3 * 8);
  if ((*(byte *)(param_2 + 0x88) & 0x40) != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x1c0) + lVar3 * 8) =
         *(undefined8 *)(*(longlong *)(param_2 + 0x1b8) + lVar3 * 8);
  }
  return;
}

