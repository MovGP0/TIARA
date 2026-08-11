/* Ghidra address: 0065aa40 */
/* Ghidra symbol: FUN_0065aa40 */


void FUN_0065aa40(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (((*(ushort *)(param_1 + 0x34) & 0x10) == 0) && (*(short *)(param_2 + 8) != 0x20)) {
    uVar1 = FUN_007f9b70(param_1,1);
    uVar1 = FUN_0064fca0(uVar1,0xb006,*(undefined2 *)(param_2 + 8),
                         (longlong)*(int *)(param_2 + 0x10));
    *(undefined8 *)(param_2 + 0x18) = uVar1;
  }
  return;
}

