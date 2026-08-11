/* Ghidra address: 01892010 */
/* Ghidra symbol: FUN_01892010 */


void FUN_01892010(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  
  if (*param_2 == 0x46) {
    lVar1 = *(longlong *)(param_2 + 4);
    if ((int)param_1[0xb5] == 0) {
      *(int *)(lVar1 + 0x18) = (int)param_1[0x13];
    }
    else {
      *(int *)(lVar1 + 0x18) = (int)param_1[0xb5];
    }
    uVar3 = FUN_01892bb0(param_1);
    *(undefined4 *)(lVar1 + 0x1c) = uVar3;
    local_20 = CONCAT44(local_20._4_4_,*(undefined4 *)(lVar1 + 0x18));
    iVar2 = FUN_018910d0(param_1[0x17]);
    local_20 = CONCAT44(*(int *)(lVar1 + 0x1c) + iVar2 + 6,(undefined4)local_20);
    local_20 = FUN_0064d1f0(param_1,&local_20);
    *(undefined1 *)(param_1 + 0xb8) = 0;
    iVar2 = FUN_00807f70(*(undefined8 *)PTR_DAT_02005950);
    if (iVar2 < local_20._4_4_) {
      *(undefined1 *)(param_1 + 0xb8) = 1;
    }
  }
  else if (*param_2 == 0x197) {
    iVar2 = (**(code **)(*param_1 + 0x260))(param_1);
    if (*(int *)((longlong)param_1 + 0x49c) < iVar2) {
      FUN_01891fb0(auStack_48);
    }
  }
  else {
    FUN_01891fb0(auStack_48);
  }
  return;
}

