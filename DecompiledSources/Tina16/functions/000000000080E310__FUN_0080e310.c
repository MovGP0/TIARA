/* Ghidra address: 0080e310 */
/* Ghidra symbol: FUN_0080e310 */


void FUN_0080e310(longlong param_1,byte param_2)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar2 = thunk_FUN_0419e3da(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x2d0));
  if (((iVar2 != 0) == (bool)DAT_01e16440) && (DAT_01e16440 != param_2)) {
    if ((*(char *)(*(longlong *)(param_1 + 0x50) + 0x193) != '\0') && (DAT_01e16440 == 0)) {
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x2d0);
      uVar3 = thunk_FUN_04118143(uVar1,0xffffffec);
      thunk_FUN_03c9d277(uVar1,0xffffffec,uVar3 | 0x8000000);
    }
    thunk_FUN_041cc6e2(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x2d0),0,0,0,0,0,
                       *(undefined2 *)(&DAT_01e16530 + (ulonglong)param_2 * 2));
    DAT_01e16440 = param_2;
  }
  return;
}

