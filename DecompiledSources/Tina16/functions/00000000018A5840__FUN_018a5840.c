/* Ghidra address: 018a5840 */
/* Ghidra symbol: FUN_018a5840 */


void FUN_018a5840(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar7;
  undefined1 local_38 [24];
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  iVar5 = *(int *)(param_1 + 0x4b4);
  iVar1 = *(int *)(param_1 + 0x520);
  *(int *)(param_1 + 0x520) = iVar5;
  uVar3 = FUN_0064d0b0(param_1);
  uVar4 = FUN_0064d120(param_1);
  FUN_00498350(local_38,0,0,uVar3,CONCAT44(uVar7,uVar4));
  uVar6 = FUN_0065b870(param_1);
  thunk_FUN_041d5f23(uVar6,0,iVar1 - iVar5,local_38,local_38,0,0,6);
  if ((*(char *)(param_1 + 0x540) == '\0') && (*(char *)(param_1 + 0x508) == '\0')) {
    *(undefined1 *)(param_1 + 0x4f2) = 1;
    lVar2 = *(longlong *)(param_1 + 0x538);
    if (*(int *)(lVar2 + 0x52c) == -1) {
      iVar5 = FUN_018a51c0(*(undefined8 *)(param_1 + 0x528),*(undefined4 *)(param_1 + 0x520),0);
      FUN_018a9020(lVar2,iVar5 + 1);
    }
    else {
      FUN_018a9020(lVar2,*(int *)(lVar2 + 0x52c));
    }
    *(undefined1 *)(param_1 + 0x4f2) = 0;
  }
  return;
}

