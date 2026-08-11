/* Ghidra address: 01ce0100 */
/* Ghidra symbol: FUN_01ce0100 */


void FUN_01ce0100(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  longlong local_30;
  
  local_30 = param_1;
  if (param_3 != '\0') {
    local_48 = *(undefined4 *)(param_1 + 0x20);
    local_40 = *(undefined4 *)(param_1 + 0x48);
    FUN_01d2dc30(param_2,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 0x1c));
  }
  iVar1 = (**(code **)(**(longlong **)(local_30 + 0x88) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      plVar2 = (longlong *)
               (**(code **)(**(longlong **)(local_30 + 0x88) + 0x30))
                         (*(longlong **)(local_30 + 0x88),iVar4);
      (**(code **)(*plVar2 + 0x70))(plVar2,param_2);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = (**(code **)(**(longlong **)(local_30 + 0x70) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      plVar2 = (longlong *)
               (**(code **)(**(longlong **)(local_30 + 0x70) + 0x30))
                         (*(longlong **)(local_30 + 0x70),iVar4);
      (**(code **)(*plVar2 + 0x70))(plVar2,param_2);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = (**(code **)(**(longlong **)(local_30 + 0x78) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar3 = (**(code **)(**(longlong **)(local_30 + 0x78) + 0x30))
                        (*(longlong **)(local_30 + 0x78),iVar4);
      plVar2 = (longlong *)FUN_004113f0(uVar3,&DAT_01ccbf00);
      (**(code **)(*plVar2 + 0x70))(plVar2,param_2);
      plVar2 = (longlong *)plVar2[0x23];
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x70))(plVar2,param_2);
      }
      uVar3 = (**(code **)(**(longlong **)(local_30 + 0x78) + 0x30))
                        (*(longlong **)(local_30 + 0x78),iVar4);
      FUN_01ce0030(auStack_68,uVar3);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

