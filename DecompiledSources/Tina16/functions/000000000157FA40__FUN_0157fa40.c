/* Ghidra address: 0157fa40 */
/* Ghidra symbol: FUN_0157fa40 */


void FUN_0157fa40(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    uVar1 = FUN_004113f0(param_2,&PTR_FUN_00478eb0);
    uVar1 = FUN_004b6da0(uVar1);
    (**(code **)(param_1 + 0x50))
              (*(undefined8 *)(param_1 + 0x58),param_1,*(undefined8 *)(param_1 + 0x60),
               param_1 + 0x68,uVar1);
  }
  return;
}

