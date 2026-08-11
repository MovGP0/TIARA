/* Ghidra address: 01b5d3b0 */
/* Ghidra symbol: FUN_01b5d3b0 */


undefined8 FUN_01b5d3b0(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  byte bVar7;
  byte local_79;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined1 local_48 [14];
  byte local_3a;
  byte local_39 [9];
  
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_010d9a38,1);
    (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined8 *)(param_1 + 0x78));
    FUN_004b67b0(plVar3,0);
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x90))(*(longlong **)(param_1 + 0x78));
    FUN_00e1d020(local_39,&local_50);
    if (local_39[0] != 0) {
      local_79 = 0;
      bVar7 = local_39[0];
      do {
        FUN_004169a0(&local_58,local_50 + (ulonglong)local_79 * 0x29);
        plVar4 = (longlong *)FUN_010c0600(&local_58);
        iVar2 = (**(code **)(*plVar3 + 0xb0))(plVar3,local_58);
        if (iVar2 == -1) {
          lVar6 = FUN_01107790(&PTR_FUN_011061a0,1);
        }
        else {
          uVar5 = (**(code **)(*plVar3 + 0x30))(plVar3,iVar2);
          lVar6 = FUN_004113f0(uVar5,&PTR_FUN_011061a0);
          (**(code **)(*plVar3 + 0x98))(plVar3,iVar2);
        }
        FUN_00414ad0(lVar6 + 8,local_58);
        iVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
        if (1 < iVar2) {
          (**(code **)(*plVar4 + 0x18))(plVar4,&local_60,1);
          uVar1 = FUN_0043fc00(local_60);
          *(undefined1 *)(lVar6 + 0x158) = uVar1;
        }
        iVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
        if (2 < iVar2) {
          (**(code **)(*plVar4 + 0x18))(plVar4,&local_68,2);
          iVar2 = FUN_0043fc00(local_68);
          *(undefined2 *)(lVar6 + 0x2e) = *(undefined2 *)(PTR_DAT_02004570 + (longlong)iVar2 * 4);
        }
        iVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
        if (3 < iVar2) {
          (**(code **)(*plVar4 + 0x18))(plVar4,&local_70,3);
          uVar1 = FUN_0043fc00(local_70);
          *(undefined1 *)(lVar6 + 0x2c) = uVar1;
        }
        if (*(char *)(param_1 + 0x98) == '\0') {
          FUN_00e1cc60(&local_3a);
          uVar1 = FUN_0040c770((double)local_3a / 2.0);
          *(undefined1 *)(lVar6 + 0x2a) = uVar1;
          FUN_00e1cd70(lVar6 + 0x2a,lVar6 + 0x118,1);
        }
        else {
          FUN_00e1d120(local_79);
          *(undefined1 *)(lVar6 + 0x30) = 0xe;
          FUN_00e1cce0(lVar6 + 0x118,local_48);
          FUN_00e1ce00(lVar6 + 0x2a,lVar6 + 0x118,0);
        }
        *(uint *)(lVar6 + 0x80) = (uint)local_79 % 0xb;
        (**(code **)(**(longlong **)(param_1 + 0x78) + 0x80))
                  (*(longlong **)(param_1 + 0x78),*(undefined8 *)(lVar6 + 8));
        FUN_00410f20(plVar4);
        local_79 = local_79 + 1;
        bVar7 = bVar7 - 1;
      } while (bVar7 != 0);
      FUN_004095f0(local_50,(uint)local_39[0] * 0x29);
    }
    FUN_00410f20(plVar3);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  FUN_00414560(&local_70,4);
  return uVar5;
}

