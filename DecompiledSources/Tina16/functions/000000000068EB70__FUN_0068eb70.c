/* Ghidra address: 0068eb70 */
/* Ghidra symbol: FUN_0068eb70 */


void FUN_0068eb70(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 local_48;
  undefined4 local_44;
  int local_30;
  int local_2c [3];
  
  iVar1 = *(int *)(param_1 + 0x494);
  uVar3 = (ulonglong)*(byte *)(param_2 + 8);
  if (uVar3 < 4) {
    if (uVar3 == 3) {
      local_30 = iVar1 + (uint)*(ushort *)(param_1 + 0x4aa) * *(int *)(param_1 + 0x4a4);
    }
    else if (uVar3 == 0) {
      local_30 = iVar1 - (uint)*(ushort *)(param_1 + 0x4a8) * *(int *)(param_1 + 0x4a4);
    }
    else if (uVar3 == 1) {
      local_30 = iVar1 + (uint)*(ushort *)(param_1 + 0x4a8) * *(int *)(param_1 + 0x4a4);
    }
    else {
      local_30 = iVar1;
      if (uVar3 == 2) {
        local_30 = iVar1 - (uint)*(ushort *)(param_1 + 0x4aa) * *(int *)(param_1 + 0x4a4);
      }
    }
  }
  else if (uVar3 - 4 < 2) {
    local_48 = 0x1c;
    local_44 = 0x17;
    uVar4 = FUN_0065b870(param_1);
    thunk_FUN_04083ff6(uVar4,2,&local_48);
    cVar2 = FUN_0068e660(param_1);
    if (cVar2 == '\0') {
      local_30 = *(int *)(param_1 + 0x49c) - local_30;
    }
  }
  else if (uVar3 == 6) {
    local_30 = *(int *)(param_1 + 0x498);
  }
  else {
    local_30 = iVar1;
    if (uVar3 == 7) {
      local_30 = *(int *)(param_1 + 0x49c);
    }
  }
  if (local_30 < *(int *)(param_1 + 0x498)) {
    local_30 = *(int *)(param_1 + 0x498);
  }
  local_2c[0] = local_30;
  if (*(int *)(param_1 + 0x49c) < local_30) {
    local_2c[0] = *(int *)(param_1 + 0x49c);
  }
  pcVar5 = (code *)FUN_00411550(param_1,0xffab);
  (*pcVar5)(param_1,*(undefined1 *)(param_2 + 8),local_2c);
  FUN_0068e980(param_1,local_2c[0]);
  return;
}

