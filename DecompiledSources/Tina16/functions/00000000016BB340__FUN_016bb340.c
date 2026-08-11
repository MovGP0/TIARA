/* Ghidra address: 016bb340 */
/* Ghidra symbol: FUN_016bb340 */


ulonglong FUN_016bb340(longlong param_1,ulonglong param_2,undefined1 *param_3)

{
  longlong lVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  *param_3 = 0;
  lVar1 = *(longlong *)(param_1 + 0x9b0);
  local_30 = param_2;
  while( true ) {
    cVar3 = FUN_016bb2e0(auStack_58);
    if ((cVar3 != '\0') || (*(longlong *)(param_1 + 0x9b0) == 0)) break;
    if (**(byte **)(param_1 + 0x9b0) < 0x10) {
      uVar4 = (int)CONCAT62((int6)(param_2 >> 0x10),1) << (**(byte **)(param_1 + 0x9b0) & 0x1f);
      param_2 = (ulonglong)uVar4;
      bVar5 = (uVar4 & 0x2401) != 0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) break;
    *(longlong *)(param_1 + 0x9b0) = *(longlong *)(param_1 + 0x9b0) + 1;
  }
  FUN_004147f0(local_20,lVar1,*(longlong *)(param_1 + 0x9b0) - lVar1,0);
  FUN_00414bf0(local_30,local_20[0]);
  pcVar2 = *(char **)(param_1 + 0x9b0);
  if (pcVar2 != (char *)0x0) {
    if ((byte)(*pcVar2 - 8U) < 8) {
      bVar5 = ((int)CONCAT71((int7)((ulonglong)pcVar2 >> 8),1) << (*pcVar2 - 8U & 0x1f) & 0x24U) !=
              0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      *(longlong *)(param_1 + 0x9b0) = *(longlong *)(param_1 + 0x9b0) + 1;
      FUN_016bb2e0(auStack_58);
    }
  }
  pcVar2 = *(char **)(param_1 + 0x9b0);
  if (pcVar2 != (char *)0x0) {
    if ((byte)(*pcVar2 - 8U) < 8) {
      bVar5 = ((int)CONCAT71((int7)((ulonglong)pcVar2 >> 8),1) << (*pcVar2 - 8U & 0x1f) & 0x24U) !=
              0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      *(longlong *)(param_1 + 0x9b0) = *(longlong *)(param_1 + 0x9b0) + 1;
      FUN_016bb2e0(auStack_58);
    }
  }
  if ((*(char **)(param_1 + 0x9b0) != (char *)0x0) && (**(char **)(param_1 + 0x9b0) == '\0')) {
    *param_3 = 1;
  }
  FUN_004144d0(local_20);
  return local_30;
}

