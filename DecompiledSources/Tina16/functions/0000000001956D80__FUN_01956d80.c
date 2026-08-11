/* Ghidra address: 01956d80 */
/* Ghidra symbol: FUN_01956d80 */


void FUN_01956d80(longlong param_1,char param_2,char param_3,char param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  
  local_44 = *(undefined4 *)(param_1 + 0x4c);
  local_3c = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x48);
  iVar5 = 0;
  do {
    local_48 = thunk_FUN_03f3ed25(iVar5,*(undefined4 *)(param_1 + 0x44),0x100);
    local_48 = local_48 + *(int *)(param_1 + 0x40);
    local_40 = thunk_FUN_03f3ed25(iVar5 + 1,*(undefined4 *)(param_1 + 0x44),0x100);
    local_40 = local_40 + *(int *)(param_1 + 0x40);
    cVar1 = thunk_FUN_03f3ed25(iVar5,param_5,0xff);
    cVar2 = thunk_FUN_03f3ed25(iVar5,param_6,0xff);
    cVar3 = thunk_FUN_03f3ed25(iVar5,param_7,0xff);
    uVar4 = FUN_0042a2a0(param_2 + cVar1,param_3 + cVar2,param_4 + cVar3);
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x80),uVar4);
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0xa8))(*(longlong **)(param_1 + 0x78),&local_48);
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0x100);
  return;
}

