/* Ghidra address: 01bd5fe0 */
/* Ghidra symbol: FUN_01bd5fe0 */


void FUN_01bd5fe0(longlong *param_1,char param_2)

{
  longlong lVar1;
  
  if (param_2 == '\0') {
    FUN_00419430(param_1 + 0xab,&DAT_01bd22f8);
    lVar1 = param_1[0xad];
    param_1[0xad] = 0;
    FUN_00410f20(lVar1);
    lVar1 = param_1[0xac];
    param_1[0xac] = 0;
    FUN_00410f20(lVar1);
  }
  else {
    (**(code **)(*param_1 + 0x368))(param_1);
    (**(code **)(*param_1 + 0x380))(param_1);
    (**(code **)(*param_1 + 0x390))(param_1);
  }
  return;
}

