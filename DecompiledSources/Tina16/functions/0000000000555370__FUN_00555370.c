/* Ghidra address: 00555370 */
/* Ghidra symbol: FUN_00555370 */


void FUN_00555370(undefined1 param_1)

{
  undefined8 unaff_retaddr;
  
  if (*(longlong *)PTR_PTR_02004828 != 0) {
    (**(code **)PTR_PTR_02004828)(param_1,unaff_retaddr);
  }
  FUN_004098e0(0x18);
  return;
}

