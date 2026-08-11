/* Ghidra address: 00703780 */
/* Ghidra symbol: FUN_00703780 */


void FUN_00703780(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_00654c00(param_1);
  if (iVar1 == 0) {
    *(undefined8 *)(param_2 + 0x18) = 1;
  }
  else {
    FUN_00659e90(param_1,param_2);
  }
  return;
}

