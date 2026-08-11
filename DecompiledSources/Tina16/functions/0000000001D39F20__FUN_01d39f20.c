/* Ghidra address: 01d39f20 */
/* Ghidra symbol: FUN_01d39f20 */


int FUN_01d39f20(undefined2 param_1)

{
  char cVar1;
  undefined2 local_res8 [16];
  int local_c;
  
  local_res8[0] = param_1;
  cVar1 = (**(code **)(*DAT_03567a70 + 0x40))(DAT_03567a70,local_res8,&local_c);
  if (cVar1 == '\0') {
    local_c = 0;
  }
  else {
    local_c = local_c + 1;
  }
  return local_c;
}

