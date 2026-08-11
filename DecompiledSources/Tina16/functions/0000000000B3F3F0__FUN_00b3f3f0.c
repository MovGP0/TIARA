/* Ghidra address: 00b3f3f0 */
/* Ghidra symbol: FUN_00b3f3f0 */


void FUN_00b3f3f0(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  longlong local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414650(local_res8);
  FUN_0040d200(param_2,0x40,0);
  uVar1 = 0;
  if (local_res8[0] != 0) {
    uVar1 = *(uint *)(local_res8[0] + -4) >> 1;
  }
  if (0xf < uVar1) {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"File protection password must have 0-15 characters.")
    ;
    uVar1 = FUN_004134c0(uVar2);
  }
  iVar3 = 0;
  uVar4 = uVar1;
  if (-1 < (int)(uVar1 - 1)) {
    do {
      *(undefined1 *)(param_2 + (iVar3 * 2 + 1)) =
           *(undefined1 *)(local_res8[0] + -1 + (longlong)(iVar3 + 1) * 2);
      *(undefined1 *)(param_2 + iVar3 * 2) =
           *(undefined1 *)(local_res8[0] + -2 + (longlong)(iVar3 + 1) * 2);
      iVar3 = iVar3 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  *(undefined1 *)(param_2 + (int)(uVar1 * 2)) = 0x80;
  *(char *)(param_2 + 0x38) = (char)(uVar1 << 4);
  FUN_00414520(local_res8);
  return;
}

