/* Ghidra address: 008fbda0 */
/* Ghidra symbol: FUN_008fbda0 */


undefined1 FUN_008fbda0(longlong param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong local_res8 [4];
  undefined1 local_19;
  
  local_res8[0] = param_1;
  FUN_00414650(local_res8);
  local_19 = 1;
  uVar2 = 0;
  if (local_res8[0] != 0) {
    uVar2 = *(uint *)(local_res8[0] + -4) >> 1;
  }
  iVar3 = 1;
  do {
    if (uVar2 == 0) {
LAB_008fbe09:
      FUN_00414520(local_res8);
      return local_19;
    }
    cVar1 = FUN_008fc3a0(*(undefined2 *)(local_res8[0] + -2 + (longlong)iVar3 * 2));
    if (cVar1 == '\0') {
      local_19 = 0;
      goto LAB_008fbe09;
    }
    iVar3 = iVar3 + 1;
    uVar2 = uVar2 - 1;
  } while( true );
}

