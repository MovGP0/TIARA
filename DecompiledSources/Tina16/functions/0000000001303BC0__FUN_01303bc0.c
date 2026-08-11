/* Ghidra address: 01303bc0 */
/* Ghidra symbol: FUN_01303bc0 */


undefined1 FUN_01303bc0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0;
  local_21 = 1;
  if (*(longlong *)(param_1 + 0xaf8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x260))();
    if (cVar2 == '\0') {
      iVar3 = 0;
      iVar7 = *(int *)(*(longlong *)(param_1 + 0xaf8) + 0x10) + -1;
    }
    else {
      uVar5 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
      iVar3 = FUN_006dd6f0(uVar5);
      iVar3 = iVar3 + -1;
      iVar7 = iVar3;
    }
    if (iVar3 <= iVar7) {
      iVar7 = (iVar7 - iVar3) + 1;
      do {
        uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3);
        iVar4 = FUN_012e5c10(uVar5);
        if (iVar4 == 0) {
          uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3);
          iVar4 = FUN_012e5860(uVar5);
          if (iVar4 == 2) {
            uVar5 = FUN_007fc180(&PTR_FUN_012e69e8,1,param_1);
            *(undefined8 *)(param_1 + 0xaf0) = uVar5;
            uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3);
            FUN_012e5670(uVar6,&local_20);
            local_21 = FUN_012e6f00(uVar5,local_20);
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xaf0) + 0x6c8);
            (**(code **)(*plVar1 + 0x260))(plVar1);
            break;
          }
        }
        iVar3 = iVar3 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  FUN_00414480(&local_20);
  return local_21;
}

