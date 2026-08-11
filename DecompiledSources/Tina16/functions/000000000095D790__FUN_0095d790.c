/* Ghidra address: 0095d790 */
/* Ghidra symbol: FUN_0095d790 */


void FUN_0095d790(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 0x2b) != '\0') {
    param_1 = FUN_0044d490(&PTR_FUN_009014f0,1,L"Content model in use error.");
    FUN_004134c0();
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))
                    (*(longlong **)(param_1 + 0x38),param_2);
  FUN_004113f0(uVar1,&PTR_FUN_00911b78);
  *(undefined1 *)(param_2 + 0x2b) = 1;
  return;
}

