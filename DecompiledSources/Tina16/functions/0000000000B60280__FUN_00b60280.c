/* Ghidra address: 00b60280 */
/* Ghidra symbol: FUN_00b60280 */


void FUN_00b60280(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined2 local_1a [5];
  
  iVar1 = FUN_00b258c0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8));
  if (0x14 < iVar1) {
    FUN_00b257f0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),0x13);
    FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),local_1a);
    lVar2 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                         *(undefined4 *)(param_1 + 0x40));
    *(undefined2 *)(lVar2 + 0x6a) = local_1a[0];
  }
  *(undefined1 *)(param_1 + 0x44) = 1;
  return;
}

