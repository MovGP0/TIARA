/* Ghidra address: 0077abb0 */
/* Ghidra symbol: FUN_0077abb0 */


undefined4 FUN_0077abb0(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 uStack_2c;
  
  local_34 = *param_2;
  uStack_2c = *(undefined4 *)(param_2 + 1);
  cVar1 = FUN_007790b0(*(undefined8 *)(param_1 + 0x50),&local_34,2,&local_38);
  if (cVar1 == '\0') {
    local_38 = param_3;
  }
  return local_38;
}

