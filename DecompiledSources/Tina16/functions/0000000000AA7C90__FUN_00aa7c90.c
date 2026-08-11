/* Ghidra address: 00aa7c90 */
/* Ghidra symbol: FUN_00aa7c90 */


void FUN_00aa7c90(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 0x80) + 0xf8) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x60) + 0x80);
    (**(code **)(lVar1 + 0xf8))
              (*(undefined8 *)(lVar1 + 0x100),
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 0x80) + 0xb8),
               *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 0x88),param_2 + 0x38);
  }
  return;
}

