/* Ghidra address: 016c4da0 */
/* Ghidra symbol: FUN_016c4da0 */


void FUN_016c4da0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  
  cVar3 = FUN_004113d0(param_2,&PTR_FUN_016a09d8);
  if (cVar3 == '\0') {
    uVar2 = FUN_016a5500(&PTR_FUN_016a0e58,1,param_2);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x198) + 0x40);
    (**(code **)(*plVar1 + 0x50))(plVar1,uVar2);
  }
  else {
    uVar2 = FUN_016a5010(&PTR_FUN_016a09d8,1,param_2);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x198) + 0x40);
    (**(code **)(*plVar1 + 0x50))(plVar1,uVar2);
  }
  return;
}

