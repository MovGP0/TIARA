/* Ghidra address: 0098acb0 */
/* Ghidra symbol: FUN_0098acb0 */


undefined8 FUN_0098acb0(undefined8 param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  wchar_t *local_40;
  undefined1 local_38;
  undefined1 *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_30 = auStack_78;
  puVar1 = auStack_78;
  if (*(int *)(param_4 + 0x10) != 1) {
    local_40 = L"ceiling";
    local_38 = 0x11;
    local_58 = 0;
    uVar4 = FUN_0044d530(&PTR_FUN_00901df0,1,L"Arguments mismatch error in %s().",&local_40);
    FUN_004134c0(uVar4);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  if (*(int *)(param_4 + 0x10) == 0) {
    FUN_00594f90();
  }
  local_20 = (longlong *)
             (**(code **)(*(longlong *)**(undefined8 **)(param_4 + 8) + 0x40))
                       ((longlong *)**(undefined8 **)(param_4 + 8),param_1,param_2,param_3);
  cVar2 = FUN_004113d0(local_20,&PTR_FUN_00927180);
  if (cVar2 == '\0') {
    local_40 = L"ceiling";
    local_38 = 0x11;
    local_58 = 0;
    uVar4 = FUN_0044d530(&PTR_FUN_00901df0,1,
                         L"Argument mismatch error in %s(): Expression does not evaluate to a number."
                         ,&local_40);
    FUN_004134c0(uVar4);
  }
  (**(code **)(*local_20 + 0x100))(local_20);
  cVar2 = FUN_00526f10();
  if (cVar2 == '\0') {
    (**(code **)(*local_20 + 0x100))(local_20);
    cVar2 = FUN_00526f30();
    if (cVar2 == '\0') {
      (**(code **)(*local_20 + 0x100))(local_20);
      iVar3 = FUN_00526300();
      local_28 = FUN_00990420(&PTR_FUN_00927180,1,(double)iVar3);
      goto code_r0x0098ae36;
    }
  }
  uVar4 = (**(code **)(*local_20 + 0x100))(local_20);
  local_28 = FUN_00990420(&PTR_FUN_00927180,1,uVar4);
code_r0x0098ae36:
  FUN_00410f20(local_20);
  return local_28;
}

