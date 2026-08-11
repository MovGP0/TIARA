/* Ghidra address: 013cd6b0 */
/* Ghidra symbol: FUN_013cd6b0 */


void FUN_013cd6b0(longlong param_1,undefined8 param_2,short *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00bfaa40(*(undefined8 *)(param_1 + 0x838));
  if ((iVar1 < 6) && ((*param_3 == 0x25 || (*param_3 == 8)))) {
    *param_3 = 0;
  }
  return;
}

