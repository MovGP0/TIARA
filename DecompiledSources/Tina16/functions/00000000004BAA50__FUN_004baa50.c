/* Ghidra address: 004baa50 */
/* Ghidra symbol: FUN_004baa50 */


void FUN_004baa50(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong local_10;
  
  local_10 = 0;
  FUN_00459ca0(param_1[6],&local_10,param_2);
  uVar1 = 0;
  if (local_10 != 0) {
    uVar1 = *(ulonglong *)(local_10 + -8);
  }
  (**(code **)(*param_1 + 0x30))(param_1,local_10,0,uVar1 & 0xffffffff);
  FUN_00419430(&local_10,&DAT_00406578);
  return;
}

