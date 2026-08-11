/* Ghidra address: 017b4d70 */
/* Ghidra symbol: FUN_017b4d70 */


undefined8 FUN_017b4d70(longlong param_1,int param_2)

{
  undefined8 local_10;
  
  if ((param_2 < -1) || (*(int *)(param_1 + 0x60) + -1 <= param_2)) {
    local_10 = FUN_00498310(0xffffd499,0xffffd499);
  }
  else {
    local_10 = FUN_017b50b0(param_1,*(longlong *)(param_1 + 0x58) + (longlong)(param_2 + 1) * 8);
  }
  return local_10;
}

