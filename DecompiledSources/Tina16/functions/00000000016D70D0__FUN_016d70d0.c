/* Ghidra address: 016d70d0 */
/* Ghidra symbol: FUN_016d70d0 */


char FUN_016d70d0(longlong param_1)

{
  int iVar1;
  longlong local_res8 [4];
  char local_9;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  if (local_res8[0] != 0) {
    iVar1 = FUN_004170c0(local_res8[0],L"01XZ",1);
    if (0 < iVar1) {
      local_9 = FUN_004170c0(local_res8[0],L"01XZ",1);
      local_9 = local_9 + -1;
      goto code_r0x016d712b;
    }
  }
  local_9 = '\0';
code_r0x016d712b:
  FUN_00414480(local_res8);
  return local_9;
}

