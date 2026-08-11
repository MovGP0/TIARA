/* Ghidra address: 010a7830 */
/* Ghidra symbol: FUN_010a7830 */


void FUN_010a7830(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 local_422 [1026];
  longlong local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x510) + 0x18))
            (*(longlong **)(param_1 + 0x510),local_20,param_2);
  iVar3 = 0;
  if (local_20[0] != 0) {
    iVar3 = *(int *)(local_20[0] + -4);
  }
  if ((iVar3 < DAT_0202f914) && (-1 < DAT_0202f914 - iVar3)) {
    iVar3 = (DAT_0202f914 - iVar3) + 1;
    do {
      FUN_00416ad0(local_20,&LAB_010a79c8);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  thunk_FUN_03b994b9((longlong)DAT_0202f91c,DAT_0202f918);
  uVar2 = FUN_0065b870(param_1);
  thunk_FUN_041b2403(uVar2,0xd6,&DAT_0202f920,(longlong)DAT_0202f930);
  thunk_FUN_03e3a7dc((longlong)DAT_0202f91c,param_3);
  DAT_0202f934 = thunk_FUN_0412a071((longlong)DAT_0202f91c,0);
  uVar2 = FUN_00442620(local_422,local_20[0]);
  uVar1 = 0;
  if (local_20[0] != 0) {
    uVar1 = *(undefined4 *)(local_20[0] + -4);
  }
  thunk_FUN_04193d0c((longlong)DAT_0202f91c,DAT_0202f920,DAT_0202f924,uVar2,uVar1);
  thunk_FUN_03b994b9((longlong)DAT_0202f91c,1);
  thunk_FUN_0412a071((longlong)DAT_0202f91c,DAT_0202f934);
  FUN_00414480(local_20);
  return;
}

