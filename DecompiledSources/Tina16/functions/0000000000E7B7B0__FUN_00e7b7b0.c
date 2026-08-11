/* Ghidra address: 00e7b7b0 */
/* Ghidra symbol: FUN_00e7b7b0 */


void FUN_00e7b7b0(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                 undefined1 param_5,byte param_6)

{
  char cVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 *in_stack_fffffffffffffef8;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined8 local_d8;
  double local_d0;
  double local_c8;
  undefined1 local_c0 [152];
  
  dVar2 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),*(undefined1 *)(param_1 + 6)
                               ,*(undefined1 *)(param_1 + 7),0);
  uVar3 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),*(undefined1 *)(param_1 + 3),
                       *(undefined1 *)(param_1 + 4),0);
  uVar4 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),*(undefined1 *)(param_1 + 3),
                       *(undefined1 *)(param_1 + 6),0);
  uVar5 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),*(undefined1 *)(param_1 + 3),
                       *(undefined1 *)(param_1 + 7),0);
  uVar6 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),*(undefined1 *)(param_1 + 4),
                       *(undefined1 *)(param_1 + 6),0);
  uVar7 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),*(undefined1 *)(param_1 + 4),
                       *(undefined1 *)(param_1 + 7),0);
  dVar8 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),*(undefined1 *)(param_1 + 5)
                               ,*(undefined1 *)(param_1 + 8),0);
  dVar10 = *(double *)(param_1 + 0x40);
  dVar9 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                               *(undefined1 *)(param_1 + 10),*(undefined1 *)(param_1 + 8),0);
  dVar9 = dVar9 * *(double *)(param_1 + 0x38) - dVar8 / dVar10;
  dVar8 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),*(undefined1 *)(param_1 + 6)
                               ,*(undefined1 *)(param_1 + 5),0);
  dVar10 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                *(undefined1 *)(param_1 + 5),*(undefined1 *)(param_1 + 7),0);
  if (dVar9 <= 0.0) {
    dVar8 = -dVar9 * dVar10;
  }
  else {
    dVar8 = dVar9 * dVar8;
  }
  dVar8 = dVar8 + dVar2 * dVar2 * 6.666666666666667e-05;
  cVar1 = (char)param_4;
  if (cVar1 == '\x06') {
    FUN_016e2b00(param_2,param_3,*(byte *)(param_1 + 0x170) + 1,param_4,dVar8,&local_c8,local_c0,0,0
                 ,1);
    FUN_016e2b00(param_2,param_3,*(byte *)(param_1 + 0x170) + 5,param_4,dVar9,&local_d8,local_c0,0,0
                 ,1);
    in_stack_fffffffffffffef8 = local_c0;
    FUN_016e2b00(param_2,param_3,*(byte *)(param_1 + 0x170) + 3,param_4,dVar9 * dVar9,&local_d0,
                 in_stack_fffffffffffffef8,0,0,1);
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(byte *)(param_1 + 0x170) + 1,local_c8,0);
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(byte *)(param_1 + 0x170) + 5,local_d8,0);
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(byte *)(param_1 + 0x170) + 3,local_d0,0);
  }
  uVar11 = CONCAT71((int7)((ulonglong)in_stack_fffffffffffffef8 >> 8),1);
  FUN_01b08a60(param_3,param_2,0x13,param_5,dVar2,*(undefined8 *)(param_1 + 0x138),uVar11);
  uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
  FUN_01b08a60(param_3,param_2,0x14,param_5,uVar4,*(undefined8 *)(param_1 + 0x140),uVar11);
  uVar12 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
  FUN_01b08a60(param_3,param_2,0x14,param_5,uVar6,*(undefined8 *)(param_1 + 0x140),uVar12);
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_01b08a60(param_3,param_2,0x15,param_5,uVar5,*(undefined8 *)(param_1 + 0x148),uVar12);
  FUN_01b08a60(param_3,param_2,0x15,param_5,uVar7,*(undefined8 *)(param_1 + 0x148),
               uVar12 & 0xffffffffffffff00);
  FUN_01b08a60(param_3,param_2,0x16,param_5,uVar3,*(undefined8 *)(param_1 + 0x150),1);
  if (cVar1 == '\x01') {
    uVar3 = FUN_0040c850(dVar9);
    FUN_01b08a60(param_3,param_2,0x18,param_5,uVar3,*(undefined8 *)(param_1 + 0x160),1);
    FUN_01b08a60(param_3,param_2,1,param_5,dVar8,*(undefined8 *)(param_1 + 0x168),1);
  }
  if ((param_6 & cVar1 == '\x06') != 0) {
    dVar10 = (double)FUN_01d0e4e0(param_3 + 0x5d8);
    uVar3 = FUN_0040c760(local_d0 / dVar10);
    FUN_01b08a60(param_3,param_2,0x18,param_5,uVar3,*(undefined8 *)(param_1 + 0x160),1);
    dVar10 = (double)FUN_01d0e4e0(param_3 + 0x5d8);
    FUN_01b08a60(param_3,param_2,1,param_5,local_c8 / dVar10,*(undefined8 *)(param_1 + 0x168),1);
  }
  return;
}

