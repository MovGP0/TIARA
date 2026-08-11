/* Ghidra address: 00f5ac20 */
/* Ghidra symbol: FUN_00f5ac20 */


void FUN_00f5ac20(char *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 in_RAX;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  undefined1 local_61;
  double local_60;
  undefined1 local_58 [8];
  double local_50 [4];
  
  cVar1 = (char)param_4;
  if ((byte)(cVar1 - 8U) < 8) {
    bVar7 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (cVar1 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar7 = false;
  }
  if (bVar7) {
    if (cVar1 == '\f') {
      if (*(double *)(param_1 + 0x18) <= 0.0) {
        uVar3 = 0;
      }
      else {
        dVar8 = (double)FUN_016ed770(param_3);
        uVar3 = FUN_0040c760(((dVar8 + 273.15) * 5.5224904e-23) / *(double *)(param_1 + 0x18));
      }
      FUN_016ed220(param_2,param_1[1] + '\x04',uVar3,0);
    }
  }
  else if ((*(byte *)(param_3 + 0x88) & 0x20) == 0) {
    if ((*(byte *)(param_3 + 0x88) & 2) == 0) {
      if ((*(byte *)(param_3 + 0x88) & 4) == 0) {
        FUN_016ee520(param_2,*(undefined8 *)(param_3 + 0x118),param_1[1] + '\x02',1,0);
        dVar8 = (double)FUN_0040c850();
      }
      else {
        dVar8 = *(double *)(param_1 + 0x40);
      }
    }
    else {
      dVar8 = *(double *)(param_1 + 0x40);
    }
    dVar9 = (*(double *)(param_1 + 0x28) + *(double *)(param_1 + 0x30)) / 2.0;
    FUN_00daab50(param_2,param_3,param_1[0x38],param_4,dVar8,dVar9 - 1e-09,dVar9 + 1e-09,
                 (*(double *)(param_1 + 0x28) - *(double *)(param_1 + 0x30)) / 2.0,0,
                 0x4014000000000000,0,0,local_58,local_50,&local_60);
    lVar2 = FUN_0041f930();
    *(undefined8 *)(lVar2 + 0x280) = 0x4014000000000000;
    local_50[0] = (double)(**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x18))
                                    (*(longlong *)(param_1 + 8),param_2,param_3,local_50[0],cVar1);
    if (param_1[0x10] == '\0') {
      FUN_016ed320(param_2,param_1[1] + '\x03',local_50[0],0,0);
      FUN_016ed220(param_2,param_1[1] + '\x06',0,0);
    }
    else {
      FUN_016ed320(param_2,param_1[1] + '\x03',local_50[0] - local_60 * dVar8,0,0);
      FUN_016ed220(param_2,param_1[1] + '\x06',local_60,0);
    }
    bVar5 = 1;
    for (cVar6 = param_1[0x4a]; cVar6 != '\0'; cVar6 = cVar6 + -1) {
      FUN_00f560e0(*(longlong *)(param_1 + 0x50) + -0x88 + (ulonglong)bVar5 * 0x88,param_2,param_3,
                   param_4);
      bVar5 = bVar5 + 1;
    }
    if (*param_1 == '\x02') {
      local_61 = *(char *)(*(longlong *)(param_1 + 0x50) + 0x80) == '\0';
    }
    else {
      local_61 = *(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x80);
    }
    uVar3 = FUN_016ebdc0(param_2);
    FUN_01d04b50(uVar3,&local_61);
    if ((cVar1 == '\x01') && (*PTR_DAT_02002b78 != '\0')) {
      uVar3 = FUN_016ebdc0(param_2);
      uVar4 = FUN_019a45d0();
      uVar4 = FUN_0198d430(uVar4);
      FUN_01d04bd0(uVar3,uVar4);
    }
    lVar2 = FUN_016ebdc0(param_2);
    *(double *)(lVar2 + 0x3d8) = dVar8;
    lVar2 = FUN_016ebdc0(param_2);
    *(undefined1 *)(lVar2 + 0x3d4) = 1;
  }
  else {
    param_1[0x40] = '\0';
    param_1[0x41] = '\0';
    param_1[0x42] = '\0';
    param_1[0x43] = '\0';
    param_1[0x44] = '\0';
    param_1[0x45] = '\0';
    param_1[0x46] = '\0';
    param_1[0x47] = '\0';
    lVar2 = FUN_016ebdc0(param_2);
    if (*(char *)(lVar2 + 0x3d4) != '\0') {
      lVar2 = FUN_016ebdc0(param_2);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar2 + 0x3d8);
    }
    FUN_016ee590(param_2,*(undefined8 *)(param_3 + 0x118),param_1[1] + '\x02',1,
                 *(undefined8 *)(param_1 + 0x40),0);
  }
  return;
}

