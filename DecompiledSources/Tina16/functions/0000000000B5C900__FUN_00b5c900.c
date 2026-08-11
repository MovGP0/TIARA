/* Ghidra address: 00b5c900 */
/* Ghidra symbol: FUN_00b5c900 */


void FUN_00b5c900(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_30;
  undefined8 local_28;
  byte local_20;
  byte local_1f;
  ushort local_1e;
  undefined1 local_1c [12];
  
  local_28 = 0;
  local_30 = 0;
  FUN_00b25710(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),local_1c);
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_1e);
  FUN_00b256b0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_20);
  FUN_00b256b0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_1f);
  if ((local_1f & 1) == 1) {
    FUN_00b257a0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_28,(uint)local_20 * 2);
    FUN_00b15310(&local_30,local_28);
  }
  else {
    FUN_00b257a0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_28,local_20);
    FUN_00b15390(&local_30,local_28);
  }
  FUN_00b59ae0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),local_30);
  FUN_00b28800(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x18),local_30);
  if ((local_1e & 1) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8);
    iVar2 = FUN_00b59a10(uVar1);
    lVar3 = FUN_00b598d0(uVar1,iVar2 + -1);
    *(undefined1 *)(lVar3 + 0x80) = 0;
  }
  *(undefined1 *)(param_1 + 0x44) = 1;
  FUN_00414520(&local_30);
  FUN_004144d0(&local_28);
  return;
}

