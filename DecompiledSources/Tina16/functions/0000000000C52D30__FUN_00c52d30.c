/* Ghidra address: 00c52d30 */
/* Ghidra symbol: FUN_00c52d30 */


void FUN_00c52d30(void)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 local_40;
  undefined1 local_32 [26];
  
  local_40 = 0;
  iVar3 = 0x1d;
  puVar2 = &DAT_01ea52bc;
  do {
    FUN_004169a0(&local_40,puVar2 + 1);
    uVar1 = FUN_00442620(local_32,local_40);
    uVar1 = thunk_FUN_03978312(PTR_IMAGE_DOS_HEADER_0200c280,uVar1);
    FUN_00808990(*(undefined8 *)PTR_DAT_02005950,*puVar2,uVar1);
    puVar2 = puVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_00414480(&local_40);
  return;
}

