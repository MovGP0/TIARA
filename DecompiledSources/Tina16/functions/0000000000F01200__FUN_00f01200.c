/* Ghidra address: 00f01200 */
/* Ghidra symbol: FUN_00f01200 */


void FUN_00f01200(longlong param_1)

{
  undefined8 uVar1;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  
  thunk_FUN_0415f13b(&local_28,2,2,*(int *)(param_1 + 0x98) + -2,*(undefined4 *)(param_1 + 0x9c));
  if (*(char *)(param_1 + 0x530) != '\0') {
    local_20 = local_20 - *(int *)(param_1 + 0x518);
  }
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_041b2403(uVar1,0xb4,0,&local_28);
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_041b2403(uVar1,0xb7,0,0);
  if (PTR_DAT_02005bd0[0xc] != '\0') {
    FUN_00658a80(param_1,*(undefined8 *)(param_1 + 0xb8),local_28,local_24);
  }
  return;
}

