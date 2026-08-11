/* Ghidra address: 01178a90 */
/* Ghidra symbol: FUN_01178a90 */


void FUN_01178a90(longlong param_1,undefined8 param_2,short *param_3)

{
  undefined4 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (*param_3 == 0xd) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x790),&local_10);
    uVar1 = FUN_0043fc00(local_10);
    *(undefined4 *)PTR_DAT_02002710 = uVar1;
  }
  FUN_00414480(&local_10);
  return;
}

