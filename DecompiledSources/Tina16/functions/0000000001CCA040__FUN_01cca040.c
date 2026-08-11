/* Ghidra address: 01cca040 */
/* Ghidra symbol: FUN_01cca040 */


void FUN_01cca040(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01cb46a8);
  *(char *)(param_1 + 0x98) = cVar1;
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x3c);
  }
  else {
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x40);
    FUN_01cc9e60(param_1,*(undefined8 *)(param_2 + 0x48));
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x28))(*(longlong **)(param_1 + 0x90));
    if (iVar2 == 0) {
      uVar3 = FUN_01cc1840(param_2);
      *(undefined4 *)(param_1 + 0x84) = uVar3;
    }
    else {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x28))(*(longlong **)(param_1 + 0x90));
      *(undefined4 *)(param_1 + 0x84) = uVar3;
    }
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x38);
  }
  *(undefined8 *)(param_1 + 0x18) =
       *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x440);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}

