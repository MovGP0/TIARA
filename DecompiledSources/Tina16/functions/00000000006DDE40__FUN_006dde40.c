/* Ghidra address: 006dde40 */
/* Ghidra symbol: FUN_006dde40 */


void FUN_006dde40(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_006dc7c0(*(undefined8 *)(param_2 + 0xa0));
  *(undefined8 *)(lVar1 + 0x5d8) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(lVar1 + 0x5e0) = *(undefined8 *)(param_2 + 0x78);
  lVar1 = FUN_006dc7c0(*(undefined8 *)(param_2 + 0xa0));
  *(undefined8 *)(lVar1 + 0x5c8) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(lVar1 + 0x5d0) = *(undefined8 *)(param_2 + 0x68);
  return;
}

