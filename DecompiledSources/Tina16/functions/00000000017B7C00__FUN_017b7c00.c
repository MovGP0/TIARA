/* Ghidra address: 017b7c00 */
/* Ghidra symbol: FUN_017b7c00 */


undefined1 FUN_017b7c00(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 in_stack_ffffffffffffffc0;
  undefined1 local_21;
  longlong local_20;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
  local_20 = 0;
  local_21 = 0;
  plVar6 = (longlong *)FUN_007fc180(&PTR_FUN_017a2658,1,param_2);
  *(bool *)((longlong)plVar6 + 0x7b3) = *(int *)(plVar6[1] + 0xcb0) == 2;
  FUN_017a4190(plVar6,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x50),
               *(undefined1 *)(param_1 + 0x60),*(undefined1 *)(param_1 + 0x61),
               *(undefined1 *)(param_1 + 99),*(undefined1 *)(param_1 + 100),
               CONCAT44(uVar4,*(undefined4 *)(param_1 + 0x7c)));
  iVar2 = (**(code **)(*plVar6 + 0x2d0))(plVar6);
  if (iVar2 == 1) {
    local_21 = 1;
    FUN_00410f20(*(undefined8 *)(param_1 + 0x40));
    FUN_00410f20(*(undefined8 *)(param_1 + 0x50));
    FUN_017a4470(plVar6,param_1 + 0x40,param_1 + 0x50,param_1 + 0x60,param_1 + 0x61,param_1 + 99,
                 param_1 + 100,param_1 + 0x7c);
    FUN_007d6450(*(undefined8 *)(param_1 + 0x68));
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x60))(*(longlong **)(param_1 + 0x40));
    iVar3 = FUN_00c3c500(*(undefined1 *)(param_1 + 0x60),*(undefined1 *)(param_1 + 0x61),
                         *(undefined1 *)(param_1 + 99),*(undefined1 *)(param_1 + 100));
    FUN_007d55b0(*(undefined8 *)(param_1 + 0x68),(longlong)iVar2 / (longlong)iVar3 & 0xffffffff);
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x48))(*(longlong **)(param_1 + 0x40));
    FUN_007d5610(*(undefined8 *)(param_1 + 0x68),uVar4);
    FUN_007d5ad0(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x40),0x1fffffff);
    uVar4 = FUN_017b8330(param_1,*(undefined8 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    plVar1 = *(longlong **)(param_1 + 0x50);
    if (plVar1 == (longlong *)0x0) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    else {
      (**(code **)(*plVar1 + 0x38))(plVar1,&local_20);
      uVar4 = 0;
      if (local_20 != 0) {
        uVar4 = *(undefined4 *)(local_20 + -4);
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar4;
    }
    FUN_007d5cb0(*(undefined8 *)(param_1 + 0x68),0,*(undefined8 *)(param_1 + 0x48));
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x60))(*(longlong **)(param_1 + 0x48));
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x48))(*(longlong **)(param_1 + 0x48));
    uVar7 = FUN_00498310(uVar4,uVar5);
    *(undefined8 *)(param_1 + 0x70) = uVar7;
    (**(code **)(**(longlong **)(plVar6[1] + 0x948) + 0x180))(*(longlong **)(plVar6[1] + 0x948));
  }
  FUN_00410f20(plVar6);
  FUN_00414480(&local_20);
  return local_21;
}

