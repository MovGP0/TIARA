/* Ghidra address: 0083f4c0 */
/* Ghidra symbol: FUN_0083f4c0 */


void FUN_0083f4c0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_28;
  int local_1c;
  
  local_30 = auStack_58;
  *(short *)(param_1 + 0x318) = *(short *)(param_1 + 0x318) + 1;
  local_28 = param_1;
  uVar1 = thunk_FUN_03f3ed25(*(undefined4 *)(param_1 + 0x4b0),param_2,param_3);
  *(undefined4 *)(param_1 + 0x4b0) = uVar1;
  if (*(longlong *)(param_1 + 0x528) != 0) {
    iVar2 = *(int *)(param_1 + 0x4a4);
    local_1c = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar1 = FUN_00848220(param_1,local_1c);
        uVar1 = thunk_FUN_03f3ed25(uVar1,param_2,param_3);
        FUN_00848460(param_1,local_1c,uVar1);
        local_1c = local_1c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  uVar1 = thunk_FUN_03f3ed25(*(undefined4 *)(param_1 + 0x4b4),param_2,param_3);
  *(undefined4 *)(param_1 + 0x4b4) = uVar1;
  if (*(longlong *)(param_1 + 0x530) != 0) {
    iVar2 = *(int *)(param_1 + 0x4e0);
    local_1c = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar1 = FUN_00848250(param_1,local_1c);
        uVar1 = thunk_FUN_03f3ed25(uVar1,param_2,param_3);
        FUN_00848ac0(param_1,local_1c,uVar1);
        local_1c = local_1c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_0065aec0(param_1,param_2,param_3,param_4);
  FUN_00654410(param_1);
  FUN_008458c0(param_1);
  FUN_00844220(param_1);
  return;
}

