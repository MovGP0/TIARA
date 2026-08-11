/* Ghidra address: 0135a210 */
/* Ghidra symbol: FUN_0135a210 */


void FUN_0135a210(longlong param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4,
                 longlong param_5)

{
  int iVar1;
  int iVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  FUN_00414610(param_4);
  (**(code **)(**(longlong **)(param_5 + 0x10) + 0x90))(*(longlong **)(param_5 + 0x10));
  iVar2 = *(int *)(param_1 + 0x2d8);
  iVar1 = 1;
  if (0 < iVar2) {
    do {
      FUN_01355660(param_1,*(undefined8 *)
                            (*(longlong *)
                              (*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar1 * 8) + 0x128),0
                   ,param_2,param_3,param_5);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_0135c7a0(*(undefined8 *)(param_5 + 0x18),*(undefined8 *)(param_5 + 0x10));
  iVar2 = (**(code **)(**(longlong **)(param_5 + 0x10) + 0x28))(*(longlong **)(param_5 + 0x10));
  if (0 < iVar2) {
    (**(code **)(**(longlong **)(param_5 + 0x10) + 0x100))
              (*(longlong **)(param_5 + 0x10),local_res20);
  }
  FUN_00414480(&local_res20);
  return;
}

