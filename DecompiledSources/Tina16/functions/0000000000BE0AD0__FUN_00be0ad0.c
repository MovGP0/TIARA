/* Ghidra address: 00be0ad0 */
/* Ghidra symbol: FUN_00be0ad0 */


undefined8 FUN_00be0ad0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_a8 [40];
  undefined1 *local_80;
  undefined4 local_5c;
  int local_58 [4];
  undefined4 local_48;
  int local_44;
  longlong local_40;
  longlong local_38;
  int local_2c;
  longlong local_28;
  longlong local_20;
  
  local_80 = auStack_a8;
  local_20 = FUN_0082ccd0(&PTR_FUN_00825200,1);
  local_28 = FUN_0082ccd0(&PTR_FUN_00825200,1);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  local_2c = 0;
  if (-1 < iVar1 + -1) {
    do {
      local_38 = *(longlong *)(param_1 + 0x10);
      if (*(int *)(*(longlong *)(local_38 + 8) + 8 + (longlong)local_2c * 0x14) != DAT_01e9bf00) {
        local_40 = local_38;
        FUN_00be0a40(auStack_a8,
                     *(undefined4 *)(*(longlong *)(local_38 + 8) + (longlong)local_2c * 0x14));
        local_44 = local_2c;
        local_48 = FUN_00597de0(local_20 + 8,&local_44);
        if (*(int *)(local_20 + 0x10) == param_3) {
          local_58[0] = local_2c;
          local_5c = FUN_00597de0(local_28 + 8,local_58);
        }
      }
      local_2c = local_2c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_0082d9f0(local_28,param_2);
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  return param_2;
}

