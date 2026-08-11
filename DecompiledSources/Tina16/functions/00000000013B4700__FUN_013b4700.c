/* Ghidra address: 013b4700 */
/* Ghidra symbol: FUN_013b4700 */


void FUN_013b4700(undefined8 param_1,byte *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  char *pcVar5;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  char local_3d8;
  char local_3d7 [655];
  undefined8 local_148 [6];
  byte local_118 [256];
  
  local_3e0 = 0;
  local_3e8 = 0;
  local_3f0 = 0;
  lVar2 = (ulonglong)*param_2 + 1;
  pbVar4 = local_118;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar4 = *param_2;
    param_2 = param_2 + 1;
    pbVar4 = pbVar4 + 1;
  }
  puVar1 = local_148;
  for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar1 = *param_3;
    param_3 = param_3 + 1;
    puVar1 = puVar1 + 1;
  }
  puVar1 = (undefined8 *)FUN_013b3ad0(param_1,local_118);
  if (puVar1 != (undefined8 *)0x0) {
    pcVar5 = &local_3d8;
    puVar3 = puVar1;
    for (lVar2 = 0x52; puVar3 = puVar3 + 1, lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined8 *)pcVar5 = *puVar3;
      pcVar5 = pcVar5 + 8;
    }
    if (local_3d8 == '\x01') {
      FUN_004154b0(&local_3e0,local_3d7,0);
      FUN_004155b0(&local_3e0,&DAT_013b4858);
      FUN_00416880(&local_3e8,local_3e0);
      FUN_010c2250(&local_3f0,0x201);
      FUN_00416ad0(&local_3e8,local_3f0);
      FUN_0072d440(local_3e8,0,4,0);
    }
    else {
      puVar3 = local_148;
      puVar1 = puVar1 + 0x46;
      for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar1 = puVar1 + 1;
      }
    }
  }
  FUN_00414560(&local_3f0,2);
  FUN_004144d0(&local_3e0);
  return;
}

