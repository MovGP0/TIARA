/* Ghidra address: 0198c3b0 */
/* Ghidra symbol: FUN_0198c3b0 */


void FUN_0198c3b0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_58 [47];
  char local_29;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_29 = '\0';
  local_24 = 4;
  local_1c = 0;
  local_28 = 4;
  local_20 = 0;
  iVar2 = 0;
  iVar3 = *(int *)(param_1 + 0x10);
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_00b94e60(param_1,iVar2);
      FUN_0198c1e0(auStack_58,uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if ((local_1c < 0) || (local_20 < 0)) {
    local_1c = (local_1c + -8) / 8 << 3;
    local_20 = (local_20 + -8) / 8 << 3;
  }
  if ((local_24 < 4) || (local_28 < 4)) {
    if (local_24 < 4) {
      local_24 = local_24 + -0x10;
    }
    else {
      local_24 = 0;
    }
    if (local_28 < 4) {
      local_28 = local_28 + -0x10;
    }
    else {
      local_28 = 0;
    }
  }
  if ((((local_24 < 4) || (local_28 < 4)) || (local_1c < 0)) || (local_20 < 0)) {
    if (local_1c < local_24) {
      local_24 = local_1c;
    }
    if (local_20 < local_28) {
      local_28 = local_20;
    }
    iVar2 = 0;
    iVar3 = *(int *)(param_1 + 0x10);
    if (-1 < iVar3 + -1) {
      do {
        uVar1 = FUN_00b94e60(param_1,iVar2);
        FUN_0198c310(auStack_58,uVar1);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  if (local_29 != '\0') {
    iVar3 = *(int *)(param_1 + 0x10);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar1 = FUN_00b94e60(param_1,iVar2);
        FUN_0198c360(auStack_58,uVar1);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

