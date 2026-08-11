/* Ghidra address: 00f44870 */
/* Ghidra symbol: FUN_00f44870 */


void FUN_00f44870(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  int local_250;
  undefined4 uStack_24c;
  int local_248 [2];
  longlong local_240;
  undefined1 local_232 [514];
  undefined1 local_30 [16];
  undefined8 local_20;
  
  local_240 = 0;
  local_20 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
  lVar5 = thunk_FUN_04129e10(local_20);
  if (lVar5 != 0) {
    thunk_FUN_03b3efbf(lVar5,local_232,0x202);
    thunk_FUN_0417e313(lVar5,&local_20);
    iVar2 = FUN_00442790(local_232,L"ListBox");
    if (iVar2 == 0) {
      uVar6 = FUN_00b95ac0(&local_20);
      iVar2 = thunk_FUN_041b2403(lVar5,0x1a9,0,uVar6);
      if ((-1 < iVar2) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x6d0) + 0x618) + 0x4d0) + 0x4a0) !=
          0)) {
        plVar1 = *(longlong **)
                  (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x6d0) + 0x618) + 0x4d0) +
                  0x4a0);
        iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
        if (iVar2 < iVar3) {
          plVar1 = *(longlong **)
                    (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x6d0) + 0x618) + 0x4d0) +
                    0x4a0);
          (**(code **)(*plVar1 + 0x18))(plVar1,&local_240,iVar2);
          uVar6 = thunk_FUN_040ef593(0);
          uVar8 = 0;
          if (local_240 != 0) {
            uVar8 = *(undefined4 *)(local_240 + -4);
          }
          uVar7 = FUN_00416740(local_240);
          thunk_FUN_040d447e(uVar6,uVar7,uVar8,local_248);
          thunk_FUN_041a9b5c(0,uVar6);
          if (local_248[0] <
              *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x6d0) + 0x618) + 0x4d0)
                      + 0x98)) {
            FUN_0065f800(*(undefined8 *)(param_1 + 0x760));
            FUN_00414480(param_1 + 0x758);
          }
          else {
            iVar2 = FUN_00416db0(local_240,*(undefined8 *)(param_1 + 0x758));
            if (iVar2 != 0) {
              uVar6 = FUN_007ffaf0(param_1);
              iVar2 = FUN_00807790(uVar6);
              uVar6 = FUN_007ffaf0(param_1);
              iVar3 = FUN_008077f0(uVar6);
              iVar4 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
              (**(code **)(**(longlong **)(param_1 + 0x760) + 0x290))
                        (*(longlong **)(param_1 + 0x760),local_30,((iVar2 + iVar3) - iVar4) + -0x10,
                         local_240,0);
              FUN_0064e030(*(undefined8 *)(param_1 + 0x760),0xff000018);
              uVar6 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
              local_250 = (int)uVar6;
              uStack_24c = (undefined4)((ulonglong)uVar6 >> 0x20);
              FUN_00429ca0(local_30,local_250 + 0x10,uStack_24c);
              (**(code **)(**(longlong **)(param_1 + 0x760) + 0x270))
                        (*(longlong **)(param_1 + 0x760),local_30,local_240);
              FUN_00414ad0(param_1 + 0x758,local_240);
            }
          }
        }
      }
    }
    else {
      FUN_0065f800(*(undefined8 *)(param_1 + 0x760));
      FUN_00414480(param_1 + 0x758);
    }
  }
  FUN_00414480(&local_240);
  return;
}

