/* Ghidra address: 016a79c0 */
/* Ghidra symbol: FUN_016a79c0 */


bool FUN_016a79c0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_00414f50(*(undefined8 *)(param_2 + 8),
                       *(undefined8 *)(*(longlong *)(param_1 + 0x228) + 8),
                       (ulonglong)**(byte **)(param_2 + 8) + 1);
  return iVar1 == 0;
}

