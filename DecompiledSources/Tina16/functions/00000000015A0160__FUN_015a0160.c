/* Ghidra address: 015a0160 */
/* Ghidra symbol: FUN_015a0160 */


undefined8 FUN_015a0160(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x28) == 0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 0x28);
    puVar1[7] = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (puVar1[2] != 0) {
      *(uint *)(param_1 + 0x4c) = puVar1[2] & 1;
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[3] = 0;
    puVar1[5] = 0x8000;
    *(undefined8 *)(puVar1 + 8) = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar3 = puVar1 + 0x151;
    *(undefined4 **)(puVar1 + 0x1f) = puVar3;
    *(undefined4 **)(puVar1 + 0x17) = puVar3;
    *(undefined4 **)(puVar1 + 0x15) = puVar3;
    puVar1[0x6f5] = 1;
    puVar1[0x6f6] = 0xffffffff;
    uVar2 = 0;
  }
  return uVar2;
}

