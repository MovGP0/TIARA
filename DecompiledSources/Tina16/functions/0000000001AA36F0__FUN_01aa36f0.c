/* Ghidra address: 01aa36f0 */
/* Ghidra symbol: FUN_01aa36f0 */


void FUN_01aa36f0(void)

{
  undefined8 uVar1;
  undefined8 local_c0 [2];
  undefined1 local_aa [162];
  
  local_c0[0] = 0;
  uVar1 = FUN_00b89270();
  FUN_00b8e520(uVar1,local_c0,0x525);
  uVar1 = FUN_00442620(local_aa,local_c0[0]);
  FUN_0080d2f0(*(undefined8 *)PTR_DAT_02004030,uVar1,L"Error",0x10);
  DAT_02110a55 = 1;
  FUN_00414480(local_c0);
  return;
}

