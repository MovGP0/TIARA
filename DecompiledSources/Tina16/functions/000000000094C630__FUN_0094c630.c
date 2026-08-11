/* Ghidra address: 0094c630 */
/* Ghidra symbol: FUN_0094c630 */


void FUN_0094c630(longlong param_1,byte param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 local_50;
  code *local_48;
  longlong lStack_40;
  code *local_38;
  longlong local_30;
  
  local_50 = 0;
  FUN_00411a80(param_1,param_2);
  if (*(longlong **)(param_1 + 0x68) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x38))();
    uVar5 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x70);
        if (*(uint *)(lVar2 + 0x10) <= uVar5) {
          FUN_00594f90();
        }
        plVar1 = (longlong *)(*(longlong *)(lVar2 + 8) + (longlong)(int)uVar5 * 0x10);
        local_48 = (code *)*plVar1;
        lStack_40 = plVar1[1];
        local_38 = local_48;
        local_30 = lStack_40;
        if (local_48 != (code *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 0x68) + 0x28))
                    (*(longlong **)(param_1 + 0x68),&local_50,uVar5);
          uVar4 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x40))
                            (*(longlong **)(param_1 + 0x68),uVar5);
          (*local_38)(local_30,2,local_50,uVar4,0,0);
        }
        uVar5 = uVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x50));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x48));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x68));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x70));
  FUN_008b8660(param_1,param_2 & 0xfc);
  FUN_00414520(&local_50);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

