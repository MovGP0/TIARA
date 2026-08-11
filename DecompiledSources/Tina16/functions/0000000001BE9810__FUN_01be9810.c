/* Ghidra address: 01be9810 */
/* Ghidra symbol: FUN_01be9810 */


void FUN_01be9810(longlong param_1)

{
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 *local_18;
  longlong local_10;
  
  local_40 = auStack_68;
  FUN_01be8d90(param_1);
  local_10 = FUN_01be3560(&PTR_FUN_01be3360,1,param_1);
  FUN_01be43d0(param_1);
  if (*(char *)(local_10 + 0x78) == '\0') {
    local_18 = (undefined8 *)(param_1 + 0x668);
    local_20 = *local_18;
    *local_18 = 0;
    FUN_00410f20(local_20);
    local_28 = (undefined8 *)(param_1 + 0x698);
    local_30 = *local_28;
    *local_28 = 0;
    FUN_00410f20(local_30);
  }
  FUN_00410f20(local_10);
  return;
}

