/* Ghidra address: 0095f790 */
/* Ghidra symbol: FUN_0095f790 */


undefined8 FUN_0095f790(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))
                    (*(longlong **)(param_1 + 0x38),param_2);
  lVar2 = FUN_004113f0(uVar1,&PTR_FUN_00912f38);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else if (*(char *)(lVar2 + 0x40) == '\x02') {
    uVar1 = 0;
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 8))(*(longlong **)(param_1 + 0x38),param_2);
    FUN_00410f20(lVar2);
    uVar1 = 1;
  }
  return uVar1;
}

