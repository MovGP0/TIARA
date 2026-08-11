/* Ghidra address: 006efe80 */
/* Ghidra symbol: FUN_006efe80 */


void FUN_006efe80(longlong param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_28;
  int local_1c;
  
  local_60 = auStack_88;
  if (param_2 == '\0') {
    if (*(int *)(param_1 + 0x10) == 0) {
      FUN_006f6810(*(longlong *)(param_1 + 8),*(undefined1 *)(*(longlong *)(param_1 + 8) + 0x588));
      local_50 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x500);
      iVar4 = *(int *)(*(longlong *)(local_50 + 0x10) + 0x10);
      local_1c = 0;
      if (-1 < iVar4 + -1) {
        do {
          local_40 = FUN_006edb10(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x500),local_1c);
          if (*(int *)(local_40 + 0x34) < 0) {
            FUN_006ed840(local_40,*(int *)(local_40 + 0x34));
            *(undefined4 *)(local_40 + 0x34) = 0;
          }
          local_1c = local_1c + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      *(undefined1 *)(param_1 + 0x14) = 1;
      uVar3 = FUN_006efc90(param_1);
      thunk_FUN_041b2403(uVar3,0xb,1,0);
      (**(code **)(**(longlong **)(param_1 + 8) + 0x180))(*(longlong **)(param_1 + 8));
      *(undefined1 *)(param_1 + 0x14) = 0;
      cVar1 = FUN_006f37d0(*(undefined8 *)(param_1 + 8));
      if ((cVar1 != '\0') && (cVar1 = FUN_006f37e0(*(undefined8 *)(param_1 + 8)), cVar1 != '\0')) {
        thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x540),0xb,1,0);
      }
    }
  }
  else {
    local_28 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(local_28 + 0x588) = *(undefined1 *)(local_28 + 0x4d9);
    local_60 = auStack_88;
    FUN_006f6810(local_28,0);
    local_48 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x500);
    iVar4 = *(int *)(*(longlong *)(local_48 + 0x10) + 0x10);
    local_1c = 0;
    if (-1 < iVar4 + -1) {
      do {
        local_38 = FUN_006edb10(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x500),local_1c);
        if (*(int *)(local_38 + 0x38) < 0) {
          *(int *)(local_38 + 0x34) = *(int *)(local_38 + 0x38);
          uVar2 = FUN_006ed780(local_38);
          *(undefined4 *)(local_38 + 0x38) = uVar2;
          FUN_006ed570(local_38);
        }
        local_1c = local_1c + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    uVar3 = FUN_006efc90(param_1);
    thunk_FUN_041b2403(uVar3,0xb,0,0);
    cVar1 = FUN_006f37d0(*(undefined8 *)(param_1 + 8));
    if ((cVar1 != '\0') && (cVar1 = FUN_006f37e0(*(undefined8 *)(param_1 + 8)), cVar1 != '\0')) {
      thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x540),0xb,0,0);
    }
  }
  return;
}

