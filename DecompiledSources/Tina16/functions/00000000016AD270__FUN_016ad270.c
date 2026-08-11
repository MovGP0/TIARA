/* Ghidra address: 016ad270 */
/* Ghidra symbol: FUN_016ad270 */


ulonglong FUN_016ad270(longlong param_1,ulonglong param_2,char *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  undefined8 local_18;
  int local_c;
  
  local_18 = 0;
  *param_3 = '\0';
  local_c = *(int *)(param_1 + 0x8450);
  local_20 = param_2;
  uVar2 = FUN_016ad030(param_1);
  *(undefined4 *)(param_1 + 0x8458) = uVar2;
  while (*param_3 == '\0') {
    bVar1 = *(byte *)(param_1 + 0x450 + (longlong)*(int *)(param_1 + 0x8450));
    if (bVar1 < 0x10) {
      uVar3 = (int)CONCAT62((int6)(param_2 >> 0x10),1) << (bVar1 & 0x1f);
      param_2 = (ulonglong)uVar3;
      bVar4 = (uVar3 & 0x2401) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) break;
    FUN_016ad0e0(auStack_48);
  }
  FUN_004147f0(&local_18,param_1 + 0x450 + (longlong)local_c,*(int *)(param_1 + 0x8450) - local_c,0)
  ;
  FUN_00414bf0(local_20,local_18);
  if (*(char *)(param_1 + 0x450 + (longlong)*(int *)(param_1 + 0x8450)) == '\r') {
    FUN_016ad0e0(auStack_48);
  }
  if (*(char *)(param_1 + 0x450 + (longlong)*(int *)(param_1 + 0x8450)) == '\n') {
    FUN_016ad0e0(auStack_48);
  }
  if (*(char *)(param_1 + 0x450 + (longlong)*(int *)(param_1 + 0x8450)) == '\0') {
    FUN_016ad0e0(auStack_48);
  }
  uVar2 = FUN_016ad030(param_1);
  *(undefined4 *)(param_1 + 0x845c) = uVar2;
  FUN_004144d0(&local_18);
  return local_20;
}

