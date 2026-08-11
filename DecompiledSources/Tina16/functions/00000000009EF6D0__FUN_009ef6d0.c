/* Ghidra address: 009ef6d0 */
/* Ghidra symbol: FUN_009ef6d0 */


undefined2 FUN_009ef6d0(longlong param_1,char param_2)

{
  char local_res10 [24];
  undefined2 local_a;
  
  if (param_2 == '\0') {
    local_a = 0;
  }
  else {
    local_res10[0] = param_2;
    thunk_FUN_04139c29(*(undefined4 *)(param_1 + 0x18),0,local_res10,1,&local_a,1);
  }
  return local_a;
}

