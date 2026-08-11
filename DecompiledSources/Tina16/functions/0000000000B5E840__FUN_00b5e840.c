/* Ghidra address: 00b5e840 */
/* Ghidra symbol: FUN_00b5e840 */


void FUN_00b5e840(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_20 [2];
  undefined1 local_1e [2];
  undefined2 local_1c;
  undefined2 local_1a;
  
  FUN_00b257f0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),2);
  while( true ) {
    iVar1 = FUN_00b258c0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8));
    if (iVar1 < 8) break;
    lVar2 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                         *(undefined4 *)(param_1 + 0x40));
    uVar3 = FUN_00b572d0(*(undefined8 *)(lVar2 + 0x28));
    FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_1a);
    FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_1c);
    FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),local_1e);
    FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),local_20);
    FUN_00b22230(uVar3,local_1a,local_1c,local_1e[0],local_20[0]);
    FUN_00b568a0(uVar3);
  }
  *(undefined1 *)(param_1 + 0x44) = 1;
  return;
}

