/* Ghidra address: 01bfa3f0 */
/* Ghidra symbol: FUN_01bfa3f0 */


void FUN_01bfa3f0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  code *local_38;
  longlong local_30;
  
  local_38 = (code *)*param_3;
  local_30 = param_3[1];
  if (param_2 != 0) {
    iVar6 = *(int *)(*(longlong *)(param_2 + 0x10) + 0x10);
    iVar5 = 0;
    local_40 = param_1;
    if (-1 < iVar6 + -1) {
      do {
        uVar2 = FUN_01bf9610(param_2,iVar5);
        cVar1 = FUN_01bfaa20(uVar2);
        if (cVar1 == '\0') {
          lVar4 = FUN_01bf9610(param_2,iVar5);
          if (*(longlong *)(lVar4 + 0x18) == 0) {
            if (local_38 == (code *)0x0) {
              plVar3 = (longlong *)FUN_01bf9610(param_2,iVar5);
              (**(code **)(*plVar3 + 0x68))(plVar3);
            }
            else {
              uVar2 = FUN_01bf9610(param_2,iVar5);
              (*local_38)(local_30,uVar2);
            }
            uVar2 = FUN_01bf9610(param_2,iVar5);
            FUN_01bfa390(auStack_68,uVar2);
          }
          else {
            if (local_38 == (code *)0x0) {
              plVar3 = (longlong *)FUN_01bf9610(param_2,iVar5);
              (**(code **)(*plVar3 + 0x68))(plVar3);
            }
            else {
              uVar2 = FUN_01bf9610(param_2,iVar5);
              (*local_38)(local_30,uVar2);
            }
            uVar2 = FUN_01bf9610(param_2,iVar5);
            FUN_01bfa390(auStack_68,uVar2);
          }
        }
        else {
          if (local_38 == (code *)0x0) {
            plVar3 = (longlong *)FUN_01bf9610(param_2,iVar5);
            (**(code **)(*plVar3 + 0x68))(plVar3);
          }
          else {
            uVar2 = FUN_01bf9610(param_2,iVar5);
            (*local_38)(local_30,uVar2);
          }
          uVar2 = FUN_01bf9610(param_2,iVar5);
          uVar2 = FUN_01bfaa70(uVar2);
          FUN_01bfa3f0(local_40,uVar2,&local_38);
          uVar2 = FUN_01bf9610(param_2,iVar5);
          FUN_01bfa390(auStack_68,uVar2);
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return;
}

