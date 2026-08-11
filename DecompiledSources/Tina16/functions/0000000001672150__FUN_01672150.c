/* Ghidra address: 01672150 */
/* Ghidra symbol: FUN_01672150 */


void FUN_01672150(int *param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                 undefined1 param_5,byte param_6)

{
  int iVar1;
  int iVar2;
  char cVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double local_a0;
  double local_98;
  undefined1 local_90 [104];
  
  dVar4 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                               *(undefined1 *)((longlong)param_1 + 0xb),(char)param_1[3],0);
  iVar1 = *param_1;
  dVar5 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                               *(undefined1 *)((longlong)param_1 + 0xb),
                               *(undefined1 *)((longlong)param_1 + 0xd),0);
  iVar2 = *param_1;
  dVar6 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                               *(undefined1 *)((longlong)param_1 + 0xd),(char)param_1[3],0);
  dVar6 = (double)*param_1 * dVar6;
  dVar7 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                               *(undefined1 *)((longlong)param_1 + 0xe),(char)param_1[3],0);
  if (param_1[1] < 0) {
    dVar9 = (double)-*param_1 * *(double *)(param_1 + 0x2a);
  }
  else {
    dVar9 = (double)*param_1 * *(double *)(param_1 + 0x2a);
  }
  dVar7 = (dVar9 + (double)*param_1 * (-*(double *)(param_1 + 0x1c) - *(double *)(param_1 + 0x2e)))
          * (double)iVar1 * dVar4 +
          (double)*param_1 *
          (*(double *)(param_1 + 0x2c) + *(double *)(param_1 + 0x2e) + *(double *)(param_1 + 0x30))
          * dVar6 + (double)*param_1 *
                    ((*(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x1c)) -
                    *(double *)(param_1 + 0x30)) * (double)*param_1 * dVar7;
  cVar3 = (char)param_4;
  if (cVar3 == '\x06') {
    FUN_016e2b00(param_2,param_3,*(ushort *)((longlong)param_1 + 0x12a) + 1,param_4,dVar7,&local_98,
                 local_90,0,0,1);
    FUN_016e2b00(param_2,param_3,*(ushort *)((longlong)param_1 + 0x12a) + 3,param_4,dVar9 * dVar9,
                 &local_a0,local_90,0,0,1);
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)((longlong)param_1 + 0x12a) + 1,local_98,0);
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)((longlong)param_1 + 0x12a) + 3,local_a0,0);
  }
  uVar8 = FUN_0040c850((double)iVar1 * dVar4);
  FUN_01b08a60(param_3,param_2,0xd,param_5,uVar8,*(undefined8 *)(param_1 + 0x3e),1);
  uVar8 = FUN_0040c850((double)iVar2 * dVar5);
  FUN_01b08a60(param_3,param_2,0xe,param_5,uVar8,*(undefined8 *)(param_1 + 0x40),1);
  FUN_01b08a60(param_3,param_2,0xf,param_5,dVar6,*(undefined8 *)(param_1 + 0x42),1);
  FUN_01b08a60(param_3,param_2,0x10,param_5,-dVar6,*(undefined8 *)(param_1 + 0x44),1);
  if (cVar3 == '\x01') {
    uVar8 = FUN_0040c850(dVar9);
    FUN_01b08a60(param_3,param_2,0x11,param_5,uVar8,*(undefined8 *)(param_1 + 0x46),1);
    FUN_01b08a60(param_3,param_2,1,param_5,dVar7,*(undefined8 *)(param_1 + 0x48),1);
  }
  if ((param_6 & cVar3 == '\x06') != 0) {
    dVar4 = (double)FUN_01d0e4e0(param_3 + 0x5d8);
    uVar8 = FUN_0040c760(local_a0 / dVar4);
    FUN_01b08a60(param_3,param_2,0x11,param_5,uVar8,*(undefined8 *)(param_1 + 0x46),1);
    dVar4 = (double)FUN_01d0e4e0(param_3 + 0x5d8);
    FUN_01b08a60(param_3,param_2,1,param_5,local_98 / dVar4,*(undefined8 *)(param_1 + 0x48),1);
  }
  return;
}

