/* Ghidra address: 01a5ad00 */
/* Ghidra symbol: FUN_01a5ad00 */


void FUN_01a5ad00(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  if (*(longlong *)(param_2 + 0xe0) != 0) {
    FUN_00410f20(*(undefined8 *)(param_2 + 0xe0));
  }
  cVar1 = FUN_00440a20(*(undefined8 *)(param_2 + 0xd8),1);
  if (cVar1 != '\0') {
    FUN_004412f0(*(undefined8 *)(param_2 + 0xd8));
  }
  return;
}

