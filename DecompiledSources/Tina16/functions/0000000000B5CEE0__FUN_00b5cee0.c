/* Ghidra address: 00b5cee0 */
/* Ghidra symbol: FUN_00b5cee0 */


void FUN_00b5cee0(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  if (*(char *)(param_1 + 0x46) == '\0') {
    FUN_00b23cd0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x18));
    *(undefined1 *)(param_1 + 0x46) = 1;
  }
  local_20[0] = FUN_00b23f00(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x18));
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x78) + 8);
  uVar2 = (**(code **)*puVar1)(puVar1);
  FUN_00b257a0(puVar1,&local_28,uVar2);
  FUN_00b236e0(local_28,local_20);
  FUN_00b23e70(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x18));
  *(undefined1 *)(param_1 + 0x44) = 1;
  FUN_004144d0(&local_28);
  return;
}

