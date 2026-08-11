/* Ghidra address: 0163cec0 */
/* Ghidra symbol: FUN_0163cec0 */


void FUN_0163cec0(undefined8 param_1,longlong param_2,longlong param_3)

{
  if (param_2 == 0) {
    FUN_01613110(L"SetPinData");
  }
  *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(*(longlong *)(param_3 + 0x10) + 8);
  *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(*(longlong *)(param_3 + 0x18) + 8);
  return;
}

