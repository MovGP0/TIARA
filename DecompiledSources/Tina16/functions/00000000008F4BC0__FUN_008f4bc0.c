/* Ghidra address: 008f4bc0 */
/* Ghidra symbol: FUN_008f4bc0 */


undefined1 FUN_008f4bc0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong local_res10 [3];
  undefined1 local_29;
  
  local_res10[0] = param_2;
  FUN_00414650(local_res10);
  uVar1 = 0;
  if (local_res10[0] != 0) {
    uVar1 = *(uint *)(local_res10[0] + -4) >> 1;
  }
  iVar2 = 1;
  do {
    if (uVar1 == 0) {
      local_29 = 1;
LAB_008f4c3a:
      FUN_00414520(local_res10);
      return local_29;
    }
    (**(code **)(*param_1 + 0x28))(param_1);
    if (*(uint *)(param_1 + 5) != (uint)*(ushort *)(local_res10[0] + -2 + (longlong)iVar2 * 2)) {
      local_29 = 0;
      goto LAB_008f4c3a;
    }
    iVar2 = iVar2 + 1;
    uVar1 = uVar1 - 1;
  } while( true );
}

