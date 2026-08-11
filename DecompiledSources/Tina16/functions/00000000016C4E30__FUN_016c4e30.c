/* Ghidra address: 016c4e30 */
/* Ghidra symbol: FUN_016c4e30 */


undefined8 FUN_016c4e30(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_016a09d8);
  if (cVar2 == '\0') {
    uVar3 = FUN_016a5500(&PTR_FUN_016a0e58,1,param_2);
    FUN_01d348b0(*(undefined8 *)(*(longlong *)(param_1 + 0x198) + 0x40),0,uVar3);
  }
  else {
    uVar3 = FUN_016a5010(&PTR_FUN_016a09d8,1,param_2);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x198) + 0x40);
    (**(code **)(*plVar1 + 0x50))(plVar1,uVar3);
  }
  return 0;
}

