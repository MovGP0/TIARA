/* Ghidra address: 0094cab0 */
/* Ghidra symbol: FUN_0094cab0 */


longlong FUN_0094cab0(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 local_50;
  code *local_48;
  longlong lStack_40;
  code *local_38;
  longlong local_30;
  
  local_50 = 0;
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x188))(param_1);
  lVar4 = (**(code **)(*plVar3 + 0x300))(plVar3,param_1,param_2);
  if ((lVar4 != 0) && (param_1[0xd] != 0)) {
    iVar2 = (**(code **)(*(longlong *)param_1[0xd] + 0x38))();
    uVar6 = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar1 = param_1[0xe];
        if (*(uint *)(lVar1 + 0x10) <= uVar6) {
          FUN_00594f90();
        }
        plVar3 = (longlong *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar6 * 0x10);
        local_48 = (code *)*plVar3;
        lStack_40 = plVar3[1];
        local_38 = local_48;
        local_30 = lStack_40;
        if (local_48 != (code *)0x0) {
          (**(code **)(*(longlong *)param_1[0xd] + 0x28))((longlong *)param_1[0xd],&local_50,uVar6);
          uVar5 = (**(code **)(*(longlong *)param_1[0xd] + 0x40))((longlong *)param_1[0xd],uVar6);
          (*local_38)(local_30,1,local_50,uVar5,param_1,lVar4);
        }
        uVar6 = uVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00414520(&local_50);
  return lVar4;
}

