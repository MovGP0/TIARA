/* Ghidra address: 01953a00 */
/* Ghidra symbol: FUN_01953a00 */


void FUN_01953a00(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x60) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x80))
              (*(longlong **)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x10),param_2);
  }
  else {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xb0))
                      (*(longlong **)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x10));
    if (iVar1 != -1) {
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x98))(*(longlong **)(param_1 + 0x28),iVar1);
    }
  }
  iVar1 = (**(code **)(**(longlong **)(param_2 + 0x80) + 0x30))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_2 + 0x80) + 0x20))
                        (*(longlong **)(param_2 + 0x80),iVar3);
      FUN_01953a00(param_1,uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

