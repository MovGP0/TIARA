/* Ghidra address: 0184ce20 */
/* Ghidra symbol: FUN_0184ce20 */


undefined8 FUN_0184ce20(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0xb0))(*(longlong **)(param_1 + 0xa8));
  if (iVar2 != -1) {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x30))
                      (*(longlong **)(param_1 + 0xa8),iVar2);
    cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01842f58);
    if (cVar1 != '\0') {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x30))
                        (*(longlong **)(param_1 + 0xa8),iVar2);
    }
  }
  return uVar4;
}

