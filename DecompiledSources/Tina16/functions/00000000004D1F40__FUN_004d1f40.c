/* Ghidra address: 004d1f40 */
/* Ghidra symbol: FUN_004d1f40 */


undefined4 FUN_004d1f40(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_60 [48];
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_1c;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    uVar2 = FUN_0044d710(&PTR_FUN_004831c0,1,PTR_PTR_02003700);
    FUN_004134c0(uVar2);
  }
  local_30 = *(undefined8 *)(param_1 + 0x10);
  lVar3 = FUN_004d11f0();
  if (*(int *)(lVar3 + 8) == *(int *)PTR_DAT_02005bd8) {
    iVar1 = 0;
    local_28 = DAT_02011600;
    do {
      if (iVar1 == 2) {
        thunk_FUN_04166556(local_60,0,0,0,0);
      }
      iVar1 = thunk_FUN_0414e2fd(2,&local_30,0,1000,0x40);
      FUN_004d10c0(param_1);
      if (iVar1 == 1) {
        FUN_004d0700(0);
      }
    } while (iVar1 != 0);
  }
  else {
    thunk_FUN_0418d6df(local_30,0xffffffff);
  }
  iVar1 = thunk_FUN_039c559e(local_30,&local_1c);
  FUN_004d10c0(param_1,iVar1 != 0);
  return local_1c;
}

