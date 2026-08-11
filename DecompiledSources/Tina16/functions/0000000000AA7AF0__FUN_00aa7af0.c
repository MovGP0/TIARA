/* Ghidra address: 00aa7af0 */
/* Ghidra symbol: FUN_00aa7af0 */


void FUN_00aa7af0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x70) + 0x80) + 0xd8) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x70) + 0x80);
    (**(code **)(lVar1 + 0xd8))
              (*(undefined8 *)(lVar1 + 0xe0),
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x70) + 0x80) + 0xb8),
               *(undefined8 *)(*(longlong *)(param_2 + 0x70) + 0x88),param_2 + 0x48,param_2 + 0x44);
  }
  return;
}

