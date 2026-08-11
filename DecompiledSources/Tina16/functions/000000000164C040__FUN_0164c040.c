/* Ghidra address: 0164c040 */
/* Ghidra symbol: FUN_0164c040 */


void FUN_0164c040(int *param_1,longlong param_2,longlong param_3,undefined4 param_4,
                 undefined1 param_5,byte param_6)

{
  double dVar1;
  byte bVar2;
  bool bVar3;
  double dVar4;
  undefined8 uVar5;
  undefined1 local_48 [8];
  double local_40 [3];
  
  bVar2 = (byte)param_4;
  if (bVar2 < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (bVar2 & 0x1f) & 0x42U) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    if ((*(char *)(param_2 + 4) == '\x01') &&
       (**(char **)(*(longlong *)(param_2 + 0x40) + -8 + (longlong)(*param_1 + 1) * 8) == '\t')) {
      dVar4 = (double)FUN_016ee520(param_2,*(undefined8 *)(param_3 + 0x118),(char)*param_1 + '\x01',
                                   2,0);
    }
    else {
      dVar4 = (double)FUN_016ee520(param_2,*(undefined8 *)(param_3 + 0x118),(char)*param_1 + '\x01',
                                   1,0);
    }
    dVar1 = *(double *)(param_1 + 0x22);
    if (bVar2 == 6) {
      FUN_016e2b00(param_2,param_3,*(ushort *)((longlong)param_1 + 0x9a) + 1,param_4,dVar4 * dVar1,
                   local_40,local_48,0,0,1);
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)((longlong)param_1 + 0x9a) + 1,local_40[0],0)
      ;
    }
    if (bVar2 == 1) {
      uVar5 = FUN_0040c850(dVar4 * dVar1);
      FUN_01b08a60(param_3,param_2,1,param_5,uVar5,0x54b249ad2594c37d,1);
    }
    if ((param_6 & bVar2 == 6) != 0) {
      dVar4 = (double)FUN_01d0e4e0(param_3 + 0x5d8);
      FUN_01b08a60(param_3,param_2,1,param_5,local_40[0] / dVar4,0x54b249ad2594c37d,1);
    }
  }
  return;
}

