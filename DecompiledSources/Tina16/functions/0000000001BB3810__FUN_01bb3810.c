/* Ghidra address: 01bb3810 */
/* Ghidra symbol: FUN_01bb3810 */


void FUN_01bb3810(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  int local_248;
  undefined4 uStack_244;
  undefined8 local_240;
  undefined1 local_232 [514];
  undefined1 local_30 [16];
  undefined8 local_20;
  
  local_240 = 0;
  cVar2 = FUN_006838c0(*(undefined8 *)(param_1 + 0x6e0));
  if (cVar2 == '\0') {
    FUN_0065f800(*(undefined8 *)(param_1 + 0x770));
    FUN_00414480(param_1 + 0x788);
  }
  else {
    local_20 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
    lVar6 = thunk_FUN_04129e10(local_20);
    if (lVar6 != 0) {
      thunk_FUN_03b3efbf(lVar6,local_232,0x202);
      iVar3 = FUN_00442790(local_232,L"ComboLBox");
      if (iVar3 == 0) {
        thunk_FUN_0417e313(lVar6,&local_20);
        uVar7 = FUN_00b95ac0(&local_20);
        iVar3 = thunk_FUN_041b2403(lVar6,0x1a9,0,uVar7);
        if (-1 < iVar3) {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6e0) + 0x4f0);
          iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
          if (iVar3 < iVar4) {
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6e0) + 0x4f0);
            (**(code **)(*plVar1 + 0x18))(plVar1,&local_240,iVar3);
            uVar7 = FUN_007ffbe0(param_1);
            iVar3 = FUN_005fdff0(uVar7,local_240);
            if (*(int *)(*(longlong *)(param_1 + 0x6e0) + 0x98) + -5 < iVar3) {
              iVar3 = FUN_00416db0(local_240,*(undefined8 *)(param_1 + 0x788));
              if (iVar3 != 0) {
                uVar7 = FUN_007ffaf0(param_1);
                iVar3 = FUN_00807790(uVar7);
                uVar7 = FUN_007ffaf0(param_1);
                iVar4 = FUN_008077f0(uVar7);
                iVar5 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
                (**(code **)(**(longlong **)(param_1 + 0x770) + 0x290))
                          (*(longlong **)(param_1 + 0x770),local_30,
                           ((iVar3 + iVar4) - iVar5) + -0x10,local_240,0);
                FUN_0064e030(*(undefined8 *)(param_1 + 0x770),0xff000018);
                uVar7 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
                local_248 = (int)uVar7;
                uStack_244 = (undefined4)((ulonglong)uVar7 >> 0x20);
                FUN_00429ca0(local_30,local_248 + 0x10,uStack_244);
                (**(code **)(**(longlong **)(param_1 + 0x770) + 0x270))
                          (*(longlong **)(param_1 + 0x770),local_30,local_240);
                FUN_00414ad0(param_1 + 0x788,local_240);
              }
            }
            else {
              FUN_0065f800(*(undefined8 *)(param_1 + 0x770));
              FUN_00414480(param_1 + 0x788);
            }
          }
        }
      }
    }
  }
  FUN_00414480(&local_240);
  return;
}

