/* Ghidra address: 00a1be10 */
/* Ghidra symbol: FUN_00a1be10 */


void FUN_00a1be10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    lVar1 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,0x38);
    *(longlong *)(param_1 + 0x28) = lVar1;
  }
  *(code **)(lVar1 + 0x10) = FUN_00a1be70;
  *(code **)(lVar1 + 0x18) = FUN_00a1bea0;
  *(code **)(lVar1 + 0x20) = FUN_00a1bf00;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  return;
}

