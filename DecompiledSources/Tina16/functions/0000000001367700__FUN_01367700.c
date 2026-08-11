/* Ghidra address: 01367700 */
/* Ghidra symbol: FUN_01367700 */


void FUN_01367700(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong local_58;
  undefined4 local_4c;
  undefined1 local_40 [16];
  longlong local_30;
  
  local_30 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x27a8);
  local_58 = param_1;
  local_4c = param_2;
  FUN_01367550(param_1);
  if (*(int *)(local_58 + 0x20) < *(int *)(local_58 + 0x18)) {
    FUN_01cefdf0(local_58 + 0x18,local_58 + 0x20);
  }
  if (*(int *)(local_58 + 0x24) < *(int *)(local_58 + 0x1c)) {
    FUN_01cefdf0(local_58 + 0x1c,local_58 + 0x24);
  }
  local_68 = *(undefined4 *)(local_58 + 0x24);
  FUN_00b956d0(local_40,*(undefined4 *)(local_58 + 0x18),*(undefined4 *)(local_58 + 0x1c),
               *(undefined4 *)(local_58 + 0x20));
  lVar1 = local_30;
  iVar4 = *(int *)(local_30 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_00b94e60(lVar1,iVar3);
      FUN_013675b0(auStack_88,uVar2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_01364ff0(local_58,local_4c,param_3);
  return;
}

