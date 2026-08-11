/* Ghidra address: 01d576b0 */
/* Ghidra symbol: FUN_01d576b0 */


void FUN_01d576b0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined1 param_6,double *param_7,undefined8 *param_8,
                 undefined8 *param_9)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  double *pdVar4;
  undefined8 uVar5;
  double unaff_XMM6_Qa;
  double dVar6;
  undefined8 in_stack_ffffffffffffff38;
  ulonglong uVar7;
  double local_90;
  double local_88 [4];
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  double local_50;
  
  pdVar4 = local_88;
  for (lVar3 = 8; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pdVar4 = *param_7;
    param_7 = param_7 + 1;
    pdVar4 = pdVar4 + 1;
  }
  uVar5 = FUN_00b90620(*param_8,0x3d719799812dea11);
  *param_9 = uVar5;
  local_50 = (double)FUN_00b90660(local_50,0x3ff0000000000000,0x3f50624dd2f1a9fc);
  local_88[0] = (double)FUN_00b90660(local_88[0],0x40f86a0000000000,0);
  local_88[1] = (double)FUN_00b90660(local_88[1],1.0 / *(double *)(param_2 + 0x430),
                                     *(undefined8 *)(param_2 + 0x430));
  local_88[2] = (double)FUN_00b90660(local_88[2],0x3f50624dd2f1a9fc,0);
  local_88[3] = (double)FUN_00b90660(local_88[3],0x40f86a0000000000,0);
  local_68 = (double)FUN_00b90660(local_68,1.0 / *(double *)(param_2 + 0x430),
                                  *(undefined8 *)(param_2 + 0x430));
  local_60 = FUN_00b90660(local_60,0x3f50624dd2f1a9fc,0);
  local_58 = FUN_00b90660(local_58,0x3f50624dd2f1a9fc,0);
  param_9[1] = local_50;
  uVar2 = FUN_016e9e80(param_1,9);
  *(uint *)(param_9 + 3) = uVar2 & 0xff;
  cVar1 = FUN_016e9d10(param_1,6);
  *(char *)(param_9 + 2) = cVar1 + '\x01';
  *(char *)((longlong)param_9 + 0x11) = cVar1 + '\x02';
  *(char *)((longlong)param_9 + 0x12) = cVar1 + '\x03';
  *(char *)((longlong)param_9 + 0x13) = cVar1 + '\x04';
  *(char *)((longlong)param_9 + 0x14) = cVar1 + '\x05';
  *(char *)((longlong)param_9 + 0x15) = cVar1 + '\x06';
  uVar5 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff38 >> 8),1);
  FUN_016ebe60(param_1,*(char *)(param_9 + 3) + '\x01',param_3,*(undefined1 *)(param_9 + 2),uVar5);
  uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  FUN_016ebe60(param_1,*(char *)(param_9 + 3) + '\x03',*(undefined1 *)(param_9 + 2),param_4,uVar5);
  uVar7 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  FUN_016ebfa0(param_1,*(char *)(param_9 + 3) + '\x02',param_3,param_4,uVar7);
  uVar7 = uVar7 & 0xffffffffffffff00;
  FUN_016ebe60(param_1,*(char *)(param_9 + 3) + '\x04',*(undefined1 *)((longlong)param_9 + 0x12),
               *(undefined1 *)((longlong)param_9 + 0x13),uVar7);
  local_90 = local_88[0];
  uVar5 = CONCAT71((int7)(uVar7 >> 8),*(undefined1 *)((longlong)param_9 + 0x13));
  FUN_01d57290(param_1,*(undefined1 *)(param_9 + 2),param_4,
               *(undefined1 *)((longlong)param_9 + 0x12),uVar5,&local_90,param_9 + 4);
  uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  FUN_016ebe60(param_1,*(char *)(param_9 + 3) + '\x05',param_5,
               *(undefined1 *)((longlong)param_9 + 0x11),uVar5);
  uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  FUN_016ebe60(param_1,*(char *)(param_9 + 3) + '\a',*(undefined1 *)((longlong)param_9 + 0x11),
               param_6,uVar5);
  uVar7 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  FUN_016ebfa0(param_1,*(char *)(param_9 + 3) + '\x06',param_5,param_6,uVar7);
  uVar7 = uVar7 & 0xffffffffffffff00;
  FUN_016ebe60(param_1,*(char *)(param_9 + 3) + '\b',*(undefined1 *)((longlong)param_9 + 0x13),0,
               uVar7);
  local_90 = local_88[3];
  FUN_01d57290(param_1,*(undefined1 *)((longlong)param_9 + 0x11),param_6,
               *(undefined1 *)((longlong)param_9 + 0x13),uVar7 & 0xffffffffffffff00,&local_90,
               param_9 + 9);
  FUN_016ebfa0(param_1,*(char *)(param_9 + 3) + '\t',param_5,param_3,1);
  dVar6 = 1.0 - local_50;
  if (*(char *)(param_9 + 0xe) == '\x01') {
    FUN_011646d0(param_1,param_2,*(undefined1 *)((longlong)param_9 + 0x12),0,
                 *(undefined1 *)((longlong)param_9 + 0x15),*(undefined1 *)((longlong)param_9 + 0x14)
                 ,param_8,param_9 + 0xf);
    unaff_XMM6_Qa = ((dVar6 / local_50) * (double)param_9[0x10]) / (double)param_9[0xf];
  }
  else if (*(char *)(param_9 + 0xe) == '\x02') {
    FUN_01163ad0(param_1,*(undefined1 *)((longlong)param_9 + 0x12),0,
                 *(undefined1 *)((longlong)param_9 + 0x15),*(undefined1 *)((longlong)param_9 + 0x14)
                 ,param_8,param_9 + 0xf);
    unaff_XMM6_Qa = ((dVar6 / local_50) * (double)param_9[0x10]) / (double)param_9[0xf];
  }
  else {
    FUN_01b04d70(0x134,&LAB_01d57e34,0);
  }
  FUN_016ed320(param_1,*(char *)(param_9 + 3) + '\x01',0,1.0 / local_88[1],0);
  FUN_016ed220(param_1,*(char *)(param_9 + 3) + '\x02',local_88[2],0);
  FUN_016ed320(param_1,*(char *)(param_9 + 3) + '\x03',0,0x3eb0c6f7a0b5ed8d,0);
  FUN_016ed320(param_1,*(char *)(param_9 + 3) + '\x05',0,1.0 / local_68,0);
  FUN_016ed220(param_1,*(char *)(param_9 + 3) + '\x06',local_60,0);
  FUN_016ed320(param_1,*(char *)(param_9 + 3) + '\a',0,0x3eb0c6f7a0b5ed8d,0);
  FUN_016ed220(param_1,*(char *)(param_9 + 3) + '\t',local_58,0);
  FUN_016ed320(param_1,*(char *)(param_9 + 3) + '\x04',0,unaff_XMM6_Qa,0);
  FUN_016ed320(param_1,*(char *)(param_9 + 3) + '\b',0,unaff_XMM6_Qa,0);
  return;
}

