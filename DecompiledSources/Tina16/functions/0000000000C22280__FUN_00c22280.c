/* Ghidra address: 00c22280 */
/* Ghidra symbol: FUN_00c22280 */


void FUN_00c22280(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined2 local_40c;
  undefined2 local_40a;
  undefined1 local_408 [1024];
  
  local_40c = 0x300;
  local_40a = 0x100;
  iVar1 = 0;
  puVar2 = local_408;
  do {
    uVar3 = (undefined1)iVar1;
    *puVar2 = uVar3;
    puVar2[1] = uVar3;
    puVar2[2] = uVar3;
    puVar2[3] = 4;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 4;
  } while (iVar1 != 0x100);
  thunk_FUN_04123694(&local_40c);
  return;
}

