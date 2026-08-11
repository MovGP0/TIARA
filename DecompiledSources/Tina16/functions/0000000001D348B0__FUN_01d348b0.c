/* Ghidra address: 01d348b0 */
/* Ghidra symbol: FUN_01d348b0 */


void FUN_01d348b0(longlong param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int local_30 [2];
  undefined1 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if ((param_2 < 0) || (*(int *)(param_1 + 0x10) < param_2)) {
    FUN_01d34ef0(param_1);
  }
  if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x14)) {
    FUN_01d34f70(param_1,*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x18));
  }
  FUN_00409a70(*(longlong *)(param_1 + 8) + (longlong)param_2 * 8,
               *(longlong *)(param_1 + 8) + (longlong)(param_2 + 1) * 8,
               (longlong)((*(int *)(param_1 + 0x10) - param_2) * 8));
  *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)param_2 * 8) = param_3;
  if (*(int *)(param_1 + 0x10) < 0x7ffffffd) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  else {
    FUN_0041ddd0(local_20,PTR_DAT_02002ff0);
    local_30[0] = *(int *)(param_1 + 0x10) + 1;
    local_28 = 0;
    uVar1 = FUN_0044d530(&PTR_FUN_004347c0,1,local_20[0],local_30,0);
    FUN_004134c0(uVar1);
  }
  FUN_00414480(local_20);
  return;
}

