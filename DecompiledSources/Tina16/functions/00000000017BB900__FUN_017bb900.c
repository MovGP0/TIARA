/* Ghidra address: 017bb900 */
/* Ghidra symbol: FUN_017bb900 */


void FUN_017bb900(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong local_30 [2];
  
  local_30[0] = 0;
  local_40 = param_2;
  local_38 = param_3;
  if (param_2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    iVar6 = *(int *)(lVar3 + 0x10);
    iVar5 = 0;
    if (-1 < iVar6 + -1) {
      do {
        uVar1 = FUN_00b94e60(lVar3,iVar5);
        FUN_017bb890(auStack_68,uVar1);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    FUN_00b95360(*(undefined8 *)(param_1 + 0x10));
    iVar5 = 0;
    iVar6 = *(int *)(local_38 + 0x10);
    if (-1 < iVar6 + -1) {
      do {
        plVar2 = (longlong *)FUN_004aeac0(local_38,iVar5);
        uVar1 = (**(code **)(*plVar2 + 0x40))(plVar2);
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),uVar1);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = *(int *)(local_40 + 0x10);
    iVar5 = 0;
    if (-1 < iVar6 + -1) {
      do {
        plVar2 = (longlong *)FUN_004aeac0(local_40,iVar5);
        lVar3 = (**(code **)(*plVar2 + 0x40))(plVar2);
        uVar1 = FUN_004aeac0(local_40,iVar5);
        FUN_017ff570(uVar1,local_30);
        if (local_30[0] == 0) {
          lVar4 = FUN_004aeac0(local_40,iVar5);
          *(undefined1 *)(lVar3 + 10) = *(undefined1 *)(lVar4 + 10);
        }
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),lVar3);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    FUN_019a53e0(*(undefined8 *)(param_1 + 0x10),0);
  }
  FUN_00414480(local_30);
  return;
}

