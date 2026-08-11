/* Ghidra address: 01685950 */
/* Ghidra symbol: FUN_01685950 */


void FUN_01685950(short *param_1,undefined8 param_2,longlong param_3,char param_4)

{
  undefined8 in_RAX;
  bool bVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double local_80;
  undefined1 local_78 [8];
  double local_70 [10];
  
  if ((byte)(param_4 - 8U) < 8) {
    bVar1 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_4 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    dVar2 = 0.0;
    uVar4 = 0;
    uVar5 = 0;
    if (*(char *)((longlong)param_1 + 3) == '\x03') {
      dVar2 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),(char)param_1[4],
                                   *(undefined1 *)((longlong)param_1 + 9),0);
      dVar2 = (double)(int)*param_1 * dVar2;
      uVar4 = 0x4069000000000000;
      uVar5 = 0x4034000000000000;
    }
    else if (*(char *)((longlong)param_1 + 3) == '\x04') {
      dVar2 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),(char)param_1[4],
                                   *(undefined1 *)((longlong)param_1 + 7),0);
      dVar2 = (double)(int)*param_1 * dVar2;
      uVar4 = 0x4034000000000000;
      uVar5 = 0x4024000000000000;
    }
    dVar3 = (double)FUN_00c42b60(dVar2,*(undefined8 *)(param_1 + 0x3c),
                                 *(undefined8 *)(param_1 + 0x40),0x3ff0000000000000,
                                 *(undefined8 *)(param_3 + 0x430),local_70,local_78);
    uVar4 = FUN_00c42f90(dVar2,uVar4,uVar5,&local_80);
    *(undefined8 *)(param_1 + 8) = uVar4;
    FUN_016ed320(param_2,(char)param_1[1] + '\x02',
                 (double)(int)*param_1 * (dVar3 + *(double *)(param_1 + 8)),
                 (double)(int)*param_1 * (local_70[0] + local_80),0);
  }
  return;
}

