/* Ghidra address: 018a5de0 */
/* Ghidra symbol: FUN_018a5de0 */


void FUN_018a5de0(longlong param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_80;
  char local_75;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  if (*(char *)(param_1 + 0xa9) != '\0') {
    local_75 = param_2;
    if ((*(char *)(param_1 + 0x518) == '\0') &&
       (iVar3 = FUN_004b2060(*(undefined8 *)(param_1 + 0x528)), iVar3 != 0)) {
      lVar7 = FUN_018a73a0(param_1);
      if (lVar7 == 0) {
        return;
      }
      uVar4 = FUN_0064d0b0(param_1);
      uVar5 = FUN_0064d120(param_1);
      uVar8 = thunk_FUN_03976db5(0,0,uVar4,uVar5);
      uVar9 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x490));
      thunk_FUN_0411a732(uVar9,uVar8);
      local_74 = FUN_018a51c0(*(undefined8 *)(param_1 + 0x528),*(undefined4 *)(param_1 + 0x520),0);
      iVar3 = local_74 + -0x3c;
      if (iVar3 <= local_74 + 0x154) {
        iVar10 = ((local_74 + 0x154) - iVar3) + 1;
        do {
          if (-1 < iVar3) {
            iVar6 = FUN_004b2060(*(undefined8 *)(param_1 + 0x528));
            if (iVar6 <= iVar3) break;
            uVar4 = FUN_0064d0b0(param_1);
            local_88 = *(undefined8 *)(param_1 + 0x548);
            local_80 = *(undefined1 *)(param_1 + 0x550);
            FUN_018a5310(*(undefined8 *)(param_1 + 0x528),&local_38,iVar3,uVar4);
            FUN_00423b50(&local_38,-*(int *)(param_1 + 0x51c),-*(int *)(param_1 + 0x520));
            cVar2 = FUN_018a5930(auStack_a8);
            if (cVar2 != '\0') {
              uVar9 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x490));
              local_88 = CONCAT44(local_88._4_4_,local_2c);
              thunk_FUN_041a27b3(uVar9,local_38,local_34,local_30);
            }
          }
          iVar3 = iVar3 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      plVar1 = *(longlong **)(param_1 + 0x490);
      FUN_005fdab0(plVar1[0x10],*(undefined4 *)(param_1 + 0x4ec));
      FUN_005fdcb0(plVar1[0x10],0);
      uVar4 = FUN_0064d0b0(param_1);
      uVar5 = FUN_0064d120(param_1);
      local_88 = CONCAT44(local_88._4_4_,uVar5);
      FUN_00498350(local_48,0,0,uVar4);
      (**(code **)(*plVar1 + 0xa8))(plVar1,local_48);
      uVar9 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x490));
      thunk_FUN_039bba01(uVar9,uVar8);
      uVar4 = FUN_0064d0b0(param_1);
      local_88 = *(undefined8 *)(param_1 + 0x548);
      local_80 = *(undefined1 *)(param_1 + 0x550);
      FUN_018a5310(*(undefined8 *)(param_1 + 0x528),&local_38,*(int *)(param_1 + 0x530) + -1,uVar4);
      FUN_00423b50(&local_38,-*(int *)(param_1 + 0x51c),-*(int *)(param_1 + 0x520));
      plVar1 = *(longlong **)(param_1 + 0x490);
      FUN_005fd4e0(plVar1[0xf],*(undefined4 *)(param_1 + 0x4e8));
      FUN_005fd6d0(plVar1[0xf],2);
      FUN_005fd640(plVar1[0xf],4);
      FUN_005fd670(plVar1[0xf],0);
      local_70 = FUN_00498310(local_38 + -1,local_34 + -1);
      local_68 = FUN_00498310(local_30 + 1,local_34 + -1);
      local_60 = FUN_00498310(local_30 + 1,local_2c + 1);
      local_58 = FUN_00498310(local_38 + -1,local_2c + 1);
      local_50 = FUN_00498310(local_38 + -1,local_34 + -2);
      (**(code **)(*plVar1 + 0xe0))(plVar1,&local_70,4);
      if (local_75 == '\0') {
        iVar3 = local_74 + -0x3c;
        if (iVar3 <= local_74 + 0x154) {
          iVar10 = ((local_74 + 0x154) - iVar3) + 1;
          do {
            if (-1 < iVar3) {
              iVar6 = FUN_004b2060(*(undefined8 *)(param_1 + 0x528));
              if (iVar6 <= iVar3) break;
              uVar4 = FUN_0064d0b0(param_1);
              local_88 = *(undefined8 *)(param_1 + 0x548);
              local_80 = *(undefined1 *)(param_1 + 0x550);
              FUN_018a5310(*(undefined8 *)(param_1 + 0x528),&local_38,iVar3,uVar4);
              FUN_00423b50(&local_38,-*(int *)(param_1 + 0x51c),-*(int *)(param_1 + 0x520));
              local_2c = local_2c + 1;
              cVar2 = FUN_018a5930(auStack_a8);
              if (cVar2 != '\0') {
                FUN_018a5990(auStack_a8,iVar3);
              }
            }
            iVar3 = iVar3 + 1;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
      }
      thunk_FUN_0416f828(uVar8);
      return;
    }
    if ((*(longlong *)(param_1 + 0x568) != 0) &&
       (iVar3 = FUN_004b2060(*(undefined8 *)(param_1 + 0x528)), 0 < iVar3)) {
      (**(code **)(**(longlong **)(param_1 + 0x490) + 0x88))
                (*(longlong **)(param_1 + 0x490),0,0,*(undefined8 *)(param_1 + 0x568));
      return;
    }
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x80),
                 *(undefined4 *)(param_1 + 0x4ec));
    uVar4 = FUN_0064d0b0(param_1);
    uVar5 = FUN_0064d120(param_1);
    local_88 = CONCAT44(local_88._4_4_,uVar5);
    FUN_00498350(local_48,0,0,uVar4);
    (**(code **)(**(longlong **)(param_1 + 0x490) + 0xa8))(*(longlong **)(param_1 + 0x490),local_48)
    ;
  }
  return;
}

