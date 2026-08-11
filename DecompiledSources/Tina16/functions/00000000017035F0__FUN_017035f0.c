/* Ghidra address: 017035f0 */
/* Ghidra symbol: FUN_017035f0 */


void FUN_017035f0(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  if ((*(char *)(param_1 + 0x758) == '\0') || (*(char *)(param_1 + 0x758) == '\x04')) {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x728),1);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x720),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x730),0);
    (**(code **)(**(longlong **)(param_1 + 0x728) + 0x278))(*(longlong **)(param_1 + 0x728));
    iVar1 = (**(code **)(*param_2 + 0x28))();
    local_5c = 0;
    if (-1 < iVar1 + -1) {
      do {
        lVar3 = FUN_006efb70(*(undefined8 *)(*(longlong *)(param_1 + 0x728) + 0x4e0));
        (**(code **)(*param_2 + 0x18))(param_2,local_40,local_5c);
        FUN_006ef050(lVar3,local_40[0]);
        uVar4 = (**(code **)(*param_2 + 0x30))(param_2,local_5c);
        FUN_006ef160(lVar3,uVar4);
        lVar5 = (**(code **)(*param_2 + 0x30))(param_2,local_5c);
        (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x78))
                  (*(longlong **)(lVar3 + 0x10),*(undefined8 *)(lVar5 + 0x40));
        local_5c = local_5c + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    iVar1 = FUN_006efc30(*(undefined8 *)(*(longlong *)(param_1 + 0x728) + 0x4e0));
    if (0 < iVar1) {
      (**(code **)(**(longlong **)(param_1 + 0x728) + 0x268))(*(longlong **)(param_1 + 0x728),0);
    }
  }
  else {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x728),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x720),1);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x730),1);
    FUN_006ded30(*(undefined8 *)(*(longlong *)(param_1 + 0x720) + 0x550));
    iVar1 = (**(code **)(*param_2 + 0x28))();
    local_5c = 0;
    if (-1 < iVar1 + -1) {
      do {
        (**(code **)(*param_2 + 0x18))(param_2,&local_48,local_5c);
        uVar4 = (**(code **)(*param_2 + 0x30))(param_2,local_5c);
        uVar4 = FUN_006dee70(*(undefined8 *)(*(longlong *)(param_1 + 0x720) + 0x550),0,local_48,
                             uVar4);
        if (*(char *)(param_1 + 0x758) == '\x02') {
          plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x760) + 0x88);
        }
        else {
          plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x760) + 0x90);
        }
        (**(code **)(*param_2 + 0x18))(param_2,&local_50,local_5c);
        iVar2 = (**(code **)(*plVar6 + 0xb0))(plVar6,local_50);
        if (iVar2 == -1) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = (longlong *)(**(code **)(*plVar6 + 0x30))(plVar6,iVar2);
        }
        if (plVar6 != (longlong *)0x0) {
          iVar2 = (**(code **)(*plVar6 + 0x28))();
          iVar8 = 0;
          if (-1 < iVar2 + -1) {
            do {
              (**(code **)(*plVar6 + 0x18))(plVar6,&local_58,iVar8);
              uVar7 = (**(code **)(*plVar6 + 0x30))(plVar6,iVar8);
              FUN_006dee70(*(undefined8 *)(*(longlong *)(param_1 + 0x720) + 0x550),uVar4,local_58,
                           uVar7);
              iVar8 = iVar8 + 1;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
        }
        local_5c = local_5c + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_00414560(&local_58,4);
  return;
}

