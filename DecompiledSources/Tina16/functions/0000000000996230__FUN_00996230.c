/* Ghidra address: 00996230 */
/* Ghidra symbol: FUN_00996230 */


longlong * FUN_00996230(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  int local_44;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  
  local_50 = auStack_98;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0;
  local_68 = 0;
  local_58 = 0;
  local_38 = (longlong *)FUN_0098cda0(&PTR_FUN_00926660,1);
  (**(code **)(*local_38 + 0xf0))(local_38,*(undefined1 *)(param_1 + 0x30));
  cVar1 = (**(code **)(*param_2 + 0x168))(param_2);
  if (cVar1 == '\x01') {
    local_30 = (longlong *)FUN_008f7660(&PTR_FUN_008f5ce8,1);
    FUN_008f7910(local_30,1);
    FUN_008f7900(local_30,0);
    (**(code **)(*local_30 + 0x50))(local_30,&DAT_00996580,L"http://www.w3.org/XML/1998/namespace");
    local_40 = param_2;
    while ((local_40 != (longlong *)0x0 &&
           (cVar1 = (**(code **)(*local_40 + 0x168))(local_40), cVar1 == '\x01'))) {
      puVar3 = (undefined8 *)(**(code **)(*local_40 + 0x100))(local_40);
      iVar2 = (**(code **)*puVar3)();
      local_44 = 0;
      if (-1 < iVar2 + -1) {
        do {
          plVar4 = (longlong *)(**(code **)(*local_40 + 0x100))(local_40);
          plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,local_44);
          cVar1 = (**(code **)(*plVar4 + 0x2c0))(plVar4);
          if (cVar1 == '\0') {
            plVar4 = (longlong *)(**(code **)(*local_40 + 0x100))(local_40);
            plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,local_44);
            (**(code **)(*plVar4 + 0x160))(plVar4,&local_58);
            (**(code **)(*local_30 + 0x50))(local_30,0,local_58);
          }
          else if (cVar1 == '\x01') {
            plVar4 = (longlong *)(**(code **)(*local_40 + 0x100))(local_40);
            plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,local_44);
            (**(code **)(*plVar4 + 0x148))(plVar4,&local_60);
            plVar4 = (longlong *)(**(code **)(*local_40 + 0x100))(local_40);
            plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,local_44);
            (**(code **)(*plVar4 + 0x160))(plVar4,&local_68);
            (**(code **)(*local_30 + 0x50))(local_30,local_60,local_68);
          }
          local_44 = local_44 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      local_40 = (longlong *)(**(code **)(*local_40 + 0x170))(local_40);
    }
    iVar2 = (**(code **)(*local_30 + 0x18))();
    local_44 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar5 = FUN_004113f0(param_2,&PTR_FUN_0090a420);
        (**(code **)(*local_30 + 0x38))(local_30,&local_70,local_44);
        (**(code **)(*local_30 + 0x28))(local_30,&local_78,local_44);
        (**(code **)(*local_38 + 0x128))(local_38,uVar5,local_70,local_78);
        local_44 = local_44 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00410f20(local_30);
  }
  FUN_004145c0(&local_78,5);
  return local_38;
}

