/* Ghidra address: 009505e0 */
/* Ghidra symbol: FUN_009505e0 */


void FUN_009505e0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x2d0))(param_1);
  if (lVar1 != 0) {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x2d0))(param_1);
    uVar3 = (**(code **)(*param_1 + 0x2d0))(param_1);
    (**(code **)(*plVar2 + 0x2b8))(plVar2,uVar3,param_2,param_1);
  }
  return;
}

