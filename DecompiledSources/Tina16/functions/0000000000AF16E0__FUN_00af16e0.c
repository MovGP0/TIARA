/* Ghidra address: 00af16e0 */
/* Ghidra symbol: FUN_00af16e0 */


void FUN_00af16e0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  char local_40;
  undefined1 *local_30;
  char local_25;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_68;
  local_18 = 0;
  local_20 = 0;
  cVar1 = FUN_00af2f30(param_1);
  if ((cVar1 == '\0') && (param_3 != 0)) {
    FUN_00414b50(&local_18,*(undefined8 *)(param_1 + 0x8b8));
    FUN_00414b50(&local_20,*(undefined8 *)(param_1 + 0x8e0));
    local_24 = FUN_00af5fb0(param_1);
    local_25 = *(char *)(param_1 + 0x8c0);
    local_10 = FUN_00afebf0(param_1);
    FUN_00af14e0(param_1,param_2,param_3,param_4);
    iVar2 = FUN_00416db0(local_18,*(undefined8 *)(param_1 + 0x8b8));
    if ((iVar2 == 0) && (local_25 == *(char *)(param_1 + 0x8c0))) {
      FUN_00410f20(local_10);
    }
    else {
      local_48 = local_10;
      local_40 = local_25;
      FUN_00af6730(param_1,local_18,local_20,local_24);
    }
  }
  FUN_00414560(&local_20,2);
  return;
}

