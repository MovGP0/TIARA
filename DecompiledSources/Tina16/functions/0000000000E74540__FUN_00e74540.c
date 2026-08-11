/* Ghidra address: 00e74540 */
/* Ghidra symbol: FUN_00e74540 */


void FUN_00e74540(short *param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                 undefined1 param_5,byte param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  char cVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  double local_a8;
  double local_a0;
  double local_98;
  undefined1 local_90 [104];
  
  dVar8 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),(char)param_1[2],
                               *(undefined1 *)((longlong)param_1 + 7),0);
  sVar4 = *param_1;
  dVar9 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),(char)param_1[2],
                               (char)param_1[3],0);
  sVar5 = *param_1;
  dVar10 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),(char)param_1[3],
                                *(undefined1 *)((longlong)param_1 + 7),0);
  sVar6 = *param_1;
  dVar11 = (double)FUN_0040c850(*(double *)(param_1 + 0xc) * (double)(int)sVar4 * dVar8);
  dVar12 = (double)FUN_0040c850(*(double *)(param_1 + 0x10) * (double)(int)sVar6 * dVar10);
  dVar14 = *(double *)(param_1 + 0xc);
  dVar1 = *(double *)(param_1 + 0xc);
  dVar2 = *(double *)(param_1 + 0x10);
  dVar3 = *(double *)(param_1 + 0x10);
  cVar7 = (char)param_4;
  if (cVar7 == '\x06') {
    FUN_016e2b00(param_2,param_3,(ushort)param_1[0x8b] + 1,param_4,dVar11 + dVar12,&local_98,
                 local_90,0,0,1);
    FUN_016e2b00(param_2,param_3,(ushort)param_1[0x8b] + 3,param_4,dVar14 * dVar1,&local_a0,local_90
                 ,0,0,1);
    FUN_016e2b00(param_2,param_3,(ushort)param_1[0x8b] + 5,param_4,dVar2 * dVar3,&local_a8,local_90,
                 0,0,1);
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x8b] + 1,local_98,0);
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x8b] + 3,local_a0,0);
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x8b] + 5,local_a8,0);
  }
  uVar13 = FUN_0040c850((double)(int)sVar4 * dVar8);
  FUN_01b08a60(param_3,param_2,0xd,param_5,uVar13,*(undefined8 *)(param_1 + 0x68),1);
  uVar13 = FUN_0040c850((double)(int)sVar5 * dVar9);
  FUN_01b08a60(param_3,param_2,0xe,param_5,uVar13,*(undefined8 *)(param_1 + 0x6c),1);
  uVar13 = FUN_0040c850((double)(int)sVar6 * dVar10);
  FUN_01b08a60(param_3,param_2,0x10,param_5,uVar13,*(undefined8 *)(param_1 + 0x70),1);
  if (cVar7 == '\x01') {
    uVar13 = FUN_0040c850(*(undefined8 *)(param_1 + 0xc));
    FUN_01b08a60(param_3,param_2,0x11,param_5,uVar13,*(undefined8 *)(param_1 + 0x74),1);
    uVar13 = FUN_0040c850(*(undefined8 *)(param_1 + 0x10));
    FUN_01b08a60(param_3,param_2,0x12,param_5,uVar13,*(undefined8 *)(param_1 + 0x78),1);
    FUN_01b08a60(param_3,param_2,1,param_5,dVar11 + dVar12,*(undefined8 *)(param_1 + 0x7c),1);
  }
  if ((param_6 & cVar7 == '\x06') != 0) {
    dVar14 = (double)FUN_01d0e4e0(param_3 + 0x5d8);
    uVar13 = FUN_0040c760(local_a0 / dVar14);
    FUN_01b08a60(param_3,param_2,0x11,param_5,uVar13,*(undefined8 *)(param_1 + 0x74),1);
    dVar14 = (double)FUN_01d0e4e0(param_3 + 0x5d8);
    uVar13 = FUN_0040c760(local_a8 / dVar14);
    FUN_01b08a60(param_3,param_2,0x12,param_5,uVar13,*(undefined8 *)(param_1 + 0x78),1);
    dVar14 = (double)FUN_01d0e4e0(param_3 + 0x5d8);
    FUN_01b08a60(param_3,param_2,1,param_5,local_98 / dVar14,*(undefined8 *)(param_1 + 0x7c),1);
  }
  return;
}

