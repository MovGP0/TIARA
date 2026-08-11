/* Ghidra address: 00afed50 */
/* Ghidra symbol: FUN_00afed50 */


undefined8 FUN_00afed50(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_1c;
  
  local_1c = 0xffffffff;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8b0) + 0x298);
  cVar2 = (**(code **)(*plVar1 + 0x140))(plVar1,param_2,&local_1c);
  uVar4 = 0;
  if (cVar2 != '\0') {
    uVar3 = FUN_00a75120(plVar1,local_1c);
    cVar2 = FUN_004113d0(uVar3,&PTR_FUN_00a87e18);
    uVar4 = uVar3;
    if ((cVar2 == '\0') && (cVar2 = FUN_004113d0(uVar3,&PTR_FUN_00a83768), uVar4 = 0, cVar2 != '\0')
       ) {
      uVar4 = uVar3;
    }
  }
  return uVar4;
}

