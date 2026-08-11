/* Ghidra address: 00947320 */
/* Ghidra symbol: FUN_00947320 */


undefined8 FUN_00947320(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  uint uVar2;
  short *psVar3;
  longlong lVar4;
  int iVar5;
  undefined8 local_30 [2];
  longlong local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = *(uint *)(param_2 + -4) >> 1;
  }
  FUN_00419260(local_20,&DAT_009472d8,1,uVar2);
  iVar5 = 0;
  for (psVar3 = (short *)FUN_00415f70(param_2); *psVar3 == DAT_01e3292e; psVar3 = psVar3 + 1) {
  }
  bVar1 = false;
  for (; *psVar3 != DAT_01e3292c; psVar3 = psVar3 + 1) {
    if (*psVar3 == DAT_01e3292e) {
      bVar1 = true;
    }
    else {
      if (bVar1) {
        *(short *)(local_20[0] + (longlong)iVar5 * 2) = DAT_01e3292e;
        iVar5 = iVar5 + 1;
        bVar1 = false;
      }
      *(short *)(local_20[0] + (longlong)iVar5 * 2) = *psVar3;
      iVar5 = iVar5 + 1;
    }
  }
  lVar4 = 0;
  if (local_20[0] != 0) {
    lVar4 = *(longlong *)(local_20[0] + -8);
  }
  FUN_00456310(local_30,local_20[0],lVar4 + -1,0,iVar5);
  FUN_004168e0(param_1,local_30[0]);
  FUN_00414480(local_30);
  FUN_00419430(local_20,&DAT_009472d8);
  return param_1;
}

