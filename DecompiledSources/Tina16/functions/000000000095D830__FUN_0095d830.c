/* Ghidra address: 0095d830 */
/* Ghidra symbol: FUN_0095d830 */


void FUN_0095d830(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))
                    (*(longlong **)(param_1 + 0x38),param_2);
  if (iVar1 == -1) {
    uVar2 = FUN_0044d490(&PTR_FUN_00901268,1,L"Node not found error.");
    FUN_004134c0(uVar2);
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x28))
                    (*(longlong **)(param_1 + 0x38),param_2);
  FUN_004113f0(uVar2,&PTR_FUN_00911b78);
  *(undefined1 *)(param_2 + 0x2b) = 0;
  return;
}

