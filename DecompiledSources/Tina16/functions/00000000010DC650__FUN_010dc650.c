/* Ghidra address: 010dc650 */
/* Ghidra symbol: FUN_010dc650 */


void FUN_010dc650(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                    (*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x1c));
  lVar2 = FUN_004113f0(uVar1,&PTR_FUN_011057c0);
  FUN_00e16c60(*(undefined4 *)(param_1 + 0x18),param_2,lVar2 + 0x2a);
  return;
}

