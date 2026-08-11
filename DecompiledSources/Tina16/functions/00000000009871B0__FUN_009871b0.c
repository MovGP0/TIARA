/* Ghidra address: 009871b0 */
/* Ghidra symbol: FUN_009871b0 */


void FUN_009871b0(undefined8 param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  wchar_t *local_38;
  undefined1 local_30;
  
  if (1 < *(int *)(param_4 + 0x10)) {
    local_38 = L"string";
    local_30 = 0x11;
    uVar1 = FUN_0044d530(&PTR_FUN_00901df0,1,L"Arguments mismatch error in %s().",&local_38,0);
    FUN_004134c0(uVar1);
  }
  if (*(int *)(param_4 + 0x10) == 0) {
    plVar2 = (longlong *)FUN_0098cda0(&PTR_FUN_00926660,1);
    (**(code **)(*plVar2 + 0x140))(plVar2,param_1);
  }
  else {
    if (*(int *)(param_4 + 0x10) == 0) {
      FUN_00594f90();
    }
    plVar2 = (longlong *)
             (**(code **)(*(longlong *)**(undefined8 **)(param_4 + 8) + 0x40))
                       ((longlong *)**(undefined8 **)(param_4 + 8),param_1,param_2,param_3);
  }
  FUN_00948d80(plVar2);
  return;
}

