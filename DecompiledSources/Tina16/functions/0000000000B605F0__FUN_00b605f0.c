/* Ghidra address: 00b605f0 */
/* Ghidra symbol: FUN_00b605f0 */


void FUN_00b605f0(longlong param_1)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  FUN_00415d10(&local_18,*(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x14),0);
  FUN_00b257a0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_18,
               *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x14));
  FUN_00b5c860(param_1);
  local_10 = FUN_00b34bf0(&DAT_00b33d30,1);
  FUN_00b36010(local_18,&local_10,*(undefined8 *)(param_1 + 0x88),*(undefined2 *)(param_1 + 0x40),
               *(undefined1 *)(param_1 + 0x34));
  lVar1 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x40));
  FUN_00b353f0(*(undefined8 *)(lVar1 + 0x70),local_10);
  *(undefined1 *)(param_1 + 0x44) = 1;
  FUN_004144d0(&local_18);
  return;
}

