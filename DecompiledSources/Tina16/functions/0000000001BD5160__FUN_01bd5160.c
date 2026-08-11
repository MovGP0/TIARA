/* Ghidra address: 01bd5160 */
/* Ghidra symbol: FUN_01bd5160 */


void FUN_01bd5160(longlong *param_1)

{
  char cVar1;
  
  FUN_01c07350(param_1);
  cVar1 = FUN_0065be20(param_1[0x6c]);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x1c0))(param_1);
    if (cVar1 == '\0') {
      FUN_0064cbf0(param_1,*(undefined4 *)(param_1[0x6c] + 0x98));
    }
    else {
      FUN_0064cbf0(param_1,(int)param_1[0x13] + *(int *)(param_1[0x6c] + 0x98));
    }
  }
  return;
}

