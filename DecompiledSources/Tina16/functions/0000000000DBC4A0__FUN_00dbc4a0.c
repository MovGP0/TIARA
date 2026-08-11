/* Ghidra address: 00dbc4a0 */
/* Ghidra symbol: FUN_00dbc4a0 */


void FUN_00dbc4a0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4,
                 undefined8 param_5,double *param_6,undefined8 *param_7,undefined4 *param_8)

{
  char cVar1;
  longlong lVar2;
  double *pdVar3;
  undefined8 *puVar4;
  double dVar5;
  double dVar6;
  ulonglong in_stack_fffffffffffffe08;
  undefined8 local_1e8 [12];
  double local_188;
  double local_180;
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
  puVar4 = local_1e8;
  for (lVar2 = 0x23; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *param_7;
    param_7 = param_7 + 1;
    puVar4 = puVar4 + 1;
  }
  *param_8 = param_2;
  *(double *)(param_8 + 0x38) = (local_d0[0] * 1.3806226e-23) / 1.6021917e-19;
  dVar5 = (double)FUN_00c42670(local_d0[0] / 300.15,0x4008000000000000);
  dVar6 = (double)FUN_0040af80((1.11 / *(double *)(param_8 + 0x38)) * (local_d0[0] / 300.15 - 1.0));
  *(double *)(param_8 + 0x3a) = dVar5 * 1e-14 * dVar6;
  dVar5 = (double)FUN_0040c760(0x4000000000000000);
  dVar5 = (double)FUN_0040c2f0(*(double *)(param_8 + 0x38) / (dVar5 * *(double *)(param_8 + 0x3a)));
  *(double *)(param_8 + 0x62) = *(double *)(param_8 + 0x38) * dVar5;
  *(undefined1 *)((longlong)param_8 + 10) = local_51;
  *(undefined8 *)(param_8 + 0x6a) = local_70;
  *(undefined8 *)(param_8 + 0x6c) = local_68;
  *(undefined8 *)(param_8 + 0x6e) = local_60;
  *(undefined1 *)((longlong)param_8 + 0x11) = param_4;
  *(undefined8 *)(param_8 + 6) = 0;
  *(undefined8 *)(param_8 + 8) = 0;
  if (local_180 == 0.0) {
    *(undefined1 *)(param_8 + 4) = *(undefined1 *)(param_8 + 3);
  }
  else {
    cVar1 = FUN_016e9d10(param_1,1);
    *(char *)(param_8 + 4) = cVar1 + '\x01';
    cVar1 = FUN_016e9e80(param_1,1);
    *(char *)(param_8 + 2) = cVar1;
    FUN_016ebe60(param_1,cVar1 + '\x01',*(undefined1 *)(param_8 + 4),*(undefined1 *)(param_8 + 3),1)
    ;
    in_stack_fffffffffffffe08 = 0;
    FUN_016ed320(param_1,*(char *)(param_8 + 2) + '\x01',0,1.0 / local_180,0);
  }
  if (local_188 == 0.0) {
    *(undefined1 *)((longlong)param_8 + 0xf) = *(undefined1 *)((longlong)param_8 + 0xb);
  }
  else {
    cVar1 = FUN_016e9d10(param_1,1);
    *(char *)((longlong)param_8 + 0xf) = cVar1 + '\x01';
    cVar1 = FUN_016e9e80(param_1,1);
    *(char *)(param_8 + 2) = cVar1;
    FUN_016ebe60(param_1,cVar1 + '\x01',*(undefined1 *)((longlong)param_8 + 0xf),
                 *(undefined1 *)((longlong)param_8 + 0xb),1);
    in_stack_fffffffffffffe08 = 0;
    FUN_016ed320(param_1,*(char *)(param_8 + 2) + '\x01',0,1.0 / local_188,0);
  }
  cVar1 = FUN_016e9e80(param_1,2);
  *(char *)(param_8 + 2) = cVar1;
  in_stack_fffffffffffffe08 = in_stack_fffffffffffffe08 & 0xffffffffffffff00;
  FUN_016ebe60(param_1,cVar1 + '\x01',*(undefined1 *)((longlong)param_8 + 0x11),
               *(undefined1 *)(param_8 + 4),in_stack_fffffffffffffe08);
  FUN_016ebe60(param_1,*(char *)(param_8 + 2) + '\x02',*(undefined1 *)((longlong)param_8 + 0x11),
               *(undefined1 *)((longlong)param_8 + 0xf),
               in_stack_fffffffffffffe08 & 0xffffffffffffff00);
  return;
}

