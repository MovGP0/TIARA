/* Ghidra address: 00e78420 */
/* Ghidra symbol: FUN_00e78420 */


void FUN_00e78420(undefined8 param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5,double *param_6,double *param_7,undefined8 param_8,
                 undefined4 *param_9)

{
  undefined1 uVar1;
  undefined2 uVar2;
  longlong lVar3;
  double *pdVar4;
  double dVar5;
  undefined8 uVar6;
  double local_118 [4];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  double local_70 [3];
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  char local_40;
  char local_3f;
  
  pdVar4 = local_70;
  for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pdVar4 = *param_6;
    param_6 = param_6 + 1;
    pdVar4 = pdVar4 + 1;
  }
  pdVar4 = local_118;
  for (lVar3 = 0x15; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pdVar4 = *param_7;
    param_7 = param_7 + 1;
    pdVar4 = pdVar4 + 1;
  }
  *param_9 = param_2;
  *(double *)(param_9 + 0x1c) = local_70[0];
  *(double *)(param_9 + 0x1e) = local_118[0] + (local_70[0] - 300.15) * local_118[1];
  dVar5 = (double)FUN_00c42670(0x3ff028f5c28f5c29,(local_70[0] - 300.15) * local_118[3]);
  *(double *)(param_9 + 0x2c) = local_118[2] * dVar5;
  uVar6 = FUN_00b90620(local_98,0x3f50624dd2f1a9fc);
  *(undefined8 *)(param_9 + 0x2a) = uVar6;
  *(double *)(param_9 + 0x1a) = (local_70[0] * 1.3806226e-23) / 1.6021917e-19;
  dVar5 = (double)FUN_0040c2f0(local_70[0] / 300.15);
  dVar5 = (double)FUN_0040af80(((local_70[0] / 300.15 - 1.0) * local_e0) /
                               (local_c8 * *(double *)(param_9 + 0x1a)) +
                               (local_a0 / local_c8) * dVar5);
  *(double *)(param_9 + 0x2e) = local_d0 * dVar5;
  *(undefined8 *)(param_9 + 0x30) = local_90;
  *(undefined8 *)(param_9 + 0x34) = local_f0;
  *(undefined8 *)(param_9 + 0x36) = local_e8;
  *(undefined8 *)(param_9 + 0x38) = local_f8;
  *(undefined8 *)(param_9 + 0x3a) = local_88;
  *(undefined8 *)(param_9 + 0x3c) = local_80;
  *(undefined8 *)(param_9 + 0x3e) = local_78;
  *(double *)(param_9 + 0x32) = local_a8;
  *(double *)(param_9 + 0x20) = local_d8 * local_a8;
  dVar5 = (double)FUN_0040c760(1.0 - local_d8);
  *(double *)(param_9 + 0x22) = (local_a8 * (1.0 - dVar5)) / 0.5;
  *(double *)(param_9 + 0x24) = dVar5 * dVar5 * dVar5;
  *(double *)(param_9 + 0x26) = 1.0 - local_d8 * 1.5;
  dVar5 = (double)FUN_0040c2f0(*(double *)(param_9 + 0x1a) /
                               (*(double *)(param_9 + 0x2e) * 1.4142135623730951));
  *(double *)(param_9 + 0x28) = *(double *)(param_9 + 0x1a) * dVar5;
  *(double *)(param_9 + 0x40) = local_70[2];
  *(double *)(param_9 + 0x42) = local_70[1];
  *(undefined1 *)(param_9 + 1) = local_58;
  *(undefined8 *)(param_9 + 4) = local_50;
  *(undefined8 *)(param_9 + 6) = local_48;
  *(bool *)((longlong)param_9 + 0xe) = local_40 == '\0';
  *(bool *)((longlong)param_9 + 0xf) = local_3f == '\0';
  *(undefined1 *)(param_9 + 2) = param_4;
  *(undefined1 *)((longlong)param_9 + 6) = param_3;
  *(undefined1 *)((longlong)param_9 + 7) = param_5;
  FUN_016760d0(param_1,local_c0 / *(double *)(param_9 + 0x40),1,local_70[0],param_3,
               (longlong)param_9 + 9,0);
  FUN_016760d0(param_1,local_b8 / *(double *)(param_9 + 0x40),1,local_70[0],param_5,
               (longlong)param_9 + 10,0);
  FUN_016760d0(param_1,local_b0 / *(double *)(param_9 + 0x40),1,local_70[0],param_4,
               (longlong)param_9 + 0xb,0);
  uVar1 = FUN_016e9e80(param_1,6);
  *(undefined1 *)((longlong)param_9 + 5) = uVar1;
  uVar2 = FUN_016ea1b0(param_1,0xd);
  *(undefined2 *)(param_9 + 3) = uVar2;
  FUN_016ebe60(param_1,*(char *)((longlong)param_9 + 5) + '\x01',
               *(undefined1 *)((longlong)param_9 + 9),*(undefined1 *)((longlong)param_9 + 10),0);
  FUN_016ec850(param_1,*(char *)((longlong)param_9 + 5) + '\x02',
               *(undefined1 *)((longlong)param_9 + 0xb),*(undefined1 *)((longlong)param_9 + 10),
               *(char *)((longlong)param_9 + 5) + '\x01');
  FUN_016ebe60(param_1,*(char *)((longlong)param_9 + 5) + '\x03',
               *(undefined1 *)((longlong)param_9 + 0xb),*(undefined1 *)((longlong)param_9 + 10),0);
  FUN_016ebe60(param_1,*(char *)((longlong)param_9 + 5) + '\x04',
               *(undefined1 *)((longlong)param_9 + 0xb),*(undefined1 *)((longlong)param_9 + 9),0);
  FUN_016ebfa0(param_1,*(char *)((longlong)param_9 + 5) + '\x05',
               *(undefined1 *)((longlong)param_9 + 9),*(undefined1 *)((longlong)param_9 + 10),1);
  FUN_016ed1a0(param_1,*(char *)((longlong)param_9 + 5) + '\x06',
               *(undefined1 *)((longlong)param_9 + 9),*(undefined1 *)((longlong)param_9 + 10));
  return;
}

