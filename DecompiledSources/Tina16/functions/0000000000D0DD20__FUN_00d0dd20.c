/* Ghidra address: 00d0dd20 */
/* Ghidra symbol: FUN_00d0dd20 */


void FUN_00d0dd20(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_00cd55d0(param_1);
  if (lVar2 != 0) {
    plVar3 = (longlong *)FUN_00cd55d0(param_1);
    uVar4 = (**(code **)(*param_2 + 0x58))(param_2);
    uVar1 = (**(code **)(*param_2 + 0x60))(*param_2);
    (**(code **)(*plVar3 + 0x30))(plVar3,uVar4,uVar1,2);
  }
  return;
}

