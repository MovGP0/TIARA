/* Ghidra address: 01302d60 */
/* Ghidra symbol: FUN_01302d60 */


void FUN_01302d60(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong local_28;
  longlong local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  if (*(int *)(param_1 + 0xd8) == 4) {
    iVar6 = *(int *)(param_1 + 0x98) + 1;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x98);
  }
  iVar2 = FUN_012e26c0(*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0xac8));
  if (iVar2 != 0) {
    lVar4 = FUN_006df500(*(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x700) + 0x550),iVar6);
    uVar5 = FUN_012e2590(*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0xac8),
                         *(undefined8 *)(lVar4 + 0x10));
    *(undefined8 *)(param_1 + 0x90) = uVar5;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      FUN_012dcbe0(*(undefined8 *)(param_1 + 0x90),local_20);
      if (local_20[0] != 0) {
        *(undefined4 *)(param_1 + 0x9c) = 1;
      }
      iVar6 = FUN_012dd0a0(*(undefined8 *)(param_1 + 0x90));
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + iVar6;
    }
  }
  if (*(int *)(param_1 + 0xd8) == 4) {
    uVar5 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0xaf8),
                         *(undefined4 *)(param_1 + 0x98));
    *(undefined8 *)(param_1 + 0x88) = uVar5;
  }
  else {
    uVar5 = FUN_006df500(*(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x700) + 0x550),
                         *(undefined4 *)(param_1 + 0x98));
    FUN_01301140(*(undefined8 *)(param_1 + 0xd0),uVar5,1,0,
                 *(undefined1 *)(*(longlong *)(param_1 + 0xd0) + 0xabc));
    *(int *)(param_1 + 0x9c) =
         *(int *)(param_1 + 0x9c) + *(int *)(*(longlong *)(param_1 + 0xd0) + 0xad0);
    lVar4 = FUN_006df500(*(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x700) + 0x550),
                         *(undefined4 *)(param_1 + 0x98));
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 0x838);
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    uVar5 = FUN_012e53b0(&DAT_012e38a0,1,*(undefined8 *)(lVar4 + 0x10),
                         *(undefined4 *)(param_1 + 0x9c),uVar3);
    *(undefined8 *)(param_1 + 0x88) = uVar5;
  }
  *(undefined4 *)(param_1 + 0x84) = 0;
  if (*(int *)(param_1 + 0x9c) != 0) {
    if (*(longlong *)(param_1 + 0x90) != 0) {
      FUN_012dcbe0(*(undefined8 *)(param_1 + 0x90),&local_28);
      if (local_28 != 0) {
        FUN_012e5ff0(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x84),0);
        *(undefined4 *)(param_1 + 0x84) = 1;
      }
      iVar6 = FUN_012dd0b0();
      if ((iVar6 != 0) && (iVar6 = FUN_012dd0b0(), -1 < iVar6 + -1)) {
        do {
          FUN_012e5ff0(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x84),1);
          *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    iVar6 = *(int *)(*(longlong *)(param_1 + 0xd0) + 0xad0);
    if ((iVar6 != 0) && (-1 < iVar6 + -1)) {
      do {
        FUN_012e5ff0(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x84),2);
        *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  if (*(int *)(param_1 + 0x9c) == *(int *)(*(longlong *)(param_1 + 0xd0) + 0xad0)) {
    FUN_012e58c0(*(undefined8 *)(param_1 + 0x88),0,0);
    FUN_012e58c0(*(undefined8 *)(param_1 + 0x88),1,0);
  }
  if (*(int *)(param_1 + 0xd8) == 0) {
    FUN_013039b0(*(undefined8 *)(param_1 + 0xd0),2,*(undefined8 *)(param_1 + 0x88),0);
  }
  if (*(int *)(param_1 + 0xd8) == 3) {
    iVar2 = FUN_006decb0(*(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x700) + 0x550));
    iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0xaf8) + 0x10);
    if ((iVar6 < iVar2 + -1) && (*(int *)(param_1 + 0x98) <= iVar6)) {
      FUN_013039b0(*(undefined8 *)(param_1 + 0xd0),3,*(undefined8 *)(param_1 + 0x88),
                   *(int *)(param_1 + 0x98) + -1);
    }
    else {
      FUN_013039b0(*(undefined8 *)(param_1 + 0xd0),2,*(undefined8 *)(param_1 + 0x88),0);
    }
  }
  FUN_00414560(&local_28,2);
  return;
}

