/* Ghidra address: 009ea1a0 */
/* Ghidra symbol: FUN_009ea1a0 */


undefined4 FUN_009ea1a0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 local_1c [3];
  
  if ((char)param_1[8] == '\0') {
    local_1c[0] = FUN_009e8350();
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x140))(param_1,param_2,local_1c);
    if (cVar1 == '\0') {
      local_1c[0] = 0xffffffff;
    }
  }
  return local_1c[0];
}

