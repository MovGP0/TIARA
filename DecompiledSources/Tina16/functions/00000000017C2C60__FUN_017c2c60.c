/* Ghidra address: 017c2c60 */
/* Ghidra symbol: FUN_017c2c60 */


undefined4 FUN_017c2c60(longlong param_1,int param_2)

{
  char cVar1;
  int local_res10 [6];
  undefined4 local_1c;
  
  local_res10[0] = param_2;
  cVar1 = FUN_017c2b80(param_1,local_res10);
  if (cVar1 == '\0') {
    local_1c = FUN_00b92120(0x7ffd,0x7ffd);
  }
  else {
    local_1c = FUN_00b959c0(*(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x2d0) + 8) +
                             (longlong)local_res10[0] * 8));
  }
  return local_1c;
}

