/* Ghidra address: 0171aa10 */
/* Ghidra symbol: FUN_0171aa10 */


ulonglong FUN_0171aa10(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                      undefined1 *param_5)

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
  *param_5 = 0;
  lVar1 = *(longlong *)(param_1 + 0x10);
  local_30 = param_2;
  while( true ) {
    cVar3 = FUN_0171a9e0(auStack_58);
    if ((cVar3 != '\0') || (*(longlong *)(param_1 + 0x10) == 0)) break;
    if (**(byte **)(param_1 + 0x10) < 0x10) {
      uVar4 = (int)CONCAT62((int6)(param_2 >> 0x10),1) << (**(byte **)(param_1 + 0x10) & 0x1f);
      param_2 = (ulonglong)uVar4;
      bVar5 = (uVar4 & 0x2401) != 0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) break;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  FUN_004147f0(local_20,lVar1,*(longlong *)(param_1 + 0x10) - lVar1,0);
  FUN_00414bf0(local_30,local_20[0]);
  pcVar2 = *(char **)(param_1 + 0x10);
  if (pcVar2 != (char *)0x0) {
    if ((byte)(*pcVar2 - 8U) < 8) {
      bVar5 = ((int)CONCAT71((int7)((ulonglong)pcVar2 >> 8),1) << (*pcVar2 - 8U & 0x1f) & 0x24U) !=
              0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      FUN_0171a9e0(auStack_58);
    }
  }
  pcVar2 = *(char **)(param_1 + 0x10);
  if (pcVar2 != (char *)0x0) {
    if ((byte)(*pcVar2 - 8U) < 8) {
      bVar5 = ((int)CONCAT71((int7)((ulonglong)pcVar2 >> 8),1) << (*pcVar2 - 8U & 0x1f) & 0x24U) !=
              0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      FUN_0171a9e0(auStack_58);
    }
  }
  if ((*(char **)(param_1 + 0x10) != (char *)0x0) && (**(char **)(param_1 + 0x10) == '\0')) {
    *param_5 = 1;
  }
  FUN_004144d0(local_20);
  return local_30;
}

