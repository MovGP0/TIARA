/* Ghidra address: 01c7ea10 */
/* Ghidra symbol: FUN_01c7ea10 */


void FUN_01c7ea10(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_01c8a3c0(*(undefined8 *)(param_2 + 0xc0),
                       *(undefined8 *)(*(longlong *)(param_2 + 0xc0) + 0x2788));
  *(undefined8 *)(param_2 + 0x98) = uVar1;
  if (*(longlong *)(param_2 + 0x98) != 0) {
    FUN_00417c40(PTR_DAT_02004010,*(longlong *)(param_2 + 0xc0) + 0x1b80,&DAT_01d0d0b8);
  }
  FUN_00410f20(*(undefined8 *)(param_2 + 0x90));
  return;
}

