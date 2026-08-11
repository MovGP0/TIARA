/* Ghidra address: 00c59400 */
/* Ghidra symbol: FUN_00c59400 */


void FUN_00c59400(undefined8 param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  FUN_00655080(param_1);
  plVar2 = (longlong *)FUN_00781840();
  uVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
  FUN_00659460(param_1,uVar1);
  return;
}

