/* Ghidra address: 00a0ede0 */
/* Ghidra symbol: FUN_00a0ede0 */


void FUN_00a0ede0(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x60);
  *(undefined8 **)(param_1 + 0x250) = puVar1;
  *puVar1 = FUN_00a0eed0;
  *(undefined1 (*) [16])(puVar1 + 9) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 7) = (undefined1  [16])0x0;
  puVar2 = (undefined4 *)
           (*(code *)**(undefined8 **)(param_1 + 8))
                     (param_1,1,(longlong)*(int *)(param_1 + 0x38) << 8);
  *(undefined4 **)(param_1 + 0xc0) = puVar2;
  if (0 < *(int *)(param_1 + 0x38)) {
    iVar3 = 0;
    do {
      puVar2[0x3c] = 0xffffffff;
      puVar2[0x3d] = 0xffffffff;
      puVar2[0x3e] = 0xffffffff;
      puVar2[0x3f] = 0xffffffff;
      puVar2[0x38] = 0xffffffff;
      puVar2[0x39] = 0xffffffff;
      puVar2[0x3a] = 0xffffffff;
      puVar2[0x3b] = 0xffffffff;
      puVar2[0x34] = 0xffffffff;
      puVar2[0x35] = 0xffffffff;
      puVar2[0x36] = 0xffffffff;
      puVar2[0x37] = 0xffffffff;
      puVar2[0x30] = 0xffffffff;
      puVar2[0x31] = 0xffffffff;
      puVar2[0x32] = 0xffffffff;
      puVar2[0x33] = 0xffffffff;
      puVar2[0x2c] = 0xffffffff;
      puVar2[0x2d] = 0xffffffff;
      puVar2[0x2e] = 0xffffffff;
      puVar2[0x2f] = 0xffffffff;
      puVar2[0x28] = 0xffffffff;
      puVar2[0x29] = 0xffffffff;
      puVar2[0x2a] = 0xffffffff;
      puVar2[0x2b] = 0xffffffff;
      puVar2[0x24] = 0xffffffff;
      puVar2[0x25] = 0xffffffff;
      puVar2[0x26] = 0xffffffff;
      puVar2[0x27] = 0xffffffff;
      puVar2[0x20] = 0xffffffff;
      puVar2[0x21] = 0xffffffff;
      puVar2[0x22] = 0xffffffff;
      puVar2[0x23] = 0xffffffff;
      puVar2[0x1c] = 0xffffffff;
      puVar2[0x1d] = 0xffffffff;
      puVar2[0x1e] = 0xffffffff;
      puVar2[0x1f] = 0xffffffff;
      puVar2[0x18] = 0xffffffff;
      puVar2[0x19] = 0xffffffff;
      puVar2[0x1a] = 0xffffffff;
      puVar2[0x1b] = 0xffffffff;
      puVar2[0x14] = 0xffffffff;
      puVar2[0x15] = 0xffffffff;
      puVar2[0x16] = 0xffffffff;
      puVar2[0x17] = 0xffffffff;
      puVar2[0x10] = 0xffffffff;
      puVar2[0x11] = 0xffffffff;
      puVar2[0x12] = 0xffffffff;
      puVar2[0x13] = 0xffffffff;
      puVar2[0xc] = 0xffffffff;
      puVar2[0xd] = 0xffffffff;
      puVar2[0xe] = 0xffffffff;
      puVar2[0xf] = 0xffffffff;
      puVar2[8] = 0xffffffff;
      puVar2[9] = 0xffffffff;
      puVar2[10] = 0xffffffff;
      puVar2[0xb] = 0xffffffff;
      puVar2[4] = 0xffffffff;
      puVar2[5] = 0xffffffff;
      puVar2[6] = 0xffffffff;
      puVar2[7] = 0xffffffff;
      *puVar2 = 0xffffffff;
      puVar2[1] = 0xffffffff;
      puVar2[2] = 0xffffffff;
      puVar2[3] = 0xffffffff;
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 0x40;
    } while (iVar3 < *(int *)(param_1 + 0x38));
  }
  return;
}

