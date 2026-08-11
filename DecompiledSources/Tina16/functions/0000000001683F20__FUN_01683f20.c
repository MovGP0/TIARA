/* Ghidra address: 01683f20 */
/* Ghidra symbol: FUN_01683f20 */


void FUN_01683f20(short *param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
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
  
  dVar8 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                               *(undefined1 *)((longlong)param_1 + 5),
                               *(undefined1 *)((longlong)param_1 + 7),0);
  sVar4 = *param_1;
  dVar9 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                               *(undefined1 *)((longlong)param_1 + 5),(char)param_1[3],0);
  sVar5 = *param_1;
  dVar10 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),(char)param_1[3],
                                *(undefined1 *)((longlong)param_1 + 7),0);
  sVar6 = *param_1;
  dVar11 = (double)FUN_0040c850(*(double *)(param_1 + 0x14) * (double)(int)sVar6 * dVar10);
  dVar12 = (double)FUN_0040c850(*(double *)(param_1 + 8) * (double)(int)sVar4 * dVar8);
  dVar14 = *(double *)(param_1 + 0x14);
  dVar1 = *(double *)(param_1 + 0x14);
  dVar2 = *(double *)(param_1 + 8);
  dVar3 = *(double *)(param_1 + 8);
  cVar7 = (char)param_4;
  if (cVar7 == '\x06') {
    FUN_016e2b00(param_2,param_3,(ushort)param_1[0x5d] + 1,param_4,dVar11 + dVar12,&local_98,
                 local_90,0,0,1);
    FUN_016e2b00(param_2,param_3,(ushort)param_1[0x5d] + 3,param_4,dVar14 * dVar1,&local_a0,local_90
                 ,0,0,1);
    FUN_016e2b00(param_2,param_3,(ushort)param_1[0x5d] + 5,param_4,dVar2 * dVar3,&local_a8,local_90,
                 0,0,1);
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5d] + 1,local_98,0);
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5d] + 3,local_a0,0);
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,param_1[0x5d] + 5,local_a8,0);
  }
  FUN_01b08a60(param_3,param_2,8,param_5,(double)(int)sVar6 * dVar10,*(undefined8 *)(param_1 + 0x44)
               ,1);
  FUN_01b08a60(param_3,param_2,9,param_5,-((double)(int)sVar5 * dVar9),
               *(undefined8 *)(param_1 + 0x48),1);
  FUN_01b08a60(param_3,param_2,10,param_5,-((double)(int)sVar4 * dVar8),
               *(undefined8 *)(param_1 + 0x4c),1);
  if (cVar7 == '\x01') {
    uVar13 = FUN_0040c850(*(undefined8 *)(param_1 + 0x14));
    FUN_01b08a60(param_3,param_2,0xb,param_5,uVar13,*(undefined8 *)(param_1 + 0x50),1);
    uVar13 = FUN_0040c850(*(undefined8 *)(param_1 + 8));
    FUN_01b08a60(param_3,param_2,0xc,param_5,uVar13,*(undefined8 *)(param_1 + 0x54),1);
    FUN_01b08a60(param_3,param_2,1,param_5,dVar11 + dVar12,*(undefined8 *)(param_1 + 0x58),1);
  }
  if ((param_6 & cVar7 == '\x06') != 0) {
    dVar14 = (double)FUN_01d0e4e0(param_3 + 0x5d8);
    uVar13 = FUN_0040c760(local_a0 / dVar14);
    FUN_01b08a60(param_3,param_2,0xb,param_5,uVar13,*(undefined8 *)(param_1 + 0x50),1);
    dVar14 = (double)FUN_01d0e4e0(param_3 + 0x5d8);
    uVar13 = FUN_0040c760(local_a8 / dVar14);
    FUN_01b08a60(param_3,param_2,0xc,param_5,uVar13,*(undefined8 *)(param_1 + 0x54),1);
    dVar14 = (double)FUN_01d0e4e0(param_3 + 0x5d8);
    FUN_01b08a60(param_3,param_2,1,param_5,local_98 / dVar14,*(undefined8 *)(param_1 + 0x58),1);
  }
  return;
}

