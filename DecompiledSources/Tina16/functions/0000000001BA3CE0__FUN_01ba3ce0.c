/* Ghidra address: 01ba3ce0 */
/* Ghidra symbol: FUN_01ba3ce0 */


void FUN_01ba3ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  DAT_02111398 = FUN_007fc180(&PTR_FUN_01ba32e8,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_00414ad0(DAT_02111398 + 0x750,local_res8[0]);
  *(undefined8 *)(DAT_02111398 + 0x748) = param_2;
  *(undefined8 *)(DAT_02111398 + 0x740) = param_3;
  FUN_008059a0(DAT_02111398);
  FUN_00414480(local_res8);
  return;
}

