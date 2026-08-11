/* Ghidra address: 00980920 */
/* Ghidra symbol: FUN_00980920 */


void FUN_00980920(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_40 = param_2;
  (**(code **)(*param_2 + 0xe8))(param_2,local_30);
  (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x128))(*(longlong **)(param_1 + 0xc0),local_30[0])
  ;
  if (*(char *)(*(longlong *)(param_1 + 0xc0) + 0x98) == '\0') {
    puVar3 = (undefined8 *)(**(code **)(*local_40 + 0x100))(local_40);
    iVar2 = (**(code **)*puVar3)();
    iVar6 = 0;
    if (-1 < iVar2 + -1) {
      do {
        plVar4 = (longlong *)(**(code **)(*local_40 + 0x100))(local_40);
        uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,iVar6);
        uVar5 = FUN_004113f0(uVar5,&PTR_FUN_00909bd0);
        FUN_009807e0(auStack_68,uVar5);
        iVar6 = iVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else {
    puVar3 = (undefined8 *)(**(code **)(*local_40 + 0x100))(local_40);
    iVar2 = (**(code **)*puVar3)();
    iVar6 = 0;
    if (-1 < iVar2 + -1) {
      do {
        plVar4 = (longlong *)(**(code **)(*local_40 + 0x100))(local_40);
        uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,iVar6);
        plVar4 = (longlong *)FUN_004113f0(uVar5,&PTR_FUN_00909bd0);
        cVar1 = (**(code **)(*plVar4 + 0x2d8))(plVar4);
        if (cVar1 != '\0') {
          plVar4 = (longlong *)(**(code **)(*local_40 + 0x100))(local_40);
          uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,iVar6);
          uVar5 = FUN_004113f0(uVar5,&PTR_FUN_00909bd0);
          FUN_009807e0(auStack_68,uVar5);
        }
        iVar6 = iVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  puVar3 = (undefined8 *)(**(code **)(*local_40 + 0x110))(local_40);
  iVar2 = (**(code **)*puVar3)();
  iVar6 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar4 = (longlong *)(**(code **)(*local_40 + 0x110))(local_40);
      uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,iVar6);
      (**(code **)(**(longlong **)(param_1 + 0xc0) + 0xb8))(*(longlong **)(param_1 + 0xc0),uVar5);
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  (**(code **)(*local_40 + 0xe8))(local_40,&local_38);
  (**(code **)(**(longlong **)(param_1 + 0xc0) + 0xe8))(*(longlong **)(param_1 + 0xc0),local_38);
  FUN_004145c0(&local_38,2);
  return;
}

