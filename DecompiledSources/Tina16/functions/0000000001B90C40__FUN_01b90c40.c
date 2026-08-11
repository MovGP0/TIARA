/* Ghidra address: 01b90c40 */
/* Ghidra symbol: FUN_01b90c40 */


void FUN_01b90c40(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  if (*PTR_DAT_020023b0 == '\0') {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6c8),L"Normal Mode ?!");
  }
  else if (*PTR_DAT_02003d20 == '\0') {
    uVar1 = FUN_00b89270();
    FUN_00b8e520(uVar1,&local_18,0x5ae);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6c8),local_18);
  }
  else {
    uVar1 = FUN_00b89270();
    FUN_00b8e520(uVar1,&local_10,0x5ad);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6c8),local_10);
  }
  FUN_00414560(&local_18,2);
  return;
}

