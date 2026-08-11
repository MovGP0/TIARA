/* Ghidra address: 007464c0 */
/* Ghidra symbol: FUN_007464c0 */


void FUN_007464c0(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  FUN_004b25d0(param_1);
  lVar1 = FUN_00746480(param_1);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_00746480(param_1);
    *(undefined1 *)(plVar2 + 0x99) = 1;
    (**(code **)(*plVar2 + 0x180))(plVar2);
    FUN_00654450(plVar2);
  }
  return;
}

