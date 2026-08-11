/* Ghidra address: 00985ed0 */
/* Ghidra symbol: FUN_00985ed0 */


undefined8 FUN_00985ed0(undefined8 param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  wchar_t *local_30;
  undefined1 local_28;
  undefined1 *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_20 = auStack_68;
  puVar1 = auStack_68;
  if (*(int *)(param_4 + 0x10) != 1) {
    local_30 = L"count";
    local_28 = 0x11;
    local_48 = 0;
    uVar4 = FUN_0044d530(&PTR_FUN_00901df0,1,L"Arguments mismatch error in %s().",&local_30);
    FUN_004134c0(uVar4);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  if (*(int *)(param_4 + 0x10) == 0) {
    FUN_00594f90();
  }
  local_10 = (longlong *)
             (**(code **)(*(longlong *)**(undefined8 **)(param_4 + 8) + 0x40))
                       ((longlong *)**(undefined8 **)(param_4 + 8),param_1,param_2,param_3);
  cVar2 = FUN_004113d0(local_10,&PTR_FUN_00926660);
  if (cVar2 == '\0') {
    local_30 = L"count";
    local_28 = 0x11;
    local_48 = 0;
    uVar4 = FUN_0044d530(&PTR_FUN_00901df0,1,
                         L"Argument mismatch error in %s(): Expression does not evaluate to node-set."
                         ,&local_30);
    FUN_004134c0(uVar4);
  }
  iVar3 = (**(code **)(*local_10 + 0x118))(local_10);
  local_18 = FUN_00990420(&PTR_FUN_00927180,1,(double)iVar3);
  FUN_00410f20(local_10);
  return local_18;
}

