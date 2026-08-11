/* Ghidra address: 00aa32e0 */
/* Ghidra symbol: FUN_00aa32e0 */


int FUN_00aa32e0(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4,int param_5)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_30;
  int local_2c;
  
  *(undefined4 *)(param_1 + 0x484) = 0;
  *(undefined4 *)(param_1 + 0x47c) = 0;
  *(undefined4 *)(param_1 + 0x478) = 0;
  *(undefined4 *)(param_1 + 0x480) = 0;
  iVar4 = *(int *)(param_1 + 0x4a4) + *(int *)(param_1 + 0x494) + *(int *)(param_1 + 0x49c) +
          *(int *)(param_1 + 0x48c);
  plVar1 = *(longlong **)(param_1 + 0x560);
  *(undefined4 *)(plVar1 + 0x26) = 0;
  iVar3 = *(int *)(param_1 + 0x568);
  if (iVar3 < 1) {
    (**(code **)(*plVar1 + 0xb8))(plVar1,param_2,&local_2c,&local_30,param_3,param_4);
    param_3 = param_3 - iVar4;
    if ((param_3 < local_30) && (local_30 = param_3, param_3 <= local_2c)) {
      local_30 = local_2c;
    }
  }
  else {
    if (*(char *)(param_1 + 0x56c) != '\0') {
      iVar2 = thunk_FUN_03f3ed25(param_3,iVar3,1000);
      iVar3 = param_3 - param_5;
      if (iVar2 < param_3 - param_5) {
        iVar3 = iVar2;
      }
    }
    iVar3 = iVar3 - iVar4;
    plVar1 = *(longlong **)(param_1 + 0x560);
    *(int *)(plVar1 + 0x26) = iVar3;
    (**(code **)(*plVar1 + 0xb8))(plVar1,param_2,&local_2c,&local_30,param_3,param_4);
    if (iVar3 < local_2c) {
      iVar3 = local_2c;
    }
    *(int *)(*(longlong *)(param_1 + 0x560) + 0x130) = iVar3;
    local_30 = iVar3;
  }
  return local_30 + iVar4;
}

