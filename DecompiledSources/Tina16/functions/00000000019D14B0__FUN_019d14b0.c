/* Ghidra address: 019d14b0 */
/* Ghidra symbol: FUN_019d14b0 */


void FUN_019d14b0(longlong param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x50) =
       *(undefined4 *)
        (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x78) + 0x18) + 0x2c);
  uVar1 = FUN_005fd4d0(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x78));
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  if (0 < param_3) {
    FUN_005fd6d0(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x78),param_3);
  }
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x78),param_2);
  return;
}

