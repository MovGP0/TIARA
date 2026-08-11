/* Ghidra address: 00afedd0 */
/* Ghidra symbol: FUN_00afedd0 */


undefined1 FUN_00afedd0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined4 local_1c;
  
  uVar4 = 0;
  local_1c = 0xffffffff;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8b0) + 0x298);
  cVar2 = (**(code **)(*plVar1 + 0x140))(plVar1,param_2,&local_1c);
  if (cVar2 != '\0') {
    lVar3 = FUN_00a75120(plVar1,local_1c);
    cVar2 = FUN_004113d0(lVar3,&PTR_FUN_00a7e788);
    if (cVar2 != '\0') {
      uVar4 = *(undefined1 *)(lVar3 + 0x40);
    }
  }
  return uVar4;
}

