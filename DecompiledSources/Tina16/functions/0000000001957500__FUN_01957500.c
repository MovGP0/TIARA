/* Ghidra address: 01957500 */
/* Ghidra symbol: FUN_01957500 */


void FUN_01957500(longlong param_1,char param_2,char param_3,char param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  ulonglong uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  uVar1 = (longlong)*(int *)(param_1 + 0x48) / 2;
  local_48 = *(undefined4 *)(param_1 + 0x40);
  local_40 = *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x44);
  local_4c = 0;
  if (-1 < (int)uVar1) {
    iVar7 = (int)uVar1 + 1;
    do {
      local_44 = thunk_FUN_03f3ed25(local_4c,uVar1 & 0xffffffff,uVar1 & 0xffffffff);
      local_44 = local_44 + *(int *)(param_1 + 0x4c);
      local_3c = thunk_FUN_03f3ed25(local_4c + 1,uVar1 & 0xffffffff,uVar1 & 0xffffffff);
      local_3c = local_3c + *(int *)(param_1 + 0x4c);
      cVar2 = thunk_FUN_03f3ed25(local_4c,param_5,uVar1 & 0xffffffff);
      cVar3 = thunk_FUN_03f3ed25(local_4c,param_6,uVar1 & 0xffffffff);
      cVar4 = thunk_FUN_03f3ed25(local_4c,param_7,uVar1 & 0xffffffff);
      uVar5 = FUN_0042a2a0(param_2 + cVar2,param_3 + cVar3,param_4 + cVar4);
      FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x80),uVar5);
      (**(code **)(**(longlong **)(param_1 + 0x78) + 0xa8))
                (*(longlong **)(param_1 + 0x78),&local_48);
      iVar6 = thunk_FUN_03f3ed25(local_4c,uVar1 & 0xffffffff,uVar1 & 0xffffffff);
      local_44 = (*(int *)(param_1 + 0x48) - iVar6) + *(int *)(param_1 + 0x4c);
      iVar6 = thunk_FUN_03f3ed25(local_4c + 1,uVar1 & 0xffffffff,uVar1 & 0xffffffff);
      local_3c = (*(int *)(param_1 + 0x48) - iVar6) + *(int *)(param_1 + 0x4c);
      (**(code **)(**(longlong **)(param_1 + 0x78) + 0xa8))
                (*(longlong **)(param_1 + 0x78),&local_48);
      local_4c = local_4c + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}

