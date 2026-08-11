/* Ghidra address: 00747340 */
/* Ghidra symbol: FUN_00747340 */


void FUN_00747340(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  FUN_004b25d0(param_1);
  lVar1 = FUN_00747100(param_1);
  if (lVar1 != 0) {
    lVar1 = FUN_00747100(param_1);
    *(undefined1 *)(lVar1 + 0x4c8) = 1;
    plVar2 = (longlong *)FUN_00747100(param_1);
    (**(code **)(*plVar2 + 0x180))(plVar2);
    uVar3 = FUN_00747100(param_1);
    FUN_00654450(uVar3);
  }
  return;
}

