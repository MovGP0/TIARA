/* Ghidra address: 00b90d70 */
/* Ghidra symbol: FUN_00b90d70 */


void FUN_00b90d70(byte *param_1,undefined8 *param_2,char *param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auStack_328 [40];
  undefined8 *local_300;
  char *local_2f8;
  undefined4 *local_2f0;
  undefined8 local_2e8;
  undefined1 local_2e0 [88];
  undefined1 local_288 [256];
  undefined8 local_188;
  undefined8 local_180 [2];
  byte local_16c;
  char local_16b [80];
  byte local_11b;
  char local_11a [80];
  byte local_ca [81];
  undefined1 local_79;
  byte local_78 [88];
  
  local_2e8 = 0;
  local_180[0] = 0;
  local_188 = 0;
  uVar3 = (ulonglong)*param_1;
  if (0x4f < uVar3) {
    uVar3 = 0x50;
  }
  local_79 = (undefined1)uVar3;
  pbVar7 = local_78;
  for (; param_1 = param_1 + 1, uVar3 != 0; uVar3 = uVar3 - 1) {
    *pbVar7 = *param_1;
    pbVar7 = pbVar7 + 1;
  }
  *param_4 = 0;
  local_300 = param_2;
  local_2f8 = param_3;
  local_2f0 = param_4;
  FUN_004169a0(&local_188,&local_79);
  FUN_00b90680(local_180,local_188);
  FUN_00416910(local_288,local_180[0],0xff);
  FUN_00415020(&local_79,local_288,0x50);
  FUN_00b90a50(auStack_328,local_2e0,&local_79);
  FUN_00415020(local_ca,local_2e0,0x50);
  iVar6 = 0x14;
  pcVar5 = &DAT_01e946b1;
  while( true ) {
    if (*pcVar5 == '\x01') {
      iVar2 = FUN_00414f50(local_ca,pcVar5,(ulonglong)local_ca[0] + 1);
    }
    else {
      FUN_00415020(&local_11b,pcVar5,0x50);
      uVar3 = 0;
      if (local_11b != 0) {
        uVar3 = (ulonglong)(uint)local_11b;
        pcVar4 = local_11a;
        do {
          cVar1 = *pcVar4;
          if ((byte)(cVar1 + 0xa0U) < 0x20 && (1 << (cVar1 + 0xa0U & 0x1f) & 0x7fffffeU) != 0) {
            cVar1 = cVar1 + -0x20;
          }
          *pcVar4 = cVar1;
          pcVar4 = pcVar4 + 1;
          uVar8 = (int)uVar3 - 1;
          uVar3 = (ulonglong)uVar8;
        } while (uVar8 != 0);
      }
      FUN_00415020(&local_16c,local_ca,CONCAT71((int7)(uVar3 >> 8),0x50));
      uVar8 = (uint)local_16c;
      if (uVar8 != 0) {
        pcVar4 = local_16b;
        do {
          cVar1 = *pcVar4;
          if ((byte)(cVar1 + 0xa0U) < 0x20 && (1 << (cVar1 + 0xa0U & 0x1f) & 0x7fffffeU) != 0) {
            cVar1 = cVar1 + -0x20;
          }
          *pcVar4 = cVar1;
          pcVar4 = pcVar4 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      iVar2 = FUN_00414f50(&local_11b,&local_16c,(ulonglong)local_11b + 1);
    }
    if (iVar2 == 0) break;
    pcVar5 = pcVar5 + 7;
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) {
code_r0x00b90fc4:
      if ((iVar2 != 0) && (*local_2f8 = '\0', local_ca[0] != 0)) {
        *local_2f0 = 1;
      }
      FUN_004169a0(&local_2e8,&local_79);
      uVar9 = FUN_00b8f030(local_2e8);
      *local_300 = uVar9;
      FUN_00414480(&local_2e8);
      FUN_00414560(&local_188,2);
      return;
    }
  }
  *local_2f8 = pcVar5[-1];
  goto code_r0x00b90fc4;
}

