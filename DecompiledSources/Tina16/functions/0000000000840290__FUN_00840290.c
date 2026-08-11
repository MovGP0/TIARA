/* Ghidra address: 00840290 */
/* Ghidra symbol: FUN_00840290 */


void FUN_00840290(longlong param_1,char param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 param_5,int *param_6)

{
  undefined1 auStack_58 [32];
  char local_38;
  
  if ((*param_6 != param_6[2]) && (param_6[1] != param_6[3])) {
    if (param_2 == '\0') {
      local_38 = param_2;
      FUN_0083ffa0(auStack_58,param_1 + 0x100,param_5,1);
      local_38 = param_3;
      FUN_0083ffa0(auStack_58,param_1 + 200,param_4,0);
    }
    else {
      local_38 = param_3;
      FUN_0083ffa0(auStack_58,param_1 + 200,param_4,0);
      local_38 = param_2;
      FUN_0083ffa0(auStack_58,param_1 + 0x100,param_5,1);
    }
  }
  return;
}

