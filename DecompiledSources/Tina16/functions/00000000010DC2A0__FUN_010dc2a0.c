/* Ghidra address: 010dc2a0 */
/* Ghidra symbol: FUN_010dc2a0 */


undefined8 FUN_010dc2a0(longlong param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  undefined8 local_60 [2];
  longlong local_50;
  longlong local_48;
  byte local_3b;
  byte local_3a;
  byte local_39 [9];
  
  local_60[0] = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar5 = 0;
  if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(param_1 + 0x60) != 0)) {
    local_78 = (longlong *)FUN_004b6930(&PTR_FUN_010d9a38,1);
    local_70 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    (**(code **)(*local_78 + 0x10))(local_78,*(undefined8 *)(param_1 + 8));
    iVar3 = (**(code **)(*local_78 + 0x28))(local_78);
    if ((*(int *)(param_1 + 0x1c) <= iVar3 + -1) && (-1 < *(int *)(param_1 + 0x1c))) {
      uVar5 = (**(code **)(*local_78 + 0x30))(local_78,*(undefined4 *)(param_1 + 0x1c));
      uVar5 = FUN_004113f0(uVar5,&PTR_FUN_011057c0);
    }
    (**(code **)(*local_70 + 0x10))(local_70,*(undefined8 *)(param_1 + 0x60));
    (**(code **)(**(longlong **)(param_1 + 8) + 0x90))(*(longlong **)(param_1 + 8));
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x90))(*(longlong **)(param_1 + 0x60));
    FUN_00e16a40(*(undefined4 *)(param_1 + 0x18),local_39,&local_48);
    FUN_00e16ad0(*(undefined4 *)(param_1 + 0x18),&local_3a,&local_50);
    FUN_00e16730(*(undefined4 *)(param_1 + 0x18),&local_3b);
    if ((local_48 != 0) && (local_50 != 0)) {
      if ((local_39[0] != 0) && (local_3a != 0)) {
        uVar7 = (uint)local_39[0];
        iVar3 = 0;
        if (-1 < (int)(uVar7 - 1)) {
          do {
            FUN_004169a0(local_60,local_48 + (longlong)iVar3 * 0x29);
            iVar4 = (**(code **)(*local_78 + 0xb0))(local_78,local_60[0]);
            if (iVar4 == -1) {
              local_68 = FUN_01106d50(&PTR_FUN_011057c0,1);
              uVar2 = FUN_0040c770((double)local_3b / 2.0);
              *(undefined1 *)(local_68 + 0x2a) = uVar2;
            }
            else {
              uVar6 = (**(code **)(*local_78 + 0x30))(local_78,iVar4);
              local_68 = FUN_004113f0(uVar6,&PTR_FUN_011057c0);
              (**(code **)(*local_78 + 0x98))(local_78,iVar4);
            }
            iVar4 = local_3a - 1;
            if (iVar3 < (int)(local_3a - 1)) {
              iVar4 = iVar3;
            }
            FUN_004169a0(local_68 + 0x118,local_50 + (longlong)iVar4 * 0x29);
            FUN_004169a0(local_68 + 0x110,local_48 + (longlong)iVar3 * 0x29);
            FUN_00414ad0(local_68 + 8,*(undefined8 *)(local_68 + 0x110));
            (**(code **)(**(longlong **)(param_1 + 8) + 0x80))
                      (*(longlong **)(param_1 + 8),*(undefined8 *)(local_68 + 0x110),local_68);
            iVar4 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0xb0))
                              (*(longlong **)(param_1 + 0x60),*(undefined8 *)(local_68 + 0x118));
            if (iVar4 == -1) {
              (**(code **)(**(longlong **)(param_1 + 0x60) + 0x80))
                        (*(longlong **)(param_1 + 0x60),*(undefined8 *)(local_68 + 0x118),local_68);
            }
            iVar3 = iVar3 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
      }
      FUN_004095f0(local_48,(uint)local_39[0] * 0x29);
      FUN_004095f0(local_50,(uint)local_3a * 0x29);
    }
  }
  iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0xc0))(*(longlong **)(param_1 + 8),uVar5);
  *(int *)(param_1 + 0x1c) = iVar3;
  if (iVar3 == -1) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  FUN_00410f20(local_78);
  FUN_00410f20(local_70);
  FUN_00414480(local_60);
  return uVar1;
}

