/* Ghidra address: 014d66a0 */
/* Ghidra symbol: FUN_014d66a0 */


void FUN_014d66a0(char *param_1,undefined8 param_2,longlong param_3,char param_4)

{
  undefined8 in_RAX;
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 local_51;
  double local_50 [6];
  
  if ((byte)(param_4 - 8U) < 8) {
    bVar1 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_4 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar1 = false;
  }
  if ((!bVar1) && ((*(byte *)(param_3 + 0x88) & 0x20) == 0)) {
    if ((*(byte *)(param_3 + 0x88) & 2) == 0) {
      dVar2 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[1],param_1[2],0)
      ;
    }
    else {
      dVar2 = 0.0;
    }
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
    local_50[0] = 0.0;
    local_51 = 0;
    if (dVar2 <= 0.0) {
      dVar3 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x30));
      if (0.0 < dVar3) {
        dVar3 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x30));
        dVar4 = -dVar3 * *(double *)(param_1 + 8) * -0.1;
        FUN_00daa3d0(dVar2,*(undefined8 *)(param_1 + 0x58),-dVar3 * *(double *)(param_1 + 8) - dVar4
                     ,0,dVar4,0x3ff0000000000000,0,param_1 + 0x60,param_1 + 0x68,local_50,&local_51)
        ;
      }
    }
    else if (0.0 < *(double *)(param_1 + 0x28)) {
      dVar3 = *(double *)(param_1 + 0x28) * *(double *)(param_1 + 8) * 0.25;
      FUN_00daa3d0(dVar2,*(undefined8 *)(param_1 + 0x58),
                   *(double *)(param_1 + 0x28) * *(double *)(param_1 + 8) + dVar3,0,dVar3,0,
                   0x3ff0000000000000,param_1 + 0x60,param_1 + 0x68,local_50,&local_51);
    }
    *(double *)(param_1 + 0x58) = local_50[0];
    FUN_016e9f80(param_2,param_3,local_51,0x15);
    *(double *)(param_1 + 0x60) =
         *(double *)(param_1 + 0x60) - *(double *)(param_1 + 0x68) * local_50[0];
    FUN_016ed320(param_2,*param_1 + '\x03',*(undefined8 *)(param_1 + 0x60),
                 *(double *)(param_1 + 0x68) + *(double *)(param_3 + 0x430),0);
  }
  return;
}

