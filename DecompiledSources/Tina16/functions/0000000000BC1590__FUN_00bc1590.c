/* Ghidra address: 00bc1590 */
/* Ghidra symbol: FUN_00bc1590 */


void FUN_00bc1590(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40 [2];
  
  local_58 = 0;
  local_50[0] = 0;
  local_40[0] = 0;
  if ((param_2 == (longlong *)0x0) ||
     (cVar1 = FUN_004113d0(param_2,&PTR_FUN_00bbdc60), cVar1 == '\0')) {
    FUN_004b1060(param_1,param_2);
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x88))();
    iVar7 = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar5 = (**(code **)(*param_1 + 0x90))(param_1,iVar7);
        FUN_00414b50(local_40,*(undefined8 *)(lVar5 + 0x20));
        iVar3 = (**(code **)(*param_2 + 0x88))();
        iVar8 = 0;
        if (-1 < iVar3 + -1) {
          do {
            lVar5 = (**(code **)(*param_2 + 0x90))(param_2,iVar8);
            iVar4 = FUN_00416db0(local_40[0],*(undefined8 *)(lVar5 + 0x20));
            if (iVar4 == 0) {
              plVar6 = (longlong *)(**(code **)(*param_1 + 0x90))(param_1,iVar7);
              (**(code **)(*plVar6 + 0x10))(plVar6,lVar5);
              break;
            }
            iVar8 = iVar8 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        iVar7 = iVar7 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    cVar1 = FUN_004113d0(param_2,*param_1);
    if (cVar1 != '\0') {
      (**(code **)(*param_2 + 0xa8))(param_2,local_50);
      (**(code **)(*param_1 + 0xd8))(param_1,local_50[0]);
    }
    (**(code **)(*param_2 + 0xa0))(param_2,&local_58);
    (**(code **)(*param_1 + 0xd0))(param_1,local_58);
    FUN_00bc2690(param_1,*(undefined1 *)((longlong)param_2 + 0x8c));
  }
  FUN_00414560(&local_58,2);
  FUN_00414480(local_40);
  return;
}

