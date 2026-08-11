/* Ghidra address: 00b5e460 */
/* Ghidra symbol: FUN_00b5e460 */


void FUN_00b5e460(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  ushort local_40;
  ushort local_3e;
  ushort local_3c;
  ushort local_3a [5];
  
  if (*(char *)(param_1 + 0x31) == '\0') {
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  else {
    FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_3e);
    FUN_00b257f0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),4);
    FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),local_3a);
    FUN_00b257f0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),4);
    FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_3c);
    FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_40);
    lVar2 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                         *(undefined4 *)(param_1 + 0x40));
    uVar3 = FUN_00b53830(*(undefined8 *)(lVar2 + 0x20),local_3e);
    FUN_00b508a0(uVar3,(double)local_3a[0] / 20.0);
    if ((local_3c & 0x20) != 0) {
      lVar2 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                           *(undefined4 *)(param_1 + 0x40));
      uVar3 = FUN_00b53830(*(undefined8 *)(lVar2 + 0x20),local_3e);
      FUN_00b50760(uVar3,1);
    }
    for (uVar4 = (uint)((byte)local_3c & 7); uVar4 != 0; uVar4 = uVar4 - 1) {
      uVar3 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                           *(undefined4 *)(param_1 + 0x40));
      FUN_00b58e40(uVar3,local_3e,local_3e);
    }
    if ((local_3c & 0x40) == 0) {
      lVar2 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                           *(undefined4 *)(param_1 + 0x40));
      uVar3 = FUN_00b53830(*(undefined8 *)(lVar2 + 0x20),local_3e);
      FUN_00b50960(uVar3);
    }
    if (((local_3c & 0x80) != 0) &&
       (iVar1 = FUN_00b24ec0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20)),
       (int)(uint)local_40 < iVar1)) {
      lVar2 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                           *(undefined4 *)(param_1 + 0x40));
      uVar3 = FUN_00b53830(*(undefined8 *)(lVar2 + 0x20),local_3e);
      FUN_00b4da30(uVar3,local_40);
    }
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  return;
}

