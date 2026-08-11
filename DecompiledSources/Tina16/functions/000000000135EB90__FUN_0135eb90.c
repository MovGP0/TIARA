/* Ghidra address: 0135eb90 */
/* Ghidra symbol: FUN_0135eb90 */


void FUN_0135eb90(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  (**(code **)(*(longlong *)*param_3 + 0x90))((longlong *)*param_3);
  if (param_2 != 0) {
    iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0) + 0x28))();
    iVar6 = 0;
    if (-1 < iVar3 + -1) {
      do {
        cVar2 = FUN_00821920(*(undefined8 *)(param_1 + 0x6b0),iVar6);
        if (cVar2 != '\0') {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0);
          uVar5 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar6);
          iVar4 = (**(code **)(**(longlong **)(param_2 + 8) + 0x48))
                            (*(longlong **)(param_2 + 8),uVar5);
          if (iVar4 != -1) {
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0);
            (**(code **)(*plVar1 + 0x18))(plVar1,local_30,iVar6);
            FUN_01ce7b20(local_30);
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0);
            uVar5 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar6);
            (**(code **)(*(longlong *)*param_3 + 0x80))((longlong *)*param_3,local_30[0],uVar5);
          }
        }
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_00414480(local_30);
  return;
}

