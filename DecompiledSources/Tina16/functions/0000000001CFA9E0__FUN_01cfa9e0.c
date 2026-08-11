/* Ghidra address: 01cfa9e0 */
/* Ghidra symbol: FUN_01cfa9e0 */


void FUN_01cfa9e0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  FUN_01cfa490(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_2 + 0x1a8));
  *(undefined8 *)(param_2 + 0x1a8) = 0;
  cVar1 = FUN_01d04d40(param_1);
  if (cVar1 != '\0') {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x60))(*(longlong **)(param_1 + 0x1a8));
    *(longlong *)(param_2 + 0x1a8) = lVar2;
    *(longlong *)(lVar2 + 0x10) = param_2;
  }
  *(undefined1 *)(param_2 + 0x1a0) = *(undefined1 *)(param_1 + 0x1a0);
  return;
}

