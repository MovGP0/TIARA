/* Ghidra address: 00bd1e70 */
/* Ghidra symbol: FUN_00bd1e70 */


bool FUN_00bd1e70(undefined2 param_1)

{
  undefined2 local_res8 [16];
  int local_c;
  
  local_res8[0] = param_1;
  thunk_FUN_041c7398(*(undefined4 *)PTR_DAT_02001cb0,0,local_res8,1,0,0,0,&local_c);
  return local_c == 0;
}

