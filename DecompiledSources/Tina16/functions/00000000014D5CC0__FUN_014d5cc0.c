/* Ghidra address: 014d5cc0 */
/* Ghidra symbol: FUN_014d5cc0 */


void FUN_014d5cc0(char *param_1,undefined8 param_2,longlong param_3,char param_4)

{
  double dVar1;
  undefined8 in_RAX;
  bool bVar2;
  double dVar3;
  double dVar4;
  undefined1 local_79;
  double local_78;
  double local_70;
  double local_68;
  double local_60 [8];
  
  if ((byte)(param_4 - 8U) < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_4 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar2 = false;
  }
  if ((!bVar2) && ((*(byte *)(param_3 + 0x88) & 0x20) == 0)) {
    if ((*(byte *)(param_3 + 0x88) & 2) == 0) {
      dVar3 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[1],param_1[2],0)
      ;
    }
    else {
      dVar3 = 0.0;
    }
    local_60[0] = (double)FUN_0040c850(dVar3);
    FUN_00daa3d0(dVar3,*(undefined8 *)(param_1 + 0x50),0,0,0x3f847ae147ae147b,0xbff0000000000000,
                 0x3ff0000000000000,local_60,&local_78,&local_68,&local_79);
    *(double *)(param_1 + 0x50) = local_68;
    FUN_016e9f80(param_2,param_3,local_79,0x12);
    local_60[0] = local_60[0] * *(double *)(param_1 + 0x10) + *(double *)(param_1 + 0x38);
    local_78 = local_78 * *(double *)(param_1 + 0x10);
    dVar1 = *(double *)(param_1 + 0x10);
    param_1[0x60] = '\0';
    param_1[0x61] = '\0';
    param_1[0x62] = '\0';
    param_1[99] = '\0';
    param_1[100] = '\0';
    param_1[0x65] = '\0';
    param_1[0x66] = '\0';
    param_1[0x67] = '\0';
    param_1[0x68] = '\0';
    param_1[0x69] = '\0';
    param_1[0x6a] = '\0';
    param_1[0x6b] = '\0';
    param_1[0x6c] = '\0';
    param_1[0x6d] = '\0';
    param_1[0x6e] = '\0';
    param_1[0x6f] = '\0';
    local_70 = 0.0;
    local_79 = 0;
    if (dVar3 <= 0.0) {
      dVar4 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x30));
      if (0.0 < dVar4) {
        dVar4 = -*(double *)(param_1 + 0x30) * *(double *)(param_1 + 8) * -0.1;
        FUN_00daa3d0(dVar3,*(undefined8 *)(param_1 + 0x58),
                     -*(double *)(param_1 + 0x30) * *(double *)(param_1 + 8) - dVar4,0,dVar4,
                     dVar1 * 20000.0,0,param_1 + 0x60,param_1 + 0x68,&local_70,&local_79);
      }
    }
    else if (0.0 < *(double *)(param_1 + 0x28)) {
      dVar4 = *(double *)(param_1 + 0x28) * *(double *)(param_1 + 8) * 0.1;
      FUN_00daa3d0(dVar3,*(undefined8 *)(param_1 + 0x58),
                   *(double *)(param_1 + 0x28) * *(double *)(param_1 + 8) + dVar4,0,dVar4,0,
                   dVar1 * 20000.0,param_1 + 0x60,param_1 + 0x68,&local_70,&local_79);
    }
    *(double *)(param_1 + 0x58) = local_70;
    FUN_016e9f80(param_2,param_3,local_79,0x13);
    local_60[0] = local_60[0] - local_78 * local_68;
    *(double *)(param_1 + 0x60) =
         *(double *)(param_1 + 0x60) - *(double *)(param_1 + 0x68) * local_70;
    FUN_016ed320(param_2,*param_1 + '\x01',local_60[0],*(undefined8 *)(param_3 + 0x430),0);
    FUN_016ed220(param_2,*param_1 + '\x02',local_78,0);
    FUN_016ed320(param_2,*param_1 + '\a',*(undefined8 *)(param_1 + 0x60),
                 *(double *)(param_1 + 0x68) + *(double *)(param_3 + 0x430),0);
  }
  return;
}

