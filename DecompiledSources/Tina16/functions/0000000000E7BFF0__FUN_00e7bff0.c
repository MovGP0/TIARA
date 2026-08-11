/* Ghidra address: 00e7bff0 */
/* Ghidra symbol: FUN_00e7bff0 */


void FUN_00e7bff0(char *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double local_50 [4];
  
  if ((*(byte *)(param_3 + 0x88) & 0x20) == 0) {
    bVar1 = (char)param_4 - 8;
    if (7 < bVar1 || (1 << (bVar1 & 0x1f) & 0x11U) == 0) {
      dVar3 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[2],param_1[4],0)
      ;
      dVar4 = (double)FUN_00e7bf10(dVar3,*(undefined8 *)(param_1 + 0x10),
                                   *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28),
                                   local_50);
      FUN_016ed320(param_2,*param_1 + '\a',dVar4 - dVar3 * local_50[0],local_50[0],0);
    }
    FUN_016ee520(param_2,*(undefined8 *)(param_3 + 0x118),*param_1 + '\x13',1,0);
    iVar2 = 3;
    param_1 = param_1 + 0x48;
    do {
      FUN_00db21b0(param_1,param_2,param_3,param_4);
      param_1 = param_1 + 0x50;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

