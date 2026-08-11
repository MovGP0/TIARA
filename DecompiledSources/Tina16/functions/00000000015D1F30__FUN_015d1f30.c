/* Ghidra address: 015d1f30 */
/* Ghidra symbol: FUN_015d1f30 */


void FUN_015d1f30(longlong param_1)

{
  FUN_015c2e10(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xee0) + 0x238) + 0x28),
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xee0) + 0x238) + 0x20));
  if (*(longlong *)(*(longlong *)(param_1 + 0xee0) + 0x250) != 0) {
    if (*(longlong *)(param_1 + 0xea8) == 0) {
      FUN_004b6e40(*(undefined8 *)(*(longlong *)(param_1 + 0xee0) + 0x250),
                   *(undefined8 *)(param_1 + 0xea0));
      *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xee0) + 0x238) + 8) =
           *(undefined8 *)(*(longlong *)(param_1 + 0xee0) + 0x250);
      FUN_015c8e90(*(undefined8 *)(*(longlong *)(param_1 + 0xee0) + 0x238),1,0);
    }
    else {
      FUN_015cdf80(param_1,*(undefined4 *)(param_1 + 0xe94));
    }
  }
  return;
}

