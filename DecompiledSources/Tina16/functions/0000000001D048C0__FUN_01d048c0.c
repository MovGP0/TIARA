/* Ghidra address: 01d048c0 */
/* Ghidra symbol: FUN_01d048c0 */


void FUN_01d048c0(longlong param_1,int param_2,int param_3,int *param_4,int *param_5,char param_6,
                 char param_7)

{
  int local_res10 [2];
  int local_res18 [4];
  
  if (param_6 == '\0') {
    *param_4 = param_2;
    *param_5 = param_3;
  }
  else {
    local_res10[0] = param_2;
    local_res18[0] = param_3;
    if (param_7 != '\0') {
      FUN_01cf1450(*(undefined1 *)(param_1 + 0xd1),*(undefined1 *)(param_1 + 0xd3),local_res10,
                   local_res18,0,0);
    }
    *param_4 = local_res10[0] + *(int *)(param_1 + 0xc);
    *param_5 = local_res18[0] + *(int *)(param_1 + 0x10);
  }
  return;
}

