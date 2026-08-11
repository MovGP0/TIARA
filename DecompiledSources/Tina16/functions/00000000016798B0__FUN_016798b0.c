/* Ghidra address: 016798b0 */
/* Ghidra symbol: FUN_016798b0 */


void FUN_016798b0(longlong param_1,longlong param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6,undefined1 param_7,double *param_8,
                 double *param_9,undefined4 *param_10)

{
  char cVar1;
  undefined2 uVar2;
  longlong lVar3;
  double *pdVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 in_stack_fffffffffffffe88;
  ulonglong uVar7;
  ulonglong in_stack_fffffffffffffe98;
  undefined8 local_140;
  double local_138 [6];
  double local_108;
  double local_100;
  double local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  double local_b0 [11];
  double local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  char local_34;
  char local_33;
  char local_32;
  undefined1 local_31;
  char local_30;
  
  pdVar4 = local_b0;
  for (lVar3 = 0x11; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pdVar4 = *param_8;
    param_8 = param_8 + 1;
    pdVar4 = pdVar4 + 1;
  }
  pdVar4 = local_138;
  for (lVar3 = 0x11; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pdVar4 = *param_9;
    param_9 = param_9 + 1;
    pdVar4 = pdVar4 + 1;
  }
  *param_10 = param_3;
  *(double *)(param_10 + 0x3a) = (local_b0[0] * 1.3806226e-23) / 1.6021917e-19;
  *(undefined8 *)(param_10 + 0x52) = 0x3d06849b86a12b9b;
  *(undefined8 *)(param_10 + 0x54) = 0x3ff0000000000000;
  *(double *)(param_10 + 0x3c) = *(double *)(param_10 + 0x54) * *(double *)(param_10 + 0x3a);
  *(double *)(param_10 + 0x4c) = local_138[1] + (local_b0[0] - 300.15) * local_f8;
  *(double *)(param_10 + 0x32) = local_138[0] + (local_b0[0] - 300.15) * local_100;
  *(double *)(param_10 + 0x4e) = local_138[2];
  uVar5 = FUN_00b90620(local_f0,0);
  *(undefined8 *)(param_10 + 0x56) = uVar5;
  *(undefined8 *)(param_10 + 0x58) = local_e8;
  *(double *)(param_10 + 0x5a) = local_b0[0];
  *(char *)((longlong)param_10 + 9) = local_30;
  *(undefined1 *)((longlong)param_10 + 10) = local_31;
  *(undefined8 *)(param_10 + 0x5c) = local_50;
  *(undefined8 *)(param_10 + 0x5e) = local_48;
  *(undefined8 *)(param_10 + 0x60) = local_40;
  *(bool *)(param_10 + 100) = local_34 == '\0';
  *(bool *)((longlong)param_10 + 0x191) = local_33 == '\0';
  *(bool *)((longlong)param_10 + 0x192) = local_32 == '\0';
  *(double *)(param_10 + 0x62) = local_58;
  *(undefined8 *)(param_10 + 0x3e) = local_e0;
  *(undefined8 *)(param_10 + 0x40) = local_d8;
  *(undefined8 *)(param_10 + 0x42) = local_d0;
  *(undefined8 *)(param_10 + 0x44) = local_c8;
  *(undefined8 *)(param_10 + 0x46) = local_c0;
  *(undefined8 *)(param_10 + 0x48) = local_b8;
  if (local_30 == '\x01') {
    local_138[4] = 1000000000.0;
  }
  else if (local_30 == '\x02') {
    local_138[3] = 1000000000.0;
  }
  *(undefined1 *)((longlong)param_10 + 0xd) = param_5;
  *(undefined1 *)((longlong)param_10 + 0xb) = param_4;
  *(undefined1 *)(param_10 + 3) = param_6;
  *(undefined1 *)((longlong)param_10 + 0xe) = param_7;
  dVar6 = (double)FUN_0040c760(0x4000000000000000);
  dVar6 = (double)FUN_0040c2f0((*(double *)(param_10 + 0x54) * *(double *)(param_10 + 0x3a)) /
                               (dVar6 * *(double *)(param_10 + 0x52)));
  *(double *)(param_10 + 0x36) = *(double *)(param_10 + 0x54) * *(double *)(param_10 + 0x3a) * dVar6
  ;
  *(undefined8 *)(param_10 + 0xe) = 0;
  *(undefined8 *)(param_10 + 0x10) = 0;
  *(undefined8 *)(param_10 + 0x12) = 0;
  *(undefined8 *)(param_10 + 0x14) = 0;
  *(undefined8 *)(param_10 + 0x16) = 0;
  uVar5 = CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe88 >> 8),*(undefined1 *)(param_10 + 3));
  in_stack_fffffffffffffe98 = in_stack_fffffffffffffe98 & 0xffffffffffffff00;
  FUN_016760d0(param_1,local_138[4] / *(double *)(param_10 + 0x62),1,local_b0[0],uVar5,param_10 + 4,
               in_stack_fffffffffffffe98);
  uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),*(undefined1 *)((longlong)param_10 + 0xb));
  in_stack_fffffffffffffe98 = in_stack_fffffffffffffe98 & 0xffffffffffffff00;
  FUN_016760d0(param_1,local_138[3] / *(double *)(param_10 + 0x62),1,local_b0[0],uVar5,
               (longlong)param_10 + 0xf,in_stack_fffffffffffffe98);
  uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),*(undefined1 *)((longlong)param_10 + 0xd));
  in_stack_fffffffffffffe98 = in_stack_fffffffffffffe98 & 0xffffffffffffff00;
  FUN_016760d0(param_1,2.0 / *(double *)(param_10 + 0x62),1,local_b0[0],uVar5,
               (longlong)param_10 + 0x11,in_stack_fffffffffffffe98);
  uVar7 = CONCAT71((int7)((ulonglong)uVar5 >> 8),*(undefined1 *)((longlong)param_10 + 0xe));
  FUN_016760d0(param_1,2.0 / *(double *)(param_10 + 0x62),1,local_b0[0],uVar7,
               (longlong)param_10 + 0x12,in_stack_fffffffffffffe98 & 0xffffffffffffff00);
  uVar2 = FUN_016ea1b0(param_1,4);
  *(undefined2 *)((longlong)param_10 + 0x12a) = uVar2;
  cVar1 = FUN_016e9e80(param_1,0xe);
  *(char *)(param_10 + 2) = cVar1;
  uVar7 = uVar7 & 0xffffffffffffff00;
  FUN_016ebe60(param_1,cVar1 + '\x01',*(undefined1 *)((longlong)param_10 + 0xf),
               *(undefined1 *)(param_10 + 4),uVar7);
  uVar5 = CONCAT71((int7)(uVar7 >> 8),*(char *)(param_10 + 2) + '\x01');
  FUN_016ec850(param_1,*(char *)(param_10 + 2) + '\x02',*(undefined1 *)((longlong)param_10 + 0x11),
               *(undefined1 *)(param_10 + 4),uVar5);
  uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),*(char *)(param_10 + 2) + '\x01');
  FUN_016ec850(param_1,*(char *)(param_10 + 2) + '\x03',*(undefined1 *)((longlong)param_10 + 0x12),
               *(undefined1 *)(param_10 + 4),uVar5);
  uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),*(char *)(param_10 + 2) + '\x01');
  FUN_016ec850(param_1,*(char *)(param_10 + 2) + '\x04',*(undefined1 *)((longlong)param_10 + 0x11),
               *(undefined1 *)((longlong)param_10 + 0xf),uVar5);
  uVar7 = CONCAT71((int7)((ulonglong)uVar5 >> 8),*(char *)(param_10 + 2) + '\x01');
  FUN_016ec850(param_1,*(char *)(param_10 + 2) + '\x05',*(undefined1 *)((longlong)param_10 + 0x12),
               *(undefined1 *)((longlong)param_10 + 0xf),uVar7);
  uVar7 = uVar7 & 0xffffffffffffff00;
  FUN_016ebe60(param_1,*(char *)(param_10 + 2) + '\x06',*(undefined1 *)((longlong)param_10 + 0x12),
               *(undefined1 *)((longlong)param_10 + 0xf),uVar7);
  FUN_016ebe60(param_1,*(char *)(param_10 + 2) + '\a',*(undefined1 *)((longlong)param_10 + 0x12),
               *(undefined1 *)(param_10 + 4),uVar7 & 0xffffffffffffff00);
  FUN_016ebfa0(param_1,*(char *)(param_10 + 2) + '\b',*(undefined1 *)((longlong)param_10 + 0x11),
               *(undefined1 *)(param_10 + 4),1);
  FUN_016ebfa0(param_1,*(char *)(param_10 + 2) + '\t',*(undefined1 *)((longlong)param_10 + 0x11),
               *(undefined1 *)((longlong)param_10 + 0xf),1);
  FUN_016ebfa0(param_1,*(char *)(param_10 + 2) + '\n',*(undefined1 *)((longlong)param_10 + 0x11),
               *(undefined1 *)((longlong)param_10 + 0x12),1);
  FUN_016ebfa0(param_1,*(char *)(param_10 + 2) + '\v',*(undefined1 *)((longlong)param_10 + 0x12),
               *(undefined1 *)(param_10 + 4),1);
  FUN_016ebfa0(param_1,*(char *)(param_10 + 2) + '\f',*(undefined1 *)((longlong)param_10 + 0x12),
               *(undefined1 *)((longlong)param_10 + 0xf),1);
  FUN_016ed1a0(param_1,*(char *)(param_10 + 2) + '\r',*(undefined1 *)((longlong)param_10 + 0xf),
               *(undefined1 *)(param_10 + 4));
  FUN_016ebe60(param_1,*(char *)(param_10 + 2) + '\x0e',*(undefined1 *)((longlong)param_10 + 0x11),
               *(undefined1 *)(param_10 + 4),1);
  FUN_016ed220(param_1,*(char *)(param_10 + 2) + '\b',local_108 * local_58,0);
  FUN_016ed220(param_1,*(char *)(param_10 + 2) + '\t',local_138[5] * local_58,0);
  FUN_016ed220(param_1,*(char *)(param_10 + 2) + '\n',0,0);
  FUN_016ed220(param_1,*(char *)(param_10 + 2) + '\v',0,0);
  FUN_016ed220(param_1,*(char *)(param_10 + 2) + '\f',0,0);
  FUN_016ed320(param_1,*(char *)(param_10 + 2) + '\x0e',0,
               *(double *)(param_2 + 0x430) * 0.001 * local_58,0);
  lVar3 = *(longlong *)(param_1 + 0x130);
  local_140 = FUN_01677ec0(&PTR_FUN_01677c80,1,param_1,param_2,local_b0,local_138,param_10);
  FUN_00597e50(lVar3 + 8,&local_140);
  return;
}

