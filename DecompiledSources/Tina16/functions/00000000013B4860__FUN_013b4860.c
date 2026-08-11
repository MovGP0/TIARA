/* Ghidra address: 013b4860 */
/* Ghidra symbol: FUN_013b4860 */


void FUN_013b4860(undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  char local_2d8;
  char local_2d7 [655];
  undefined8 local_48 [6];
  
  local_2e0 = 0;
  local_2e8 = 0;
  local_2f0 = 0;
  puVar1 = local_48;
  for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar1 = *param_3;
    param_3 = param_3 + 1;
    puVar1 = puVar1 + 1;
  }
  puVar1 = (undefined8 *)FUN_00b94e60(param_1,param_2);
  pcVar4 = &local_2d8;
  for (lVar2 = 0x52; puVar1 = puVar1 + 1, lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)pcVar4 = *puVar1;
    pcVar4 = pcVar4 + 8;
  }
  if (local_2d8 == '\x01') {
    FUN_004154b0(&local_2e0,local_2d7,0);
    FUN_004155b0(&local_2e0,&DAT_013b49a8);
    FUN_00416880(&local_2e8,local_2e0);
    FUN_010c2250(&local_2f0,0x201);
    FUN_00416ad0(&local_2e8,local_2f0);
    FUN_0072d440(local_2e8,0,4,0);
  }
  else {
    lVar2 = FUN_00b94e60(param_1,param_2);
    puVar1 = local_48;
    puVar5 = (undefined8 *)(lVar2 + 0x230);
    for (lVar3 = 6; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  FUN_00414560(&local_2f0,2);
  FUN_004144d0(&local_2e0);
  return;
}

