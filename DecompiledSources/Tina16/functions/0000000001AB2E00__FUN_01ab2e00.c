/* Ghidra address: 01ab2e00 */
/* Ghidra symbol: FUN_01ab2e00 */


undefined4 FUN_01ab2e00(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  
  uVar1 = FUN_01d2c120(param_1,param_2);
  if (*(char *)(param_1 + 0x10) != '\0') {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x28))(*(longlong **)(param_1 + 0xb0));
    iVar5 = 1;
    if (0 < iVar2) {
      do {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x30))
                          (*(longlong **)(param_1 + 0xb0),iVar5 + -1);
        plVar4 = (longlong *)FUN_004113f0(uVar3,&PTR_FUN_01d2a288);
        (**(code **)(*plVar4 + 0x98))(plVar4,param_2);
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return uVar1;
}

