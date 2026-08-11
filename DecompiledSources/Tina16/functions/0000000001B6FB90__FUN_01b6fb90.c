/* Ghidra address: 01b6fb90 */
/* Ghidra symbol: FUN_01b6fb90 */


void FUN_01b6fb90(longlong param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  bool bVar4;
  byte local_19;
  
  pbVar3 = &local_19;
  (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0xa0))(*(longlong **)(param_1 + 0x9d8),pbVar3);
  bVar1 = local_19;
  if (local_19 < 0x10) {
    bVar4 = ((int)CONCAT62((int6)((ulonglong)pbVar3 >> 0x10),1) << (local_19 & 0x1f) & 0x7e0U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    do {
      local_19 = local_19 + 1;
      if (10 < local_19) {
        local_19 = 5;
      }
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x98))
                        (*(longlong **)(param_1 + 0x9d8),&local_19);
    } while ((cVar2 == '\0') && (bVar1 != local_19));
  }
  else {
    local_19 = 5;
  }
  FUN_01b6e340(param_1,local_19);
  (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0xa0))(*(longlong **)(param_1 + 0x9d8),&local_19);
  FUN_01b6bcd0(param_1,local_19);
  return;
}

