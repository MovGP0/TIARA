/* Ghidra address: 00ed58a0 */
/* Ghidra symbol: FUN_00ed58a0 */


void FUN_00ed58a0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 local_260;
  undefined8 local_258;
  longlong local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined1 local_232 [514];
  undefined1 local_30 [16];
  undefined8 local_20;
  
  local_260 = 0;
  local_250 = 0;
  local_258 = 0;
  local_240 = 0;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x848) + 0xf0))(*(longlong **)(param_1 + 0x848));
  if (cVar2 != '\0') {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x850),&local_258);
    uVar7 = FUN_0043ea00(&local_250,local_258);
    if (local_250 != 0) {
      uVar3 = (undefined4)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      goto LAB_00ed591b;
    }
  }
  uVar3 = 0;
LAB_00ed591b:
  (**(code **)(**(longlong **)(param_1 + 0x860) + 0x128))(*(longlong **)(param_1 + 0x860),uVar3);
  uVar7 = (**(code **)(**(longlong **)(param_1 + 0x858) + 0x260))(*(longlong **)(param_1 + 0x858));
  (**(code **)(**(longlong **)(param_1 + 0x868) + 0x128))
            (*(longlong **)(param_1 + 0x868),
             CONCAT71((int7)((ulonglong)uVar7 >> 8),0 < (int)uVar7) & 0xffffffff);
  cVar2 = FUN_006838c0(*(undefined8 *)(param_1 + 0x858));
  if (cVar2 == '\0') {
    FUN_0065f800(*(undefined8 *)(param_1 + 0x930));
    FUN_00414480(param_1 + 0x8f8);
  }
  else {
    local_20 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
    lVar8 = thunk_FUN_04129e10(local_20);
    if (lVar8 != 0) {
      thunk_FUN_03b3efbf(lVar8,local_232,0x202);
      iVar4 = FUN_00442790(local_232,L"ComboLBox");
      if (iVar4 == 0) {
        thunk_FUN_0417e313(lVar8,&local_20);
        uVar7 = FUN_00b95ac0(&local_20);
        iVar4 = thunk_FUN_041b2403(lVar8,0x1a9,0,uVar7);
        if (-1 < iVar4) {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x858) + 0x4f0);
          iVar5 = (**(code **)(*plVar1 + 0x28))(plVar1);
          if (iVar4 < iVar5) {
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x858) + 0x4f0);
            (**(code **)(*plVar1 + 0x18))(plVar1,&local_260,iVar4);
            FUN_00eae740(&local_240,local_260);
            iVar4 = FUN_00416db0(local_240,*(undefined8 *)(param_1 + 0x8f8));
            if (iVar4 != 0) {
              uVar7 = FUN_007ffaf0(param_1);
              iVar4 = FUN_00807790(uVar7);
              uVar7 = FUN_007ffaf0(param_1);
              iVar5 = FUN_008077f0(uVar7);
              iVar6 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
              (**(code **)(**(longlong **)(param_1 + 0x930) + 0x290))
                        (*(longlong **)(param_1 + 0x930),local_30,((iVar4 + iVar5) - iVar6) + -0x10,
                         local_240,0);
              FUN_0064e030(*(undefined8 *)(param_1 + 0x930),0xff000018);
              uVar7 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
              local_248._0_4_ = (int)uVar7;
              iVar4 = (int)local_248 + 0x10;
              local_248._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
              uVar3 = local_248._4_4_;
              local_248 = uVar7;
              FUN_00429ca0(local_30,iVar4,uVar3);
              (**(code **)(**(longlong **)(param_1 + 0x930) + 0x270))
                        (*(longlong **)(param_1 + 0x930),local_30,local_240);
              FUN_00414ad0(param_1 + 0x8f8,local_240);
            }
          }
        }
      }
    }
  }
  FUN_00414480(&local_260);
  FUN_00414480(&local_258);
  FUN_00414480(&local_250);
  FUN_00414480(&local_240);
  return;
}

