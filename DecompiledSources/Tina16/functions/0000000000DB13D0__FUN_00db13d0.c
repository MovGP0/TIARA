/* Ghidra address: 00db13d0 */
/* Ghidra symbol: FUN_00db13d0 */


void FUN_00db13d0(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                 undefined1 param_5,byte param_6)

{
  double dVar1;
  char cVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double local_78;
  undefined8 local_70;
  double local_68;
  undefined1 local_60 [56];
  
  dVar3 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),*(undefined1 *)(param_1 + 2)
                               ,*(undefined1 *)(param_1 + 4),0);
  dVar5 = *(double *)(param_1 + 0x50) * dVar3;
  dVar4 = *(double *)(param_1 + 0x50);
  dVar1 = *(double *)(param_1 + 0x50);
  cVar2 = (char)param_4;
  if (cVar2 == '\x06') {
    FUN_016e2b00(param_2,param_3,*(ushort *)(param_1 + 0x7a) + 1,param_4,dVar5,&local_68,local_60,0,
                 0,1);
    FUN_016e2b00(param_2,param_3,*(ushort *)(param_1 + 0x7a) + 3,param_4,
                 *(undefined8 *)(param_1 + 0x50),&local_78,local_60,0,0,1);
    FUN_016e2b00(param_2,param_3,*(ushort *)(param_1 + 0x7a) + 5,param_4,dVar4 * dVar1,&local_70,
                 local_60,0,0,1);
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 0x7a) + 1,local_68,0);
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 0x7a) + 3,local_78,0);
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 0x7a) + 5,local_70,0);
  }
  FUN_01b08a60(param_3,param_2,5,param_5,-dVar3,*(undefined8 *)(param_1 + 0x58),1);
  if (cVar2 == '\x01') {
    FUN_01b08a60(param_3,param_2,6,param_5,*(undefined8 *)(param_1 + 8),
                 *(undefined8 *)(param_1 + 0x68),1);
    FUN_01b08a60(param_3,param_2,7,param_5,*(ulonglong *)(param_1 + 8) ^ 0x8000000000000000,
                 *(undefined8 *)(param_1 + 0x60),1);
    FUN_01b08a60(param_3,param_2,1,param_5,dVar5,*(undefined8 *)(param_1 + 0x70),1);
  }
  if ((param_6 & cVar2 == '\x06') != 0) {
    dVar4 = (double)FUN_01d0e4e0(param_3 + 0x5d8);
    FUN_01b08a60(param_3,param_2,6,param_5,local_78 / dVar4,*(undefined8 *)(param_1 + 0x68),1);
    dVar4 = (double)FUN_01d0e4e0(param_3 + 0x5d8);
    FUN_01b08a60(param_3,param_2,7,param_5,-(local_78 / dVar4),*(undefined8 *)(param_1 + 0x60),1);
    dVar4 = (double)FUN_01d0e4e0(param_3 + 0x5d8);
    FUN_01b08a60(param_3,param_2,1,param_5,local_68 / dVar4,*(undefined8 *)(param_1 + 0x70),1);
  }
  return;
}

