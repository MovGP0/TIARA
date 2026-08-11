/* Ghidra address: 006884f0 */
/* Ghidra symbol: FUN_006884f0 */


void FUN_006884f0(longlong *param_1,char param_2)

{
  char cVar1;
  
  if (param_2 != (char)param_1[0x97]) {
    *(char *)(param_1 + 0x97) = param_2;
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      FUN_00688540(param_1);
      if ((char)param_1[0x97] == '\0') {
        (**(code **)(*param_1 + 0x278))(param_1);
      }
    }
  }
  return;
}

