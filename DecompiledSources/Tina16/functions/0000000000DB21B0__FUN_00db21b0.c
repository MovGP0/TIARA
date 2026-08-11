/* Ghidra address: 00db21b0 */
/* Ghidra symbol: FUN_00db21b0 */


void FUN_00db21b0(undefined1 *param_1,undefined8 param_2,longlong param_3,char param_4)

{
  char cVar1;
  undefined8 in_RAX;
  bool bVar2;
  double dVar3;
  undefined8 uVar4;
  undefined1 local_41;
  double local_40 [3];
  
  cVar1 = '\0';
  if ((byte)(param_4 - 8U) < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_4 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar2 = false;
  }
  if ((!bVar2) && ((*(byte *)(param_3 + 0x88) & 0x20) == 0)) {
    if ((*(byte *)(param_3 + 0x88) & 2) == 0) {
      if (((*(byte *)(param_3 + 0x88) & 4) == 0) || (param_1[0x40] == '\0')) {
        dVar3 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[2],param_1[3],
                                     0);
        cVar1 = '\0';
        if (*(char *)(param_3 + 0x32f) != '\0') {
          cVar1 = FUN_00db1fd0(param_3,dVar3,local_40,param_1);
        }
        if (cVar1 == '\0') {
          dVar3 = (double)FUN_00c42ff0(dVar3,*(undefined8 *)(param_1 + 0x20),
                                       *(undefined8 *)(param_1 + 0x30),
                                       *(undefined8 *)(param_1 + 0x38),&local_41);
          FUN_016e9f80(param_2,param_3,local_41,100);
        }
      }
      else {
        dVar3 = 0.0;
      }
    }
    else if ((*(byte *)(param_3 + 0x88) & 0x10) == 0) {
      if (param_1[0x40] == '\0') {
        dVar3 = *(double *)(param_1 + 0x38);
      }
      else {
        dVar3 = 0.0;
      }
    }
    else {
      dVar3 = *(double *)(param_1 + 0x48);
    }
    if (cVar1 == '\0') {
      *(double *)(param_1 + 0x20) = dVar3;
      uVar4 = FUN_00c42b60(dVar3,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28),
                           0x3ff0000000000000,*(undefined8 *)(param_3 + 0x430),param_1 + 0x10,
                           param_1 + 0x18);
      *(undefined8 *)(param_1 + 8) = uVar4;
      local_40[0] = *(double *)(param_1 + 8);
    }
    FUN_016ed320(param_2,*param_1,local_40[0] - *(double *)(param_1 + 0x10) * dVar3,
                 *(undefined8 *)(param_1 + 0x10),0);
  }
  return;
}

