/* Ghidra address: 005a1670 */
/* Ghidra symbol: FUN_005a1670 */


undefined4 FUN_005a1670(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 local_5c;
  longlong local_40;
  undefined4 local_38 [2];
  undefined1 local_30 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  
  FUN_00417580(local_38,&DAT_0059bd38);
  local_5c = 0xffffffff;
  FUN_005a1550(param_1,param_2);
  cVar1 = FUN_005a46d0(*(undefined8 *)(param_1 + 8),param_2,&local_40);
  if (cVar1 != '\0') {
    FUN_0041b800(local_30);
    local_28 = *param_3;
    uStack_20 = param_3[1];
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    local_5c = *(undefined4 *)(param_1 + 0x10);
    local_38[0] = local_5c;
    FUN_00597ec0(local_40 + 8,local_38);
  }
  FUN_00417740(local_38,&DAT_0059bd38);
  return local_5c;
}

