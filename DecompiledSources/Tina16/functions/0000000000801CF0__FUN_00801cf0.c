/* Ghidra address: 00801cf0 */
/* Ghidra symbol: FUN_00801cf0 */


void FUN_00801cf0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((*(uint *)(*(longlong *)(param_2 + 0x80) + 0xa4) & 0x2000) != 0) {
    uVar1 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x638),
                         *(undefined4 *)(param_2 + 0x5c));
    FUN_0065ed10(uVar1,0);
  }
  return;
}

