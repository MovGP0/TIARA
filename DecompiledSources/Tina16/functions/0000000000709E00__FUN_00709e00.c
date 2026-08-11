/* Ghidra address: 00709e00 */
/* Ghidra symbol: FUN_00709e00 */


longlong FUN_00709e00(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  FUN_004238d0(param_2,0,0,0,0);
  plVar1 = *(longlong **)(param_1 + 0x10);
  if ((plVar1 != (longlong *)0x0) && (cVar2 = FUN_004113d0(plVar1,&PTR_FUN_006abd68), cVar2 != '\0')
     ) {
    FUN_006d5070(plVar1,param_2);
    return param_2;
  }
  (**(code **)(*plVar1 + 0xe0))(plVar1,param_2);
  uVar3 = FUN_00786090(param_1);
  thunk_FUN_041b2403(uVar3,0x1328,0,param_2);
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 2;
  return param_2;
}

