/* Ghidra address: 00656f10 */
/* Ghidra symbol: FUN_00656f10 */


void FUN_00656f10(longlong param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if (*(longlong *)(param_1 + 0x468) == 0) {
    FUN_00650200(param_1,param_2);
    return;
  }
  if ((*param_2 == 0x7b) && (*(longlong *)(param_1 + 0x78) != 0)) {
    uVar4 = FUN_0064fca0(*(undefined8 *)(param_1 + 0x78),0x7b,*(undefined8 *)(param_2 + 2),
                         *(undefined8 *)(param_2 + 4));
    *(undefined8 *)(param_2 + 6) = uVar4;
    if (*(longlong *)(param_2 + 6) != 0) {
      return;
    }
  }
  iVar1 = *param_2;
  if (iVar1 - 0x132U < 7) {
    uVar4 = thunk_FUN_041b2403(*(undefined8 *)(param_2 + 4),iVar1 + 0xbc00,
                               *(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
    *(undefined8 *)(param_2 + 6) = uVar4;
  }
  else if (iVar1 - 0xbd32U < 7) {
    uVar2 = FUN_005fbf20(*(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 0x28));
    thunk_FUN_0412a071(*(undefined8 *)(param_2 + 2),uVar2);
    uVar2 = FUN_005fbf20(*(undefined4 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x330) + 0x18) + 0x28));
    thunk_FUN_03e3a7dc(*(undefined8 *)(param_2 + 2),uVar2);
    uVar4 = FUN_005fdb10(*(undefined8 *)(param_1 + 0x330));
    *(undefined8 *)(param_2 + 6) = uVar4;
  }
  else if ((*param_2 == DAT_020122f0) &&
          (uVar3 = thunk_FUN_0417a31e(), *(ulonglong *)(param_2 + 2) == (ulonglong)uVar3)) {
    *(longlong *)(param_2 + 6) = param_1;
  }
  else {
    uVar4 = thunk_FUN_03a65bf1(*(undefined8 *)(param_1 + 0x460),*(undefined8 *)(param_1 + 0x468),
                               *param_2,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
    *(undefined8 *)(param_2 + 6) = uVar4;
  }
  if (*param_2 == 0xc) {
    FUN_0064d420(param_1,0xc,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
  }
  return;
}

