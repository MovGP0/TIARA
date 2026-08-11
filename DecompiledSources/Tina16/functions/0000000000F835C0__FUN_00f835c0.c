/* Ghidra address: 00f835c0 */
/* Ghidra symbol: FUN_00f835c0 */


void FUN_00f835c0(undefined2 param_1)

{
  longlong lVar1;
  code *local_28;
  longlong local_20;
  
  lVar1 = FUN_00f82a20(&DAT_00f82768,1);
  *(undefined1 *)(lVar1 + 8) = 0;
  local_28 = FUN_00f82df0;
  local_20 = lVar1;
  FUN_00f833f0(&local_28,param_1);
  do {
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  } while (*(char *)(lVar1 + 8) == '\0');
  FUN_00410f20(lVar1);
  return;
}

