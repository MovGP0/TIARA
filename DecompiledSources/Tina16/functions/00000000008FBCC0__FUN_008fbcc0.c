/* Ghidra address: 008fbcc0 */
/* Ghidra symbol: FUN_008fbcc0 */


undefined1 FUN_008fbcc0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong local_res8 [4];
  undefined1 local_3d;
  int local_3c;
  
  local_res8[0] = param_1;
  FUN_00414650(local_res8);
  local_3d = 0;
  uVar4 = 0;
  if (local_res8[0] != 0) {
    uVar4 = *(uint *)(local_res8[0] + -4) >> 1;
  }
  local_3c = 0;
  iVar3 = 0;
  bVar1 = false;
  while (uVar4 != 0) {
    cVar2 = FUN_008fc3a0(*(undefined2 *)(local_res8[0] + -2));
    if (cVar2 == '\0') {
      if ((*(short *)(local_res8[0] + -2) != 0x2e) || (!bVar1)) goto LAB_008fbd5c;
      bVar1 = false;
      iVar3 = iVar3 + 1;
    }
    else if (!bVar1) {
      bVar1 = true;
      local_3c = local_3c + 1;
    }
  }
  if ((iVar3 == 3) && (local_3c == 4)) {
    local_3d = 1;
  }
LAB_008fbd5c:
  FUN_00414520(local_res8);
  return local_3d;
}

