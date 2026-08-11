/* Ghidra address: 016c4c10 */
/* Ghidra symbol: FUN_016c4c10 */


bool FUN_016c4c10(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_00414f50(*(undefined8 *)(param_2 + 8),param_1 + 0x40,
                       (ulonglong)**(byte **)(param_2 + 8) + 1);
  return iVar1 == 0;
}

