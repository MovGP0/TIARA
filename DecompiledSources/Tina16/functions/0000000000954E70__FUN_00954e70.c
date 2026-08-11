/* Ghidra address: 00954e70 */
/* Ghidra symbol: FUN_00954e70 */


longlong FUN_00954e70(longlong *param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 local_50;
  code *local_48;
  longlong lStack_40;
  code *local_38;
  longlong local_30;
  
  local_50 = 0;
  lVar4 = (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
  if ((lVar4 != 0) && (*(longlong *)(param_2 + 0x68) != 0)) {
    iVar3 = (**(code **)(**(longlong **)(param_2 + 0x68) + 0x38))();
    uVar6 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar2 = *(longlong *)(param_2 + 0x70);
        if (*(uint *)(lVar2 + 0x10) <= uVar6) {
          FUN_00594f90();
        }
        plVar1 = (longlong *)(*(longlong *)(lVar2 + 8) + (longlong)(int)uVar6 * 0x10);
        local_48 = (code *)*plVar1;
        lStack_40 = plVar1[1];
        local_38 = local_48;
        local_30 = lStack_40;
        if (local_48 != (code *)0x0) {
          (**(code **)(**(longlong **)(param_2 + 0x68) + 0x28))
                    (*(longlong **)(param_2 + 0x68),&local_50,uVar6);
          uVar5 = (**(code **)(**(longlong **)(param_2 + 0x68) + 0x40))
                            (*(longlong **)(param_2 + 0x68),uVar6);
          (*local_38)(local_30,3,local_50,uVar5,param_2,lVar4);
        }
        uVar6 = uVar6 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_00414520(&local_50);
  return lVar4;
}

