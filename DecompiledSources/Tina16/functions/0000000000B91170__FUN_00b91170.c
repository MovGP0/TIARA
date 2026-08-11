/* Ghidra address: 00b91170 */
/* Ghidra symbol: FUN_00b91170 */


void FUN_00b91170(byte *param_1,undefined8 *param_2,undefined1 *param_3,undefined4 *param_4)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined1 auStack_288 [40];
  undefined8 *local_260;
  undefined1 *local_258;
  undefined4 *local_250;
  undefined8 local_248;
  undefined1 local_240 [256];
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130 [2];
  byte local_11b;
  char local_11a [80];
  byte local_ca;
  char local_c9 [80];
  byte local_79;
  byte local_78 [88];
  
  local_248 = 0;
  local_130[0] = 0;
  local_138 = 0;
  local_140 = 0;
  uVar5 = (ulonglong)*param_1;
  if (0x4f < uVar5) {
    uVar5 = 0x50;
  }
  local_79 = (byte)uVar5;
  pbVar9 = local_78;
  for (; param_1 = param_1 + 1, uVar5 != 0; uVar5 = uVar5 - 1) {
    *pbVar9 = *param_1;
    pbVar9 = pbVar9 + 1;
  }
  *param_4 = 0;
  local_260 = param_2;
  local_258 = param_3;
  local_250 = param_4;
  FUN_004169a0(&local_140,&local_79);
  FUN_00b90680(&local_138,local_140);
  FUN_00b91070(auStack_288,local_130,local_138);
  FUN_00416910(local_240,local_130[0],0xff);
  FUN_00415020(&local_79,local_240,0x50);
  uVar8 = (uint)local_79;
  bVar1 = false;
  iVar2 = 1;
  do {
    iVar7 = iVar2;
    iVar4 = FUN_00416fd0((longlong)iVar7 * 7 + 0x1e946aa,&local_79,1);
    if ((iVar4 == 0) && (1 < *(byte *)((longlong)&UNWIND_INFO_01e946a8 + (longlong)iVar7 * 7 + 2)))
    {
      FUN_00415020(&local_ca,(longlong)iVar7 * 7 + 0x1e946aa,
                   CONCAT71((int7)(int3)((uint)iVar7 >> 8),0x50));
      uVar5 = 0;
      if (local_ca != 0) {
        uVar5 = (ulonglong)(uint)local_ca;
        pcVar6 = local_c9;
        do {
          cVar3 = *pcVar6;
          if ((byte)(cVar3 + 0xa0U) < 0x20 && (1 << (cVar3 + 0xa0U & 0x1f) & 0x7fffffeU) != 0) {
            cVar3 = cVar3 + -0x20;
          }
          *pcVar6 = cVar3;
          pcVar6 = pcVar6 + 1;
          uVar10 = (int)uVar5 - 1;
          uVar5 = (ulonglong)uVar10;
        } while (uVar10 != 0);
      }
      FUN_00415020(&local_11b,&local_79,CONCAT71((int7)(uVar5 >> 8),0x50));
      uVar10 = (uint)local_11b;
      if (uVar10 != 0) {
        pcVar6 = local_11a;
        do {
          cVar3 = *pcVar6;
          if ((byte)(cVar3 + 0xa0U) < 0x20 && (1 << (cVar3 + 0xa0U & 0x1f) & 0x7fffffeU) != 0) {
            cVar3 = cVar3 + -0x20;
          }
          *pcVar6 = cVar3;
          pcVar6 = pcVar6 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      iVar4 = FUN_00416fd0(&local_ca,&local_11b,1);
    }
    if ((0 < iVar4) &&
       ((uVar8 - iVar4) + 1 ==
        (uint)*(byte *)((longlong)&UNWIND_INFO_01e946a8 + (longlong)iVar7 * 7 + 2))) {
      bVar1 = true;
    }
  } while ((!bVar1) && (iVar2 = iVar7 + 1, iVar7 + 1 < 0x15));
  if (bVar1) {
    *local_258 = *(undefined1 *)((longlong)&UNWIND_INFO_01e946a8 + (longlong)iVar7 * 7 + 1);
    FUN_00415260(&local_79,0x50,iVar4,0x50);
  }
  else {
    *local_258 = 0;
  }
  FUN_004169a0(&local_248,&local_79);
  uVar11 = FUN_00b8f030(local_248);
  *local_260 = uVar11;
  FUN_00414480(&local_248);
  FUN_00414560(&local_140,3);
  return;
}

