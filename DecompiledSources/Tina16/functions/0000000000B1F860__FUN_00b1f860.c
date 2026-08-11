/* Ghidra address: 00b1f860 */
/* Ghidra symbol: FUN_00b1f860 */


int FUN_00b1f860(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)FUN_00418560(10,&DAT_00b1be28);
  FUN_00414b90(puVar1 + 1,param_2);
  *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + 1;
  if (*(ushort *)(param_1 + 8) < 0xa4) {
    *(undefined2 *)(param_1 + 8) = 0xa4;
  }
  *puVar1 = *(undefined2 *)(param_1 + 8);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10),puVar1);
  return *(int *)(*(longlong *)(param_1 + 0x10) + 0x10) + -1;
}

