/* Ghidra address: 0167a480 */
/* Ghidra symbol: FUN_0167a480 */


void FUN_0167a480(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4,
                 undefined8 param_5,double *param_6,double *param_7,undefined4 *param_8)

{
  char cVar1;
  longlong lVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  ulonglong in_stack_fffffffffffffe98;
  double local_158 [4];
  double local_138;
  double local_d0 [12];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_51;
  
  pdVar3 = local_d0;
  for (lVar2 = 0x11; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pdVar3 = *param_6;
    param_6 = param_6 + 1;
    pdVar3 = pdVar3 + 1;
  }
  pdVar3 = local_158;
  for (lVar2 = 0x11; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pdVar3 = *param_7;
    param_7 = param_7 + 1;
    pdVar3 = pdVar3 + 1;
  }
  *param_8 = param_2;
  *(double *)(param_8 + 0x50) = (local_d0[0] * 1.3806226e-23) / 1.6021917e-19;
  dVar4 = (double)FUN_00c42670(local_d0[0] / 300.15,0x4008000000000000);
  dVar5 = (double)FUN_0040af80((1.11 / *(double *)(param_8 + 0x50)) * (local_d0[0] / 300.15 - 1.0));
  *(double *)(param_8 + 0x52) = dVar4 * 1e-14 * dVar5;
  dVar4 = (double)FUN_0040c760(0x4000000000000000);
  dVar4 = (double)FUN_0040c2f0(*(double *)(param_8 + 0x50) / (dVar4 * *(double *)(param_8 + 0x52)));
  *(double *)(param_8 + 0x36) = *(double *)(param_8 + 0x50) * dVar4;
  *(undefined1 *)((longlong)param_8 + 10) = local_51;
  *(undefined8 *)(param_8 + 0x5c) = local_70;
  *(undefined8 *)(param_8 + 0x5e) = local_68;
  *(undefined8 *)(param_8 + 0x60) = local_60;
  *(undefined1 *)((longlong)param_8 + 0x11) = param_4;
  *(undefined8 *)(param_8 + 0xe) = 0;
  *(undefined8 *)(param_8 + 0x10) = 0;
  if (local_138 == 0.0) {
    *(undefined1 *)(param_8 + 4) = *(undefined1 *)(param_8 + 3);
  }
  else {
    cVar1 = FUN_016e9d10(param_1,1);
    *(char *)(param_8 + 4) = cVar1 + '\x01';
    cVar1 = FUN_016e9e80(param_1,1);
    *(char *)(param_8 + 2) = cVar1;
    FUN_016ebe60(param_1,cVar1 + '\x01',*(undefined1 *)(param_8 + 4),*(undefined1 *)(param_8 + 3),1)
    ;
    in_stack_fffffffffffffe98 = 0;
    FUN_016ed320(param_1,*(char *)(param_8 + 2) + '\x01',0,1.0 / local_138,0);
  }
  if (local_158[3] == 0.0) {
    *(undefined1 *)((longlong)param_8 + 0xf) = *(undefined1 *)((longlong)param_8 + 0xb);
  }
  else {
    cVar1 = FUN_016e9d10(param_1,1);
    *(char *)((longlong)param_8 + 0xf) = cVar1 + '\x01';
    cVar1 = FUN_016e9e80(param_1,1);
    *(char *)(param_8 + 2) = cVar1;
    FUN_016ebe60(param_1,cVar1 + '\x01',*(undefined1 *)((longlong)param_8 + 0xf),
                 *(undefined1 *)((longlong)param_8 + 0xb),1);
    in_stack_fffffffffffffe98 = 0;
    FUN_016ed320(param_1,*(char *)(param_8 + 2) + '\x01',0,1.0 / local_158[3],0);
  }
  cVar1 = FUN_016e9e80(param_1,2);
  *(char *)(param_8 + 2) = cVar1;
  in_stack_fffffffffffffe98 = in_stack_fffffffffffffe98 & 0xffffffffffffff00;
  FUN_016ebe60(param_1,cVar1 + '\x01',*(undefined1 *)((longlong)param_8 + 0x11),
               *(undefined1 *)(param_8 + 4),in_stack_fffffffffffffe98);
  FUN_016ebe60(param_1,*(char *)(param_8 + 2) + '\x02',*(undefined1 *)((longlong)param_8 + 0x11),
               *(undefined1 *)((longlong)param_8 + 0xf),
               in_stack_fffffffffffffe98 & 0xffffffffffffff00);
  return;
}

