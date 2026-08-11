/* Ghidra address: 00b35f50 */
/* Ghidra symbol: FUN_00b35f50 */


void FUN_00b35f50(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 local_32 [2];
  undefined1 local_30 [2];
  undefined2 local_2e;
  undefined2 local_2c;
  ushort local_2a [5];
  
  FUN_00b256e0(*(undefined8 *)(param_1 + 0x68),local_2a);
  uVar2 = (uint)local_2a[0];
  iVar1 = 0;
  if (-1 < (int)(uVar2 - 1)) {
    do {
      FUN_00b256e0(*(undefined8 *)(param_1 + 0x68),&local_2c);
      FUN_00b256e0(*(undefined8 *)(param_1 + 0x68),&local_2e);
      FUN_00b256e0(*(undefined8 *)(param_1 + 0x68),local_30);
      FUN_00b256e0(*(undefined8 *)(param_1 + 0x68),local_32);
      FUN_00b22230(*(undefined8 *)(**(longlong **)(param_1 + 0x98) + 0x40),local_2c,local_2e,
                   local_30[0],local_32[0]);
      if (iVar1 == 0) {
        *(undefined2 *)(param_1 + 0x66) = local_2c;
        *(undefined1 *)(param_1 + 0x65) = local_30[0];
      }
      iVar1 = iVar1 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}

