/* Ghidra address: 00627d00 */
/* Ghidra symbol: FUN_00627d00 */


int FUN_00627d00(int param_1)

{
  undefined8 uVar1;
  undefined8 unaff_retaddr;
  undefined8 local_10;
  
  local_10 = 0;
  if (param_1 < 0) {
    FUN_004167a0(&local_10,(&PTR_s_need_dictionary_01df18e0)[2 - param_1]);
    uVar1 = FUN_0044d490(&PTR_FUN_00627a48,1,local_10);
    FUN_004133b0(uVar1,unaff_retaddr);
  }
  FUN_00414480(&local_10);
  return param_1;
}

