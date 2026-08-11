/* Ghidra address: 007017e0 */
/* Ghidra symbol: FUN_007017e0 */


bool FUN_007017e0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_00635930(0xff00000f,0xffffffe7);
  return *(int *)(param_1 + 0x4d0) != iVar1;
}

