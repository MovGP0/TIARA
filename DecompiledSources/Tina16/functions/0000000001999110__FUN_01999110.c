/* Ghidra address: 01999110 */
/* Ghidra symbol: FUN_01999110 */


bool FUN_01999110(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0x50))
  ;
  iVar1 = (**(code **)(*plVar2 + 0x1c8))(plVar2);
  return iVar1 <= *(int *)(param_1 + 0x4c);
}

