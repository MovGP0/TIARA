/* Ghidra address: 00a074d0 */
/* Ghidra symbol: FUN_00a074d0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a074d0(int param_1)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined1 local_10;
  
  _DAT_02013398 = param_1;
  FUN_00414ad0(&DAT_020133a0,(&PTR_u_no_error_01e6e060)[param_1]);
  local_18 = DAT_020133a0;
  local_10 = 0x11;
  uVar1 = FUN_0044d530(&PTR_FUN_005f23c8,1,L"TGif: %s",&local_18,0);
  FUN_004134c0(uVar1);
  return;
}

