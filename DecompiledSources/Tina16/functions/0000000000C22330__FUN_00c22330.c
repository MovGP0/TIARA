/* Ghidra address: 00c22330 */
/* Ghidra symbol: FUN_00c22330 */


void FUN_00c22330(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined2 local_40c;
  undefined2 local_40a;
  undefined1 local_408 [1024];
  
  local_40c = 0x300;
  local_40a = 4;
  iVar3 = 4;
  puVar1 = local_408;
  puVar2 = &DAT_01e9fed8;
  do {
    *puVar1 = *puVar2;
    puVar1[1] = *puVar2;
    puVar1[2] = *puVar2;
    puVar1[3] = 4;
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  thunk_FUN_04123694(&local_40c);
  return;
}

