/* Ghidra address: 00c87180 */
/* Ghidra symbol: FUN_00c87180 */


void FUN_00c87180(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined1 local_232 [514];
  undefined1 local_30 [16];
  undefined8 local_20;
  
  local_250 = 0;
  local_240 = 0;
  cVar2 = FUN_006838c0(*(undefined8 *)(param_1 + 0x6e0));
  if (cVar2 == '\0') {
    FUN_0065f800(*(undefined8 *)(param_1 + 0x6f8));
    FUN_00414480(param_1 + 0x710);
  }
  else {
    local_20 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
    lVar7 = thunk_FUN_04129e10(local_20);
    if (lVar7 != 0) {
      thunk_FUN_03b3efbf(lVar7,local_232,0x202);
      iVar3 = FUN_00442790(local_232,L"ComboLBox");
      if (iVar3 == 0) {
        thunk_FUN_0417e313(lVar7,&local_20);
        uVar8 = FUN_00b95ac0(&local_20);
        iVar3 = thunk_FUN_041b2403(lVar7,0x1a9,0,uVar8);
        if (0 < iVar3) {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6e0) + 0x4f0);
          iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
          if (iVar3 < iVar4) {
            plVar1 = *(longlong **)(param_1 + 0x6e0);
            uVar5 = (**(code **)(*plVar1 + 0x260))(plVar1);
            (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))
                      ((longlong *)plVar1[0x9e],&local_250,uVar5);
            FUN_00c40520(*(undefined8 *)PTR_DAT_02004440,&local_240,local_250);
            iVar3 = FUN_00416db0(local_240,*(undefined8 *)(param_1 + 0x710));
            if (iVar3 != 0) {
              uVar8 = FUN_007ffaf0(param_1);
              iVar3 = FUN_00807790(uVar8);
              uVar8 = FUN_007ffaf0(param_1);
              iVar4 = FUN_008077f0(uVar8);
              iVar6 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
              (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x290))
                        (*(longlong **)(param_1 + 0x6f8),local_30,((iVar3 + iVar4) - iVar6) + -0x10,
                         local_240,0);
              FUN_0064e030(*(undefined8 *)(param_1 + 0x6f8),0xff000018);
              uVar8 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
              local_248._0_4_ = (int)uVar8;
              iVar3 = (int)local_248 + 0x10;
              local_248._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
              uVar5 = local_248._4_4_;
              local_248 = uVar8;
              FUN_00429ca0(local_30,iVar3,uVar5);
              (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x270))
                        (*(longlong **)(param_1 + 0x6f8),local_30,local_240);
              FUN_00414ad0(param_1 + 0x710,local_240);
            }
          }
        }
      }
    }
  }
  FUN_00414480(&local_250);
  FUN_00414480(&local_240);
  return;
}

