/* Ghidra address: 014e46f0 */
/* Ghidra symbol: FUN_014e46f0 */


void FUN_014e46f0(longlong param_1,byte *param_2,byte *param_3,double param_4,double param_5,
                 double param_6,int param_7,longlong param_8)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  byte *pbVar5;
  double dVar6;
  undefined8 local_230;
  byte local_228 [256];
  byte local_128 [264];
  
  local_230 = 0;
  lVar4 = (ulonglong)*param_2 + 1;
  pbVar5 = local_128;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pbVar5 = *param_2;
    param_2 = param_2 + 1;
    pbVar5 = pbVar5 + 1;
  }
  lVar4 = (ulonglong)*param_3 + 1;
  pbVar5 = local_228;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pbVar5 = *param_3;
    param_3 = param_3 + 1;
    pbVar5 = pbVar5 + 1;
  }
  iVar3 = FUN_00414f50(local_128,&DAT_014e49f8,(ulonglong)local_128[0] + 1);
  if (iVar3 == 0) {
    *(undefined1 *)(param_8 + 3) = 1;
    psVar1 = (short *)(param_8 + 0x416);
    *(double *)(param_8 + 0x418) = param_4;
    *(double *)(param_8 + 0x420) = param_5;
    iVar3 = FUN_00414f50(local_228,&DAT_014e49fd,(ulonglong)local_228[0] + 1);
    if (iVar3 == 0) {
      sVar2 = FUN_0040c840((param_5 - param_4) / param_6);
      *psVar1 = sVar2 + 1;
      *(undefined1 *)(param_8 + 0x430) = 0;
    }
    else {
      dVar6 = (double)FUN_00c42800(param_5 / param_4);
      sVar2 = FUN_0040c840(dVar6 * (double)param_7);
      *psVar1 = sVar2 + 1;
      *(undefined1 *)(param_8 + 0x430) = 1;
    }
    *(double *)(param_8 + 0xbd) = (double)(int)*psVar1;
  }
  else {
    FUN_004169a0(&local_230,local_128);
    iVar3 = FUN_004170c0(L"PARAM",local_230,1);
    if (iVar3 == 1) {
      *(undefined1 *)(param_8 + 3) = 7;
    }
    else {
      *(undefined1 *)(param_8 + 3) = 2;
    }
    *(double *)(param_8 + 0x53d) = param_4;
    *(double *)(param_8 + 0x545) = param_5;
    iVar3 = FUN_00414f50(local_228,&DAT_014e49fd,(ulonglong)local_228[0] + 1);
    if (iVar3 == 0) {
      FUN_0040c850((param_5 - param_4) / param_6);
      sVar2 = FUN_0040c840();
      *(short *)(param_8 + 0x54d) = sVar2 + 1;
      *(undefined1 *)(param_8 + 0x54f) = 0;
    }
    else {
      FUN_00c42800(param_5 / param_4);
      dVar6 = (double)FUN_0040c850();
      sVar2 = FUN_0040c840(dVar6 * (double)param_7);
      *(short *)(param_8 + 0x54d) = sVar2 + 1;
      *(undefined1 *)(param_8 + 0x54f) = 1;
    }
    *(double *)(param_8 + 0xbd) = (double)(int)*(short *)(param_8 + 0x54d);
    *(undefined2 *)(param_8 + 0x558) = 0x2d01;
    *(undefined8 *)(param_8 + 0x550) = 0;
    if (param_1 != 0) {
      lVar4 = FUN_004095c0(0x23a);
      *(undefined8 *)(lVar4 + 0x10c) = *(undefined8 *)(param_8 + 0x53d);
      *(undefined8 *)(lVar4 + 0x114) = *(undefined8 *)(param_8 + 0x545);
      *(undefined2 *)(lVar4 + 0x11c) = *(undefined2 *)(param_8 + 0x54d);
      *(undefined1 *)(lVar4 + 0x11e) = *(undefined1 *)(param_8 + 0x54f);
      *(undefined8 *)(lVar4 + 0x11f) = *(undefined8 *)(param_8 + 0x550);
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x470),lVar4);
    }
  }
  FUN_00414480(&local_230);
  return;
}

