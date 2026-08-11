/* Ghidra address: 01b9f630 */
/* Ghidra symbol: FUN_01b9f630 */


void FUN_01b9f630(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  undefined4 local_3c [3];
  
  iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4a0) + 0x28))();
  iVar9 = 0;
  if (-1 < iVar3 + -1) {
    do {
      cVar2 = FUN_0068bca0(*(undefined8 *)(param_1 + 0x6f0),iVar9);
      if (cVar2 != '\0') {
        cVar2 = FUN_01b9f220(param_1,iVar9,local_3c);
        if (cVar2 != '\0') {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6e8) + 0x4a0);
          lVar5 = (**(code **)(*plVar1 + 0x30))(plVar1,local_3c[0]);
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4a0);
          lVar6 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar9);
          iVar4 = FUN_00416db0(*(undefined8 *)(*(longlong *)(lVar5 + 0x1a8) + 0x30),
                               *(undefined8 *)(*(longlong *)(lVar6 + 0x1a8) + 0x30));
          if (iVar4 == 0) {
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4a0);
            plVar7 = (longlong *)(**(code **)(*plVar1 + 0x30))(plVar1,iVar9);
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6e8) + 0x4a0);
            uVar8 = (**(code **)(*plVar1 + 0x30))(plVar1,local_3c[0]);
            (**(code **)(*plVar7 + 0x48))(plVar7,uVar8);
            FUN_0199e310(*(undefined8 *)(param_1 + 0x700),0,1,0);
          }
        }
      }
      iVar9 = iVar9 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (param_2 != 0) {
    FUN_019a57f0(*(undefined8 *)(param_1 + 0x700),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x6e8) + 0x4a0),1,0);
  }
  return;
}

