/* Ghidra address: 00700660 */
/* Ghidra symbol: FUN_00700660 */


void FUN_00700660(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_2 + 0x48) = 0;
  uVar2 = FUN_0065b870(*(undefined8 *)(param_2 + 0xa0));
  iVar1 = thunk_FUN_04166556(param_2 + 0x40,uVar2,0x201,0x201,1);
  if ((iVar1 == 0) || (*(int *)(param_2 + 0x48) != 0x12)) {
    **(undefined4 **)(param_2 + 0xa8) = 0x202;
    (**(code **)(**(longlong **)(param_2 + 0xa0) + -0x40))
              (*(undefined8 *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0xa8));
  }
  else {
    thunk_FUN_03fcecfa(*(undefined4 *)(param_2 + 0x50));
  }
  return;
}

