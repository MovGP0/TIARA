/* Ghidra address: 017e1ad0 */
/* Ghidra symbol: FUN_017e1ad0 */


void FUN_017e1ad0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  char local_2c8;
  undefined1 local_2c7 [643];
  undefined4 local_44;
  
  iVar3 = *(int *)(param_1 + 0x10) + -1;
  bVar1 = false;
  FUN_00414480(param_2);
  do {
    uVar2 = FUN_00b94e60(param_1,iVar3);
    FUN_013b49d0(param_1,uVar2,&local_2c8);
    if (local_2c8 == '\x06') {
      bVar1 = true;
      FUN_004169a0(param_2,local_2c7);
      *param_3 = local_44;
    }
    else {
      iVar3 = iVar3 + -1;
    }
  } while ((!bVar1) && (-1 < iVar3));
  return;
}

