/* Ghidra address: 00989ca0 */
/* Ghidra symbol: FUN_00989ca0 */


void FUN_00989ca0(undefined8 param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  undefined8 uVar1;
  wchar_t *local_38;
  undefined1 local_30;
  
  if (*(int *)(param_4 + 0x10) != 1) {
    local_38 = L"boolean";
    local_30 = 0x11;
    uVar1 = FUN_0044d530(&PTR_FUN_00901df0,1,L"Arguments mismatch error in %s().",&local_38,0);
    FUN_004134c0(uVar1);
  }
  if (*(int *)(param_4 + 0x10) == 0) {
    FUN_00594f90();
  }
  uVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_4 + 8) + 0x40))
                    ((longlong *)**(undefined8 **)(param_4 + 8),param_1,param_2,param_3);
  FUN_00948c00(uVar1);
  return;
}

