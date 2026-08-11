/* Ghidra address: 012c56c0 */
/* Ghidra symbol: FUN_012c56c0 */


void FUN_012c56c0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x708),local_20);
  if (local_20[0] != 0) {
    FUN_006df690(*(undefined8 *)(*(longlong *)(param_1 + 0x748) + 0x550));
    FUN_006ded30(*(undefined8 *)(*(longlong *)(param_1 + 0x748) + 0x550));
    uVar3 = FUN_012c28a0(0x10);
    uVar3 = FUN_006dee70(*(undefined8 *)(*(longlong *)(param_1 + 0x748) + 0x550),0,&LAB_012c5848,
                         uVar3);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x708),&local_28);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))(*(longlong **)(param_1 + 0x718))
    ;
    FUN_012c7620(param_1,uVar3,local_28,uVar2);
    FUN_006e1e60(*(undefined8 *)(param_1 + 0x748),FUN_012c45e0,0,1);
    FUN_006e23c0(*(undefined8 *)(param_1 + 0x748));
    lVar1 = *(longlong *)(param_1 + 0x748);
    uVar3 = FUN_006df4b0(*(undefined8 *)(lVar1 + 0x550));
    FUN_006e24b0(lVar1,uVar3);
    FUN_006df710(*(undefined8 *)(*(longlong *)(param_1 + 0x748) + 0x550));
  }
  FUN_00414560(&local_28,2);
  return;
}

