/* Ghidra address: 017950f0 */
/* Ghidra symbol: FUN_017950f0 */


void FUN_017950f0(longlong param_1,undefined8 param_2,undefined2 param_3,int param_4,int param_5)

{
  ulonglong uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 in_stack_ffffffffffffff38;
  undefined4 uVar10;
  int *piVar9;
  int local_98 [2];
  undefined1 local_90;
  int local_88;
  undefined1 local_80;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  int local_40;
  int local_3c [3];
  
  local_48 = 0;
  plVar6 = *(longlong **)(param_1 + 0xd20);
  if (plVar6 != (longlong *)0x0) {
    uVar4 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffff38 >> 0x20),param_5);
    cVar2 = (**(code **)(*plVar6 + 0x58))(plVar6,param_2,param_3,param_4,uVar4);
    uVar10 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (cVar2 == '\0') goto LAB_017952b5;
  }
  piVar9 = &local_40;
  FUN_017954b0(param_1,param_4,param_5,local_3c,piVar9);
  local_70 = FUN_00498310(0,0);
  uVar10 = (undefined4)((ulonglong)piVar9 >> 0x20);
  iVar7 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
  iVar8 = 0;
  if (-1 < iVar7 + -1) {
    do {
      uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar8);
      cVar2 = FUN_004113d0(uVar4,&PTR_FUN_017aaf70);
      uVar10 = (undefined4)((ulonglong)piVar9 >> 0x20);
      if (cVar2 != '\0') {
        lVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar8);
        local_70 = *(undefined8 *)(lVar5 + 0x18);
        break;
      }
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  local_98[0] = local_3c[0] - (int)local_70;
  local_90 = 0;
  local_88 = local_40 - local_70._4_4_;
  local_80 = 0;
  FUN_00442fd0(&local_48,L" X: %d  Y: %d",local_98,1);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x980),local_48);
  if (*(longlong *)(param_1 + 0xd20) == 0) {
    plVar6 = (longlong *)FUN_01795510(param_1,local_3c[0],local_40);
    if (plVar6 == (longlong *)0x0) {
      FUN_0064e140(*(undefined8 *)(param_1 + 0x948),0);
    }
    else {
      uVar3 = (**(code **)(*plVar6 + 0x78))(plVar6,local_3c[0],local_40);
      FUN_0064e140(*(undefined8 *)(param_1 + 0x948),uVar3);
    }
  }
LAB_017952b5:
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x9a0) + 0x98) / 4;
  FUN_00498350(local_58,param_4 - iVar7,param_5 - iVar7,param_4 + iVar7,
               CONCAT44(uVar10,param_5 + iVar7));
  FUN_00498370(local_68,0,0,*(undefined4 *)(*(longlong *)(param_1 + 0x9a0) + 0x98),
               *(undefined4 *)(*(longlong *)(param_1 + 0x9a0) + 0x9c));
  uVar4 = FUN_00741ea0(*(undefined8 *)(param_1 + 0x9a0));
  FUN_005fead0(uVar4,local_68,*(undefined8 *)(*(longlong *)(param_1 + 0x948) + 0x310),local_58);
  lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x9a0) + 0x98);
  uVar1 = lVar5 / 2;
  plVar6 = (longlong *)FUN_00741ea0(*(longlong *)(param_1 + 0x9a0),lVar5 % 2 & 0xffffffff);
  FUN_005fd4e0(plVar6[0xf],FUN_00808000);
  FUN_005fd670(plVar6[0xf],0);
  FUN_005fd640(plVar6[0xf],0xf);
  iVar7 = (int)uVar1 + -2;
  (**(code **)(*plVar6 + 200))(plVar6,uVar1 & 0xffffffff,iVar7);
  iVar8 = (int)uVar1 + 3;
  (**(code **)(*plVar6 + 0xc0))(plVar6,uVar1 & 0xffffffff,iVar8);
  (**(code **)(*plVar6 + 200))(plVar6,iVar7,uVar1 & 0xffffffff);
  (**(code **)(*plVar6 + 0xc0))(plVar6,iVar8,uVar1 & 0xffffffff);
  FUN_00414480(&local_48);
  return;
}

