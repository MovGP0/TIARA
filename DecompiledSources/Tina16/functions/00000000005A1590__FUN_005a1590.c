/* Ghidra address: 005a1590 */
/* Ghidra symbol: FUN_005a1590 */


undefined4 FUN_005a1590(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 local_4c;
  longlong local_30;
  undefined4 local_28 [2];
  undefined1 local_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  FUN_00417580(local_28,&DAT_0059bd38);
  local_4c = 0xffffffff;
  FUN_005a1550(param_1,param_2);
  cVar1 = FUN_005a46d0(*(undefined8 *)(param_1 + 8),param_2,&local_30);
  if (cVar1 != '\0') {
    FUN_0041b840(local_20,param_3);
    local_18 = 0;
    local_10 = 0;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    local_4c = *(undefined4 *)(param_1 + 0x10);
    local_28[0] = local_4c;
    FUN_00597ec0(local_30 + 8,local_28);
  }
  FUN_00417740(local_28,&DAT_0059bd38);
  return local_4c;
}

