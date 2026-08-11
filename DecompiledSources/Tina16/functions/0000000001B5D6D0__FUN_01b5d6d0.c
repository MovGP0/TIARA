/* Ghidra address: 01b5d6d0 */
/* Ghidra symbol: FUN_01b5d6d0 */


undefined8 FUN_01b5d6d0(longlong param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  byte bVar7;
  byte local_69;
  longlong local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined1 local_38 [14];
  byte local_2a;
  byte local_29;
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_00e1d0a0(&local_29,&local_40);
    plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_010d9a38,1);
    (**(code **)(*plVar4 + 0x10))(plVar4,*(undefined8 *)(param_1 + 8));
    FUN_004b67b0(plVar4,0);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x90))(*(longlong **)(param_1 + 8));
    if (local_29 != 0) {
      local_69 = 0;
      bVar7 = local_29;
      do {
        FUN_004169a0(&local_48,local_40 + (ulonglong)local_69 * 0x29);
        plVar5 = (longlong *)FUN_010c0600(&local_48);
        iVar3 = (**(code **)(*plVar4 + 0xb0))(plVar4,local_48);
        if (iVar3 == -1) {
          local_68 = FUN_01107790(&PTR_FUN_011061a0,1);
        }
        else {
          uVar6 = (**(code **)(*plVar4 + 0x30))(plVar4,iVar3);
          local_68 = FUN_004113f0(uVar6,&PTR_FUN_011061a0);
          (**(code **)(*plVar4 + 0x98))(plVar4,iVar3);
        }
        FUN_00414ad0(local_68 + 8,local_48);
        iVar3 = (**(code **)(*plVar5 + 0x28))(plVar5);
        if (1 < iVar3) {
          (**(code **)(*plVar5 + 0x18))(plVar5,&local_50,1);
          uVar2 = FUN_0043fc00(local_50);
          *(undefined2 *)(local_68 + 0x2e) = uVar2;
        }
        iVar3 = (**(code **)(*plVar5 + 0x28))(plVar5);
        if (2 < iVar3) {
          (**(code **)(*plVar5 + 0x18))(plVar5,&local_58,2);
          uVar1 = FUN_0043fc00(local_58);
          *(undefined1 *)(local_68 + 0x2c) = uVar1;
        }
        if (*(char *)(param_1 + 0x98) == '\0') {
          FUN_00e1cc60(&local_2a);
          uVar1 = FUN_0040c770((double)local_2a / 2.0);
          *(undefined1 *)(local_68 + 0x2a) = uVar1;
          FUN_00e1cd70(local_68 + 0x2a,local_68 + 0x118,1);
        }
        else {
          FUN_00e1d1a0(local_69);
          FUN_00e1cc60(local_68 + 0x30);
          FUN_00e1cce0(local_38,local_68 + 0x118);
          if (*(char *)(local_68 + 0x30) == '\0') {
            *(undefined1 *)(local_68 + 0x30) = 0xfe;
            FUN_010c0d70(local_68 + 0x2a,local_68 + 0x118,0,
                         CONCAT71((int7)((ulonglong)local_68 >> 8),0xfe) & 0xffffffff,
                         0x3fb999999999999a);
          }
          else {
            FUN_00e1ce90(local_68 + 0x2a,local_68 + 0x118,0);
          }
          *(undefined1 *)(local_68 + 0x120) = 10;
        }
        *(uint *)(local_68 + 0x80) = (uint)local_69 % 0xb;
        (**(code **)(**(longlong **)(param_1 + 8) + 0x80))
                  (*(longlong **)(param_1 + 8),*(undefined8 *)(local_68 + 8));
        FUN_00410f20(plVar5);
        local_69 = local_69 + 1;
        bVar7 = bVar7 - 1;
      } while (bVar7 != 0);
      FUN_00e1d1a0(0);
      FUN_004095f0(local_40,(uint)local_29 * 0x29);
    }
    FUN_00410f20(plVar4);
  }
  uVar6 = *(undefined8 *)(param_1 + 8);
  FUN_00414560(&local_58,3);
  return uVar6;
}

