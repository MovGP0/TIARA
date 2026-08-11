/* Ghidra address: 010faf40 */
/* Ghidra symbol: FUN_010faf40 */


void FUN_010faf40(longlong param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  lVar4 = *(longlong *)(param_1 + 0x9b0);
  if (*(longlong *)(lVar4 + 0x50) == 0) {
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x7a8);
  if (bVar1 < 0x12) {
    if (bVar1 == 0x11) {
      *(undefined1 *)(param_1 + 0x7a8) = 0;
      return;
    }
    if (bVar1 == 2) {
      (**(code **)(**(longlong **)(param_1 + 0xad0) + 0x140))
                (*(longlong **)(param_1 + 0xad0),*(undefined4 *)(param_1 + 0x768),
                 *(undefined4 *)(param_1 + 0x76c),*(undefined4 *)(param_1 + 0x770),
                 *(undefined4 *)(param_1 + 0x774),*(undefined8 *)(lVar4 + 0x68));
      FUN_01acee70(*(undefined8 *)(lVar4 + 0x50));
      (**(code **)(**(longlong **)(param_1 + 0xad0) + 0x148))
                (*(longlong **)(param_1 + 0xad0),*(undefined4 *)(param_1 + 0x768),
                 *(undefined4 *)(param_1 + 0x76c),*(undefined4 *)(param_1 + 0x770),
                 *(undefined4 *)(param_1 + 0x774));
      FUN_01ce4cd0(*(undefined8 *)(param_1 + 0xad0),*(undefined8 *)(lVar4 + 0x68),param_1);
      FUN_01acedf0(*(undefined8 *)(lVar4 + 0x50));
      FUN_01aceef0(*(undefined8 *)(lVar4 + 0x50));
      FUN_01a8dee0(*(undefined8 *)(*(longlong *)(lVar4 + 0x50) + 0xe8),
                   *(undefined8 *)(param_1 + 0xad0));
      FUN_01ae5650(*(undefined8 *)(lVar4 + 0x50));
      *(undefined8 *)(param_1 + 0xad0) = 0;
      *(undefined1 *)(param_1 + 0x7a8) = 0;
      return;
    }
    if (bVar1 == 4) {
      plVar10 = *(longlong **)(*(longlong *)(lVar4 + 0x50) + 0xf0);
      if ((plVar10 != (longlong *)0x0) && ((char)plVar10[2] != '\0')) {
        (**(code **)(*plVar10 + 0x50))(plVar10,0);
        local_50 = FUN_00498310(0,0);
        plVar10 = *(longlong **)(*(longlong *)(lVar4 + 0x50) + 0xf0);
        (**(code **)(*plVar10 + 0xd8))(plVar10,param_1,&local_50,*(undefined8 *)(lVar4 + 0x68));
        FUN_01a8dee0(*(undefined8 *)(*(longlong *)(lVar4 + 0x50) + 0xe8),
                     *(undefined8 *)(*(longlong *)(lVar4 + 0x50) + 0xf0));
        FUN_01ae5650(*(undefined8 *)(lVar4 + 0x50));
      }
      plVar10 = *(longlong **)(*(longlong *)(lVar4 + 0x50) + 0xf8);
      if ((plVar10 != (longlong *)0x0) && ((char)plVar10[2] != '\0')) {
        (**(code **)(*plVar10 + 0x50))(plVar10,0);
        local_50 = FUN_00498310(0,0);
        plVar10 = *(longlong **)(*(longlong *)(lVar4 + 0x50) + 0xf8);
        (**(code **)(*plVar10 + 0xd8))(plVar10,param_1,&local_50,*(undefined8 *)(lVar4 + 0x68));
        FUN_01a8dee0(*(undefined8 *)(*(longlong *)(lVar4 + 0x50) + 0xe8),
                     *(undefined8 *)(*(longlong *)(lVar4 + 0x50) + 0xf8));
        FUN_01ae5650(*(undefined8 *)(lVar4 + 0x50));
      }
      *(undefined1 *)(param_1 + 0x7a8) = 0;
      return;
    }
    if (bVar1 != 5) {
      if (bVar1 != 8) {
        return;
      }
      plVar10 = *(longlong **)(param_1 + 0xab0);
      (**(code **)(*plVar10 + 0x78))(plVar10,*(undefined8 *)(lVar4 + 0x68));
      uVar9 = (undefined4)plVar10[0xd];
      local_44 = *(undefined4 *)((longlong)plVar10 + 0x6c);
      uVar2 = (undefined4)plVar10[0xe];
      uVar3 = *(undefined4 *)((longlong)plVar10 + 0x74);
      local_48 = uVar9;
      local_40 = uVar2;
      local_3c = uVar3;
      uVar8 = FUN_00b905f0(uVar9,uVar2);
      uVar5 = local_44;
      *(undefined4 *)(plVar10 + 0xd) = uVar8;
      uVar8 = FUN_00b905f0(local_44,uVar3);
      *(undefined4 *)((longlong)plVar10 + 0x6c) = uVar8;
      uVar9 = FUN_00b905e0(uVar9,uVar2);
      *(undefined4 *)(plVar10 + 0xe) = uVar9;
      uVar9 = FUN_00b905e0(uVar5,uVar3);
      *(undefined4 *)((longlong)plVar10 + 0x74) = uVar9;
      (**(code **)(*plVar10 + 0x70))(plVar10,*(undefined8 *)(lVar4 + 0x68));
      (**(code **)(*plVar10 + 0xe8))(plVar10);
      *(undefined8 *)(param_1 + 0xab0) = 0;
      *(undefined1 *)(param_1 + 0x7a8) = 0;
      return;
    }
    lVar4 = *(longlong *)(lVar4 + 0x50);
    plVar10 = *(longlong **)(lVar4 + 0xb8);
    if ((char)plVar10[2] != '\0') {
      (**(code **)(*plVar10 + 0x50))(plVar10,0);
    }
    plVar10 = *(longlong **)(lVar4 + 0xc0);
    if ((char)plVar10[2] != '\0') {
      (**(code **)(*plVar10 + 0x50))(plVar10,0);
    }
    plVar10 = *(longlong **)(lVar4 + 200);
    if ((char)plVar10[2] != '\0') {
      (**(code **)(*plVar10 + 0x50))(plVar10,0);
    }
    plVar10 = *(longlong **)(lVar4 + 0xd0);
    if ((char)plVar10[2] != '\0') {
      plVar10 = (longlong *)(**(code **)(*plVar10 + 0x50))(plVar10,0);
    }
    if (*(char *)(lVar4 + 0x108) != '\0') {
      if (*(byte *)(lVar4 + 0xb0) < 8) {
        bVar12 = ((int)CONCAT71((int7)((ulonglong)plVar10 >> 8),1) <<
                  (*(byte *)(lVar4 + 0xb0) & 0x1f) & 1U) != 0;
      }
      else {
        bVar12 = false;
      }
      if (bVar12) {
        FUN_01acfa60(lVar4);
        goto LAB_010fb1b9;
      }
    }
    FUN_01acfc60(lVar4);
LAB_010fb1b9:
    FUN_01aceb90(lVar4,1);
    *(undefined1 *)(param_1 + 0x7a8) = 0;
    return;
  }
  if (bVar1 != 0x12) {
    if (bVar1 == 0x13) {
      *(undefined1 *)(param_1 + 0x7a8) = 0;
      return;
    }
    if (bVar1 != 0x16) {
      return;
    }
    plVar10 = *(longlong **)(param_1 + 0xac8);
    FUN_010ef4e0(plVar10,*(undefined8 *)(lVar4 + 0x68));
    (**(code **)(*plVar10 + 0x130))(plVar10,param_1,*(undefined8 *)(lVar4 + 0x68));
    *(undefined1 *)(param_1 + 0x7a8) = 0;
    return;
  }
  (**(code **)(**(longlong **)(param_1 + 0xac8) + 0x50))(*(longlong **)(param_1 + 0xac8),0);
  plVar10 = *(longlong **)(param_1 + 0xac8);
  cVar6 = FUN_004113d0(plVar10,&LAB_00f12330);
  if (cVar6 != '\0') {
    (**(code **)(*plVar10 + 0x120))(plVar10,param_1,*(undefined8 *)(lVar4 + 0x68));
    FUN_00f14480(*(undefined8 *)(param_1 + 0xac8),param_1 + 0xae0,param_1 + 0xae4);
    FUN_00f149f0(*(undefined8 *)(param_1 + 0xac8),param_1,*(undefined8 *)(lVar4 + 0x68));
    (**(code **)(**(longlong **)(param_1 + 0xac8) + 0x128))
              (*(longlong **)(param_1 + 0xac8),param_1,*(undefined8 *)(lVar4 + 0x68));
  }
  FUN_00498350(&local_60,0,0,0,0);
  cVar6 = FUN_01a8e470(param_1 + 0xaf0,&local_60);
  if (cVar6 == '\0') {
    uVar11 = FUN_00498310(*(undefined4 *)(param_1 + 0xae0),*(undefined4 *)(param_1 + 0xae4));
    iVar7 = thunk_FUN_03f16006(param_1 + 0xaf0,uVar11);
    if (iVar7 == 0) {
      (**(code **)(**(longlong **)(param_1 + 0xac8) + 0xa8))
                (*(longlong **)(param_1 + 0xac8),
                 *(int *)(param_1 + 0xae8) - *(int *)(param_1 + 0xae0),
                 *(int *)(param_1 + 0xaec) - *(int *)(param_1 + 0xae4));
      (**(code **)(**(longlong **)(param_1 + 0xac8) + 0xe8))(*(longlong **)(param_1 + 0xac8));
      local_50 = FUN_00498310(*(undefined4 *)(param_1 + 0xae8),*(undefined4 *)(param_1 + 0xaec));
      (**(code **)(**(longlong **)(param_1 + 0xac8) + 0xd8))
                (*(longlong **)(param_1 + 0xac8),param_1,&local_50,*(undefined8 *)(lVar4 + 0x68));
      goto LAB_010fb54c;
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0xac8) + 0xe8))(*(longlong **)(param_1 + 0xac8));
  local_50 = FUN_00498310(*(undefined4 *)(param_1 + 0xae8),*(undefined4 *)(param_1 + 0xaec));
  (**(code **)(**(longlong **)(param_1 + 0xac8) + 0xd8))
            (*(longlong **)(param_1 + 0xac8),param_1,&local_50,*(undefined8 *)(lVar4 + 0x68));
  local_50 = FUN_00498310(*(undefined4 *)(param_1 + 0xae0),*(undefined4 *)(param_1 + 0xae4));
  (**(code **)(**(longlong **)(param_1 + 0xac8) + 0xd8))
            (*(longlong **)(param_1 + 0xac8),param_1,&local_50,*(undefined8 *)(lVar4 + 0x68));
LAB_010fb54c:
  FUN_00498350(&local_60,0,0,0,0);
  *(undefined8 *)(param_1 + 0xaf0) = local_60;
  *(undefined8 *)(param_1 + 0xaf8) = uStack_58;
  *(undefined1 *)(param_1 + 0x7a8) = 0;
  return;
}

