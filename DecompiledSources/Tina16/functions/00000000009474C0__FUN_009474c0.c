/* Ghidra address: 009474c0 */
/* Ghidra symbol: FUN_009474c0 */


undefined8 FUN_009474c0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  short *psVar4;
  longlong lVar5;
  int iVar6;
  undefined8 local_40 [2];
  longlong local_30 [2];
  
  local_40[0] = 0;
  local_30[0] = 0;
  uVar3 = 0;
  if (param_2 != 0) {
    uVar3 = *(uint *)(param_2 + -4) >> 1;
  }
  FUN_00419260(local_30,&DAT_00947478,1,uVar3);
  iVar6 = 0;
  psVar4 = (short *)FUN_00415f70(param_2);
  while( true ) {
    cVar2 = FUN_008ff300(*psVar4);
    if (cVar2 == '\0') break;
    psVar4 = psVar4 + 1;
  }
  bVar1 = false;
  for (; *psVar4 != DAT_01e32930; psVar4 = psVar4 + 1) {
    cVar2 = FUN_008ff300(*psVar4);
    if (cVar2 == '\0') {
      if (bVar1) {
        *(undefined2 *)(local_30[0] + (longlong)iVar6 * 2) = DAT_01e32932;
        iVar6 = iVar6 + 1;
        bVar1 = false;
      }
      *(short *)(local_30[0] + (longlong)iVar6 * 2) = *psVar4;
      iVar6 = iVar6 + 1;
    }
    else {
      bVar1 = true;
    }
  }
  lVar5 = 0;
  if (local_30[0] != 0) {
    lVar5 = *(longlong *)(local_30[0] + -8);
  }
  FUN_00456310(local_40,local_30[0],lVar5 + -1,0,iVar6);
  FUN_004168e0(param_1,local_40[0]);
  FUN_00414480(local_40);
  FUN_00419430(local_30,&DAT_00947478);
  return param_1;
}

