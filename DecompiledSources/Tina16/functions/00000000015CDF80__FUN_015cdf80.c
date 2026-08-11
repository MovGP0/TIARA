/* Ghidra address: 015cdf80 */
/* Ghidra symbol: FUN_015cdf80 */


void FUN_015cdf80(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0xea8) == 0) {
    FUN_015b59b0(&PTR_FUN_015b5818,1,6,*(undefined8 *)(param_1 + 0xee0));
  }
  FUN_004b6dc0(*(undefined8 *)(*(longlong *)(param_1 + 0xee0) + 0x250),
               *(undefined8 *)(param_1 + 0xea0));
  uVar1 = FUN_004b6da0(*(undefined8 *)(*(longlong *)(param_1 + 0xee0) + 0x250));
  FUN_004b6e40(*(undefined8 *)(*(longlong *)(param_1 + 0xee0) + 0x250),uVar1);
  FUN_004b6dc0(*(undefined8 *)(param_1 + 0xea8),0);
  uVar1 = (**(code **)**(undefined8 **)(param_1 + 0xea8))(*(undefined8 **)(param_1 + 0xea8));
  FUN_004b8ba0(*(undefined8 *)(*(longlong *)(param_1 + 0xee0) + 0x250),
               *(undefined8 *)(param_1 + 0xea8),uVar1);
  FUN_015cdf20(param_1);
  return;
}

