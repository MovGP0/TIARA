/* Ghidra address: 006ef370 */
/* Ghidra symbol: FUN_006ef370 */


void FUN_006ef370(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_5c;
  
  bVar2 = false;
  if (param_2 == 0) {
    if (param_3 != *(int *)(param_1 + 0x18)) {
      bVar2 = true;
      *(int *)(param_1 + 0x18) = param_3;
      if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x510) == '\0') {
        local_80 = 2;
        local_5c = 0xffffffff;
        local_7c = FUN_006ef6e0(param_1);
        local_78 = 0;
        uVar5 = FUN_006eeda0(param_1);
        thunk_FUN_041b2403(uVar5,0x104c,0,&local_80);
      }
    }
  }
  else if (param_2 == 1) {
    if (param_3 != *(int *)(param_1 + 0x24)) {
      bVar2 = true;
      *(int *)(param_1 + 0x24) = param_3;
      if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x510) == '\0') {
        uVar5 = FUN_006eeda0(param_1);
        uVar3 = FUN_006ef6e0(param_1);
        FUN_00611e10(uVar5,uVar3,(*(int *)(param_1 + 0x24) + 1) * 0x100,0xf00);
      }
    }
  }
  else if ((param_2 == 2) && (param_3 != *(int *)(param_1 + 0x28))) {
    bVar2 = true;
    *(int *)(param_1 + 0x28) = param_3;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
    if ((*(char *)(lVar1 + 0x558) != '\0') && (param_3 == -1)) {
      param_3 = 0;
    }
    if (*(char *)(lVar1 + 0x510) == '\0') {
      uVar5 = FUN_006eeda0(param_1);
      uVar3 = FUN_006ef6e0(param_1);
      FUN_00611e10(uVar5,uVar3,(param_3 + 1) * 0x1000,0xf000);
    }
  }
  if ((bVar2) && (*(char *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x510) == '\0')) {
    uVar5 = FUN_006eed60(param_1);
    uVar3 = FUN_006ef6e0(param_1);
    uVar4 = FUN_006ef6e0(param_1);
    FUN_006f2d80(uVar5,uVar3,uVar4);
  }
  return;
}

