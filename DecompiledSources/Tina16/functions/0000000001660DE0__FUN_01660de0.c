/* Ghidra address: 01660de0 */
/* Ghidra symbol: FUN_01660de0 */


void FUN_01660de0(longlong param_1,char param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_5c8 [43];
  char local_59d;
  int local_59c;
  int local_30;
  undefined1 local_29;
  
  *(undefined4 *)(param_1 + 0x30) = 0;
  local_59d = param_2;
  FUN_00419260(param_1 + 0x28,&DAT_0165b790,1,(longlong)(*(int *)(param_1 + 0x198) + 1));
  iVar5 = *(int *)(param_1 + 0x198);
  local_59c = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = *(longlong *)(param_1 + 400) + (longlong)local_59c * 0x40;
      iVar4 = *(int *)(param_1 + 0x30);
      if ((iVar4 == 0) ||
         (*(longlong *)(lVar2 + 0x10) !=
          *(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)(iVar4 + -1) * 0x18))) {
        if (0 < iVar4) {
          *(int *)(*(longlong *)(param_1 + 0x28) + 0xc + (longlong)(iVar4 + -1) * 0x18) =
               local_59c + -1;
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x30) * 0x18) =
             *(undefined8 *)(lVar2 + 0x10);
        *(int *)(*(longlong *)(param_1 + 0x28) + 8 + (longlong)*(int *)(param_1 + 0x30) * 0x18) =
             local_59c;
        *(undefined1 *)
         (*(longlong *)(param_1 + 0x28) + 0x14 + (longlong)*(int *)(param_1 + 0x30) * 0x18) = 0;
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      }
      if ((*(int *)(lVar2 + 0x18) == 2) || (*(int *)(lVar2 + 0x18) == 3)) {
        *(undefined1 *)
         (*(longlong *)(param_1 + 0x28) + 0x14 + (longlong)(*(int *)(param_1 + 0x30) + -1) * 0x18) =
             1;
        *(undefined4 *)
         (*(longlong *)(param_1 + 0x28) + 0x10 + (longlong)(*(int *)(param_1 + 0x30) + -1) * 0x18) =
             0;
      }
      if (*(char *)(lVar2 + 0x38) != '\0') {
        *(undefined1 *)
         (*(longlong *)(param_1 + 0x28) + 0x14 + (longlong)(*(int *)(param_1 + 0x30) + -1) * 0x18) =
             1;
        *(undefined4 *)
         (*(longlong *)(param_1 + 0x28) + 0x10 + (longlong)(*(int *)(param_1 + 0x30) + -1) * 0x18) =
             0;
      }
      local_59c = local_59c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(int *)(*(longlong *)(param_1 + 0x28) + 0xc + (longlong)(*(int *)(param_1 + 0x30) + -1) * 0x18) =
       *(int *)(param_1 + 0x198) + -1;
  FUN_00419260(param_1 + 0x28,&DAT_0165b790,1,(longlong)*(int *)(param_1 + 0x30));
  if (*(int *)(param_1 + 0x200) == 0) {
    iVar5 = *(int *)(param_1 + 0xd0);
    local_59c = 0;
    if (iVar5 - 1U < 0x80000000) {
      do {
        *(int *)(*(longlong *)(*(longlong *)(param_1 + 200) + (longlong)local_59c * 8) + 0x50) =
             ((*(int *)(param_1 + 0x30) + -1) * (local_59c + 1)) / *(int *)(param_1 + 0xd0);
        local_59c = local_59c + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  iVar4 = 0;
  iVar5 = *(int *)(param_1 + 0x30);
  local_59c = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x28) + (longlong)local_59c * 0x18;
      if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 200) + (longlong)iVar4 * 8) + 0x50) <
          local_59c) {
        iVar4 = iVar4 + 1;
      }
      if (*(char *)(lVar2 + 0x14) == '\0') {
        *(int *)(lVar2 + 0x10) = iVar4;
      }
      local_59c = local_59c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = *(int *)(param_1 + 0xd0);
  local_59c = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 200) + (longlong)local_59c * 8);
      *(undefined4 *)(lVar2 + 8) = 0;
      *(undefined4 *)(lVar2 + 0x20) = 0;
      *(undefined4 *)(lVar2 + 0x38) = 0;
      *(longlong *)(param_1 + 0x13ae0) = lVar2;
      FUN_0165dfb0(param_1,0x53);
      FUN_0165dfb0(param_1,0x48);
      FUN_0165dfb0(param_1,0x81);
      FUN_0165dfb0(param_1,0xec);
      FUN_0165e0c0(param_1,0x40);
      local_59c = local_59c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = *(int *)(param_1 + 0x30);
  local_59c = 0;
  if (iVar5 - 1U < 0x80000000) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x28) + (longlong)local_59c * 0x18;
      iVar4 = *(int *)(lVar2 + 8);
      if (iVar4 <= *(int *)(lVar2 + 0xc)) {
        iVar6 = (*(int *)(lVar2 + 0xc) - iVar4) + 1;
        do {
          if (*(int *)(*(longlong *)(param_1 + 400) + 0x18 + (longlong)iVar4 * 0x40) == 4) {
            piVar1 = (int *)(*(longlong *)
                              (*(longlong *)(param_1 + 200) + (longlong)*(int *)(lVar2 + 0x10) * 8)
                            + 0x38);
            *piVar1 = *piVar1 + 1;
          }
          iVar4 = iVar4 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      local_59c = local_59c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = *(int *)(param_1 + 0xd0);
  local_59c = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 200) + (longlong)local_59c * 8);
      FUN_00419260(lVar2 + 0x30,&DAT_0165aef0,1,(longlong)*(int *)(lVar2 + 0x38));
      *(undefined4 *)(lVar2 + 0x38) = 0;
      local_59c = local_59c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_29 = 1;
  if (1 < *(int *)(param_1 + 0x1d0)) {
    FUN_0165e520(auStack_5c8,0,*(int *)(param_1 + 0x1d0) + -1);
  }
  iVar5 = *(int *)(param_1 + 0x30);
  local_59c = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x28) + (longlong)local_59c * 0x18;
      iVar4 = *(int *)(lVar2 + 8);
      if (iVar4 <= *(int *)(lVar2 + 0xc)) {
        iVar6 = (*(int *)(lVar2 + 0xc) - iVar4) + 1;
        do {
          FUN_0165e6c0(auStack_5c8,
                       *(undefined8 *)
                        (*(longlong *)(param_1 + 200) + (longlong)*(int *)(lVar2 + 0x10) * 8),
                       *(longlong *)(param_1 + 400) + (longlong)iVar4 * 0x40);
          iVar4 = iVar4 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      local_59c = local_59c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_29 = 0;
  if (1 < *(int *)(param_1 + 0x1d0)) {
    FUN_0165e520(auStack_5c8,0,*(int *)(param_1 + 0x1d0) + -1);
  }
  iVar5 = *(int *)(param_1 + 0x1f8);
  local_59c = 0;
  if (-1 < iVar5 + -1) {
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x1f0) + 8 + (longlong)local_59c * 0x10) == 2) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x1f0) + 8 + (longlong)local_59c * 0x10) = 0;
      }
      local_59c = local_59c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  for (local_59c = 0; local_59c < *(int *)(param_1 + 0x1d0); local_59c = local_59c + 1) {
    lVar2 = *(longlong *)(param_1 + 0x1c8) + (longlong)local_59c * 0x28;
    if ((local_59c == 0) ||
       (*(longlong *)(lVar2 + 0x18) !=
        *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x18 + (longlong)(local_59c + -1) * 0x28))) {
      *(longlong *)(param_1 + 0x13ae0) = **(longlong **)(param_1 + 200) + 0x18;
      local_30 = FUN_0165d6d0(param_1,*(undefined8 *)(lVar2 + 0x18));
      if ((local_30 != -1) &&
         (*(int *)(*(longlong *)(param_1 + 0x1f0) + 8 + (longlong)local_30 * 0x10) != 0)) {
        local_30 = -1;
      }
      if (local_30 == -1) {
        FUN_0165e1e0(param_1,1,*(undefined8 *)(lVar2 + 0x18));
      }
    }
    if (*(char *)(lVar2 + 0x20) == '\0') {
      iVar5 = 1;
    }
    else {
      iVar5 = -1;
    }
    while (((local_59c < *(int *)(param_1 + 0x1d0) + -1 &&
            (*(longlong *)(lVar2 + 0x10) ==
             *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x10 + (longlong)(local_59c + 1) * 0x28)
            )) && (*(longlong *)(lVar2 + 0x18) ==
                   *(longlong *)
                    (*(longlong *)(param_1 + 0x1c8) + 0x18 + (longlong)(local_59c + 1) * 0x28)))) {
      local_59c = local_59c + 1;
      if (*(char *)(*(longlong *)(param_1 + 0x1c8) + 0x20 + (longlong)local_59c * 0x28) == '\0') {
        iVar5 = iVar5 + 1;
      }
      else {
        iVar5 = iVar5 + -1;
      }
    }
    bVar7 = iVar5 < 0;
    if (bVar7) {
      iVar5 = -iVar5;
    }
    if (0 < iVar5) {
      do {
        if (*(longlong *)(lVar2 + 0x10) == 0) {
          if (bVar7 && local_30 != -1) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x1f0) + 8 + (longlong)local_30 * 0x10) = 2;
            local_30 = -1;
            FUN_0165dfb0(param_1,0xd9);
            FUN_0165dfb0(param_1,0xee);
          }
          FUN_0165dfb0(param_1,0xd9);
          FUN_0165dfb0(param_1,0xe8);
          if ((local_30 == -1) || (bVar7)) {
            FUN_0165dfb0(param_1,0xde);
            if (bVar7) {
              FUN_0165dfb0(param_1,0xe9);
            }
            else {
              FUN_0165dfb0(param_1,0xc1);
            }
          }
          else {
            *(undefined4 *)(*(longlong *)(param_1 + 0x1f0) + 8 + (longlong)local_30 * 0x10) = 2;
            local_30 = -1;
          }
        }
        else {
          if (bVar7 && local_30 != -1) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x1f0) + 8 + (longlong)local_30 * 0x10) = 2;
            local_30 = -1;
            FUN_0165dfb0(param_1,0xd9);
            FUN_0165dfb0(param_1,0xee);
          }
          if ((local_30 == -1) || (bVar7)) {
            if (bVar7) {
              FUN_0165e1e0(param_1,4,*(undefined8 *)(lVar2 + 0x10));
            }
            else {
              FUN_0165e1e0(param_1,3,*(undefined8 *)(lVar2 + 0x10));
            }
          }
          else {
            *(undefined4 *)(*(longlong *)(param_1 + 0x1f0) + 8 + (longlong)local_30 * 0x10) = 2;
            local_30 = -1;
            FUN_0165e1e0(param_1,1,*(undefined8 *)(lVar2 + 0x10));
          }
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (((local_59c == *(int *)(param_1 + 0x1d0) + -1) ||
        (*(longlong *)(lVar2 + 0x18) !=
         *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x18 + (longlong)(local_59c + 1) * 0x28)))
       && (local_30 == -1)) {
      FUN_0165e1e0(param_1,2,*(undefined8 *)(lVar2 + 0x18));
    }
  }
  iVar5 = *(int *)(param_1 + 0xd0);
  local_59c = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 200) + (longlong)local_59c * 8);
      *(longlong *)(param_1 + 0x13ae0) = lVar2;
      FUN_0165dfb0(param_1,0x48);
      FUN_0165dfb0(param_1,0x81);
      FUN_0165dfb0(param_1,0xc4);
      FUN_0165e0c0(param_1,0x40);
      FUN_0165dfb0(param_1,0x5b);
      FUN_0165dfb0(param_1,0xc3);
      FUN_0165d200(lVar2);
      *(longlong *)(param_1 + 0x13ae0) = lVar2 + 0x18;
      FUN_0165dfb0(param_1,0xc3);
      FUN_0165d200(lVar2 + 0x18);
      local_59c = local_59c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (local_59d == '\0') {
    *(longlong *)(param_1 + 0x13ae0) = param_1 + 0xd8;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    FUN_0165dfb0(param_1,0x48);
    FUN_0165dfb0(param_1,0xba);
    FUN_0165e150(param_1,*(longlong *)(param_1 + 0x130) + 0x1b8);
    FUN_0165dfb0(param_1,0x48);
    FUN_0165dfb0(param_1,0x8b);
    FUN_0165dfb0(param_1,0x12);
    iVar5 = *(int *)(param_1 + 0x238);
    local_59c = 0;
    if (-1 < iVar5 + -1) {
      do {
        iVar4 = *(int *)(*(longlong *)(param_1 + 0x230) + (longlong)local_59c * 4);
        FUN_0165f6c0(auStack_5c8,iVar4,
                     *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x180) + (longlong)iVar4 * 8);
        local_59c = local_59c + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_0165dfb0(param_1,0xc3);
    FUN_0165d200(param_1 + 0xd8);
    if ((*(char *)(param_1 + 0xf4) != '\0') && (*(int *)(param_1 + 0x1e0) != 0)) {
      FUN_0165ee30(auStack_5c8);
      *(undefined4 *)(param_1 + 0x160) = 0;
      *(longlong *)(param_1 + 0x13ae0) = param_1 + 0x158;
      if (*(char *)(param_1 + 0x121) == '\0') {
        FUN_0165f840(auStack_5c8);
      }
      else {
        FUN_016603b0(auStack_5c8);
      }
      FUN_0165dfb0(param_1,0xc3);
      FUN_0165d200(param_1 + 0x158);
      *(undefined4 *)(param_1 + 0x148) = 0;
      *(longlong *)(param_1 + 0x13ae0) = param_1 + 0x140;
      FUN_0165dfb0(param_1,0x48);
      FUN_0165dfb0(param_1,0x31);
      FUN_0165dfb0(param_1,0xd2);
      iVar5 = *(int *)(param_1 + 0x1f8);
      local_59c = 0;
      if (-1 < iVar5 + -1) {
        do {
          puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x1f0) + (longlong)local_59c * 0x10);
          if (*(int *)(puVar3 + 1) < 2) {
            FUN_0165dfb0(param_1,0x48);
            FUN_0165dfb0(param_1,0xb8);
            FUN_0165e150(param_1,*puVar3);
            FUN_0165dfb0(param_1,0x48);
            FUN_0165dfb0(param_1,0x89);
            FUN_0165dfb0(param_1,0x10);
          }
          local_59c = local_59c + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      FUN_0165dfb0(param_1,0xc3);
      FUN_0165d200(param_1 + 0x140);
    }
  }
  return;
}

