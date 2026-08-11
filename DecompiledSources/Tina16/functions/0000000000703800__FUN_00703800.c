/* Ghidra address: 00703800 */
/* Ghidra symbol: FUN_00703800 */


void FUN_00703800(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined1 uVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_40;
  longlong local_30;
  
  lVar2 = *(longlong *)(param_2 + 0x10);
  if (*(int *)(lVar2 + 0x10) == -0x386) {
    if (*(longlong *)(param_1 + 0x498) != 0) {
      if (*(char *)(param_1 + 0x4a8) == '\0') {
        *(int *)(lVar2 + 0x1c) = *(int *)(param_1 + 0x4b0) + *(int *)(param_1 + 0x324) * 2;
        *(int *)(lVar2 + 0x20) =
             *(int *)(*(longlong *)(param_1 + 0x498) + 0x9c) + *(int *)(param_1 + 0x324) * 2;
      }
      else {
        *(int *)(lVar2 + 0x1c) =
             *(int *)(*(longlong *)(param_1 + 0x498) + 0x98) + *(int *)(param_1 + 0x324) * 2;
        *(int *)(lVar2 + 0x20) = *(int *)(param_1 + 0x4b0) + *(int *)(param_1 + 0x324) * 2;
      }
    }
  }
  else if (*(int *)(lVar2 + 0x10) == -0x385) {
    uVar1 = *(uint *)(lVar2 + 0x2a);
    if (uVar1 < 8) {
      bVar7 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << ((byte)uVar1 & 0x1f) & 6U) != 0;
    }
    else {
      bVar7 = false;
    }
    if (bVar7) {
      uVar6 = 1;
      if (uVar1 == 1) {
        *(int *)(lVar2 + 0x36) = -*(int *)(lVar2 + 0x36);
      }
    }
    else {
      uVar6 = 0;
      if (uVar1 == 4) {
        *(int *)(lVar2 + 0x36) = -*(int *)(lVar2 + 0x36);
        uVar6 = 0;
      }
    }
    local_30 = param_1;
    uVar4 = FUN_007037c0(auStack_68,*(undefined2 *)(lVar2 + 0x18));
    pcVar5 = (code *)FUN_00411550(local_30,0xffac);
    local_40 = lVar2 + 0x36;
    local_48 = uVar6;
    (*pcVar5)(local_30,uVar4,*(undefined4 *)(lVar2 + 0x2e),*(undefined4 *)(lVar2 + 0x32));
    if (0 < *(int *)(lVar2 + 0x36)) {
      cVar3 = FUN_007032f0(local_30,0);
      if (cVar3 == '\x01') {
        *(int *)(lVar2 + 0x36) = *(int *)(lVar2 + 0x36) + *(int *)(local_30 + 0x494);
      }
    }
    if (*(int *)(lVar2 + 0x36) < 0) {
      *(int *)(lVar2 + 0x36) = -*(int *)(lVar2 + 0x36);
    }
    if (*(char *)(local_30 + 0x4a8) == '\0') {
      *(int *)(local_30 + 0x4ac) = *(int *)(lVar2 + 0x2e) + *(int *)(lVar2 + 0x36);
    }
    else {
      *(int *)(local_30 + 0x4ac) = *(int *)(lVar2 + 0x32) + *(int *)(lVar2 + 0x36);
    }
  }
  return;
}

