/* Ghidra address: 00ea5510 */
/* Ghidra symbol: FUN_00ea5510 */


void FUN_00ea5510(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  longlong local_10;
  
  local_30 = 0;
  if (*(char *)(param_1 + 8) == '\0') {
    FUN_00ea33c0(param_1);
  }
  uVar1 = FUN_00e81df0(*(undefined8 *)(param_1 + 0x510),0,&local_10);
  *(undefined8 *)(param_1 + 0x518) = uVar1;
  if (local_10 != 0) {
    FUN_004167a0(&local_30,local_10);
    local_28 = local_30;
    local_20 = 0x11;
    uVar1 = FUN_0044d8d0(&PTR_FUN_00ea2d28,1,PTR_PTR_020021d0,&local_28,0);
    FUN_004134c0(uVar1);
  }
  *(undefined1 *)(param_1 + 9) = 1;
  FUN_00414480(&local_30);
  return;
}

