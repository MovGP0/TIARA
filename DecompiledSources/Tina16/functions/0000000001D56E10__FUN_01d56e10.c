/* Ghidra address: 01d56e10 */
/* Ghidra symbol: FUN_01d56e10 */


void FUN_01d56e10(double *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  short sVar1;
  double dVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  double local_38;
  double local_30;
  
  if ((char)param_4 == '\b') {
    FUN_016ed320(param_2,*(char *)(param_1 + 3) + '\x01',0,0,0);
    dVar2 = (double)FUN_016ed840(param_3,param_4);
    FUN_016ed320(param_2,*(char *)(param_1 + 3) + '\x04',0,-*param_1 * dVar2,0);
    FUN_016ed320(param_2,*(char *)(param_1 + 3) + '\x02',0,0,0);
    FUN_016ed320(param_2,*(char *)(param_1 + 3) + '\x03',*param_1,0,0);
  }
  else {
    local_38 = 0.0;
    local_30 = 0.0;
    if ((*(byte *)(param_3 + 0x88) & 0x20) == 0) {
      if (((*(byte *)(param_3 + 0x88) & 0x40) == 0) || ((*(byte *)(param_3 + 0x88) & 0x10) == 0)) {
        if ((*(byte *)(param_3 + 0x88) & 2) == 0) {
          FUN_016ee520(param_2,*(undefined8 *)(param_3 + 0x118),*(char *)(param_1 + 3) + '\x01',1,0)
          ;
          uVar3 = FUN_016ee520(param_2,*(undefined8 *)(param_3 + 0x118),
                               *(char *)(param_1 + 3) + '\x02',1,0);
        }
        else {
          uVar3 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,*(short *)((longlong)param_1 + 0x1a) + 1,0)
          ;
        }
      }
      else {
        uVar3 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,*(short *)((longlong)param_1 + 0x1a) + 1,0);
      }
      uVar4 = 0;
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)((longlong)param_1 + 0x1a) + 1,uVar3,0);
      if ((*(byte *)(param_3 + 0x88) & 0x40) != 0) {
        sVar1 = *(short *)((longlong)param_1 + 0x1a) + 1;
        uVar3 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,sVar1,0);
        uVar4 = 0;
        FUN_016eeca0(param_2,param_3 + 0x1b8,1,sVar1,uVar3,0);
      }
      if ((char)param_4 == '\x06') {
        FUN_00dafac0(param_2,param_3,&local_38,&local_30,0x3ff0000000000000,
                     CONCAT44(uVar4,*(ushort *)((longlong)param_1 + 0x1a) + 1),0,1);
      }
      if ((*(byte *)(param_3 + 0x88) & 0x40) != 0) {
        sVar1 = *(short *)((longlong)param_1 + 0x1a) + 2;
        uVar3 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,sVar1,0);
        FUN_016eeca0(param_2,param_3 + 0x1b8,1,sVar1,uVar3,0);
      }
      FUN_016ed320(param_2,*(char *)(param_1 + 3) + '\x04',-*param_1 * local_38,0x3f50624dd2f1a9fc,0
                  );
      FUN_016ed320(param_2,*(char *)(param_1 + 3) + '\x01',-*param_1 * local_30,0,0);
    }
    else {
      if (*(char *)(param_1 + 4) == '\0') {
        dVar2 = (double)FUN_016ee520(param_2,*(undefined8 *)(param_3 + 0x118),
                                     *(char *)(param_1 + 3) + '\x01',1,0);
        param_1[1] = dVar2;
      }
      dVar2 = (double)FUN_016ee520(param_2,*(undefined8 *)(param_3 + 0x118),
                                   *(char *)(param_1 + 3) + '\x02',1,0);
      param_1[2] = dVar2;
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)((longlong)param_1 + 0x1a) + 1,param_1[2],0);
    }
  }
  return;
}

