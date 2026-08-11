/* Ghidra address: 00687c40 */
/* Ghidra symbol: FUN_00687c40 */


void FUN_00687c40(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x80))(param_1);
  if (cVar1 != '\0') {
    FUN_00688630(param_1[6],param_2);
  }
  return;
}

