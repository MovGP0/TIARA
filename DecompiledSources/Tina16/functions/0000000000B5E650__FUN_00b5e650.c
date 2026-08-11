/* Ghidra address: 00b5e650 */
/* Ghidra symbol: FUN_00b5e650 */


void FUN_00b5e650(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  ushort uVar3;
  short sVar4;
  undefined8 uVar5;
  undefined2 local_42;
  ushort local_40;
  ushort local_3e;
  ushort local_3c;
  undefined2 local_3a [5];
  
  if (*(char *)(param_1 + 0x32) == '\0') {
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  else {
    FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_3e);
    FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_40);
    FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),local_3a);
    FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_42);
    FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_3c);
    if (0xff < local_40) {
      local_40 = 0xff;
    }
    if (local_3e <= local_40) {
      sVar4 = (local_40 - local_3e) + 1;
      uVar3 = local_3e;
      do {
        lVar1 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                             *(undefined4 *)(param_1 + 0x40));
        uVar2 = FUN_00b52ce0(*(undefined8 *)(lVar1 + 0x18),uVar3);
        uVar5 = FUN_00b1bc80(local_3a[0]);
        FUN_00b51a30(uVar2,uVar5);
        if ((local_3c & 1) != 0) {
          lVar1 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                               *(undefined4 *)(param_1 + 0x40));
          uVar2 = FUN_00b52ce0(*(undefined8 *)(lVar1 + 0x18),uVar3);
          FUN_00b50760(uVar2,1);
        }
        lVar1 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                             *(undefined4 *)(param_1 + 0x40));
        uVar2 = FUN_00b52ce0(*(undefined8 *)(lVar1 + 0x18),uVar3);
        FUN_00b4da30(uVar2,local_42);
        uVar3 = uVar3 + 1;
        sVar4 = sVar4 + -1;
      } while (sVar4 != 0);
    }
    for (uVar3 = (ushort)((byte)(local_3c >> 8) & 7); uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar2 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                           *(undefined4 *)(param_1 + 0x40));
      FUN_00b58e90(uVar2,(undefined1)local_3e,(undefined1)local_40);
    }
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  return;
}

