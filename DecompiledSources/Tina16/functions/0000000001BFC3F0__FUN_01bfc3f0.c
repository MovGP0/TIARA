/* Ghidra address: 01bfc3f0 */
/* Ghidra symbol: FUN_01bfc3f0 */


void FUN_01bfc3f0(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x58))(param_1);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1[4] + 0x80) + 0x128))
              (*(longlong **)(param_1[4] + 0x80),param_2);
  }
  return;
}

