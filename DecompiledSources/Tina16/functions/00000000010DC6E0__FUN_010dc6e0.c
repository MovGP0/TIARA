/* Ghidra address: 010dc6e0 */
/* Ghidra symbol: FUN_010dc6e0 */


void FUN_010dc6e0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                    (*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x1c));
  lVar2 = FUN_004113f0(uVar1,&PTR_FUN_011057c0);
  *(char *)(lVar2 + 0x2a) = (char)param_2;
  FUN_00e167b0(*(undefined4 *)(param_1 + 0x18),param_2);
  return;
}

