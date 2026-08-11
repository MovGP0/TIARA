/* Ghidra address: 018d6e10 */
/* Ghidra symbol: FUN_018d6e10 */


void FUN_018d6e10(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  longlong local_28;
  int local_1c;
  
  local_30 = auStack_68;
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  iVar3 = FUN_005fce00(param_2);
  *(int *)(param_1 + 0x2c) = iVar3;
  local_1c = FUN_0040c770((double)(iVar3 * *(int *)(param_1 + 0x18)) / 72.0);
  local_1c = -local_1c;
  FUN_005fdf10(*(undefined8 *)(param_1 + 0x10));
  local_28 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x70);
  FUN_005fccd0(local_28,&local_38);
  FUN_005fccd0(param_2,&local_40);
  iVar3 = FUN_00416db0(local_38,local_40);
  if (iVar3 != 0) {
    FUN_005fccd0(param_2,&local_48);
    FUN_005fcd80(local_28,local_48);
  }
  iVar3 = FUN_005fcc70(local_28);
  if (iVar3 != local_1c) {
    FUN_005fcc80(local_28,local_1c);
  }
  cVar1 = FUN_005fce60(local_28);
  cVar2 = FUN_005fce60(param_2);
  if (cVar1 != cVar2) {
    uVar4 = FUN_005fce60(param_2);
    FUN_005fce70(local_28,uVar4);
  }
  cVar1 = FUN_005fcf90(local_28);
  cVar2 = FUN_005fcf90(param_2);
  if (cVar1 != cVar2) {
    uVar4 = FUN_005fcf90(param_2);
    FUN_005fcfa0(local_28,uVar4);
  }
  if (*(char *)(param_1 + 0xab) == '\0') {
    if (*(int *)(local_28 + 0x28) != *(int *)(param_2 + 0x28)) {
      FUN_005fc860(local_28,*(int *)(param_2 + 0x28));
    }
  }
  else {
    FUN_005fc860(local_28,0);
  }
  FUN_005fe090(*(undefined8 *)(param_1 + 0x10));
  FUN_00414560(&local_48,3);
  return;
}

