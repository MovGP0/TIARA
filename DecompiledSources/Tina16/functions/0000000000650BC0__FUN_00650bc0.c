/* Ghidra address: 00650bc0 */
/* Ghidra symbol: FUN_00650bc0 */


char FUN_00650bc0(longlong param_1,int *param_2,int *param_3)

{
  char cVar1;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_2c = *param_2;
  local_30 = *param_3;
  cVar1 = FUN_0064fa90(param_1,&local_2c,&local_30);
  if (cVar1 != '\0') {
    local_34 = local_2c;
    local_38 = local_30;
    if (((*(char *)(param_1 + 0xae) == '\0') ||
        (((cVar1 = FUN_0064f9e0(param_1,&local_34,&local_38), cVar1 != '\0' &&
          (local_34 == local_2c)) && (local_38 == local_30)))) ||
       (cVar1 = FUN_0064fa90(param_1,&local_34,&local_38), cVar1 != '\0')) {
      cVar1 = '\x01';
    }
    else {
      cVar1 = '\0';
    }
    if (cVar1 != '\0') {
      *param_2 = local_34;
      *param_3 = local_38;
    }
    return cVar1;
  }
  return '\0';
}

