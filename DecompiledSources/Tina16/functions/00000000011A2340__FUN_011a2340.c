/* Ghidra address: 011a2340 */
/* Ghidra symbol: FUN_011a2340 */


void FUN_011a2340(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (DAT_01f29eac == '\0') {
    DAT_01f29eac = '\x01';
    uVar1 = FUN_00b89270();
    FUN_00b8e520(uVar1,&local_10,0x880);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6f8),local_10);
  }
  else {
    FUN_0119a380();
  }
  FUN_00414480(&local_10);
  return;
}

