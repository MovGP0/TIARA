/* Ghidra address: 00de9cb0 */
/* Ghidra symbol: FUN_00de9cb0 */


void FUN_00de9cb0(ushort *param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                 undefined1 param_5,byte param_6)

{
  byte bVar1;
  undefined8 in_RAX;
  bool bVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  undefined1 local_58 [8];
  double local_50 [5];
  
  bVar1 = (byte)param_4;
  if (bVar1 < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (bVar1 & 0x1f) & 0x42U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    dVar3 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),1,2,0);
    if (*(double *)(param_1 + 4) == 0.0) {
      dVar5 = 0.0;
    }
    else {
      dVar5 = (dVar3 * dVar3) / *(double *)(param_1 + 4);
    }
    if (bVar1 == 6) {
      FUN_016e2b00(param_2,param_3,*param_1 + 1,param_4,dVar5,local_50,local_58,0,0,1);
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,*param_1 + 1,local_50[0],0);
    }
    uVar4 = FUN_0040c850(dVar3);
    FUN_01b08a60(param_3,param_2,2,param_5,uVar4,*(undefined8 *)(param_1 + 0xc),1);
    if (bVar1 == 1) {
      uVar4 = FUN_0040c850(dVar5);
      FUN_01b08a60(param_3,param_2,1,param_5,uVar4,*(undefined8 *)(param_1 + 8),1);
    }
    if ((param_6 & bVar1 == 6) != 0) {
      dVar3 = (double)FUN_01d0e4e0(param_3 + 0x5d8);
      FUN_01b08a60(param_3,param_2,1,param_5,local_50[0] / dVar3,*(undefined8 *)(param_1 + 8),1);
    }
  }
  return;
}

