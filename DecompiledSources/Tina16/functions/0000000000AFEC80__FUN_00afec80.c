/* Ghidra address: 00afec80 */
/* Ghidra symbol: FUN_00afec80 */


void FUN_00afec80(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 local_1c;
  
  local_1c = 0xffffffff;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x910) + 0x140))
                    (*(longlong **)(param_1 + 0x910),param_2,&local_1c);
  if (cVar1 != '\0') {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x910) + 0x30))
                      (*(longlong **)(param_1 + 0x910),local_1c);
    cVar1 = FUN_004113d0(uVar3,&PTR_FUN_00a83768);
    if (cVar1 != '\0') {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x910) + 0x30))
                        (*(longlong **)(param_1 + 0x910),local_1c);
      FUN_00a957e0(uVar3,param_3);
      lVar4 = (**(code **)(**(longlong **)(param_1 + 0x910) + 0x30))
                        (*(longlong **)(param_1 + 0x910),local_1c);
      if ((*(char *)(lVar4 + 0xd8) == '\0') && (0 < *(int *)(*(longlong *)(param_1 + 0x8b0) + 0x10))
         ) {
        FUN_00aa84c0(*(longlong *)(param_1 + 0x8b0));
        uVar2 = FUN_00af5fb0(param_1);
        FUN_00af2250(param_1);
        FUN_00af6000(param_1,uVar2);
      }
    }
  }
  return;
}

