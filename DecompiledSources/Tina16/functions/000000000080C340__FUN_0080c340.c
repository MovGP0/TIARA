/* Ghidra address: 0080c340 */
/* Ghidra symbol: FUN_0080c340 */


longlong * FUN_0080c340(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_218 [512];
  
  if ((*(char *)(param_1 + 0x158) == '\0') || (*(char *)(param_1 + 0x193) != '\0')) {
    FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x118));
  }
  else {
    uVar1 = thunk_FUN_041ca87a(*(undefined8 *)(param_1 + 0x2d0),local_218,0x100);
    FUN_00414740(param_2,local_218,uVar1);
    iVar2 = 0;
    if (*param_2 != 0) {
      iVar2 = *(int *)(*param_2 + -4);
    }
    if (iVar2 == 0) {
      FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x118));
    }
  }
  return param_2;
}

