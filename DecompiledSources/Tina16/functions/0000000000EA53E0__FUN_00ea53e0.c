/* Ghidra address: 00ea53e0 */
/* Ghidra symbol: FUN_00ea53e0 */


void FUN_00ea53e0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (0 < *(int *)(param_1 + 0x504)) {
    FUN_00ea3390(param_1);
    if (*(int *)(param_1 + 0x504) < 1) {
      uVar1 = FUN_0044d710(&PTR_FUN_00ea2d28,1,PTR_PTR_02001290);
      FUN_004134c0(uVar1);
    }
    FUN_00419260(param_1 + 0x530,&DAT_00ea1e50,1,(longlong)*(int *)(param_1 + 0x504));
    if (*(int *)(param_1 + 0x504) < 1) {
      uVar1 = FUN_0044d710(&PTR_FUN_00ea2d28,1,PTR_PTR_02001290);
      FUN_004134c0(uVar1);
    }
    iVar2 = *(int *)(param_1 + 0x504) + -1;
    if (-1 < iVar2) {
      do {
        FUN_00ea46f0(param_1,local_20,iVar2);
        FUN_00414ad0(*(longlong *)(param_1 + 0x530) + (longlong)iVar2 * 8,local_20[0]);
        iVar2 = iVar2 + -1;
      } while (iVar2 != -1);
    }
    *(undefined1 *)(param_1 + 0x528) = 1;
  }
  FUN_00414480(local_20);
  return;
}

