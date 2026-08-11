/* Ghidra address: 01b80750 */
/* Ghidra symbol: FUN_01b80750 */


undefined1 FUN_01b80750(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  longlong local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  if (local_res8[0] != 0) {
    iVar2 = FUN_00416db0(local_res8[0],&LAB_01b807c4);
    if (iVar2 != 0) {
      uVar1 = 0;
      goto LAB_01b80787;
    }
  }
  uVar1 = 1;
LAB_01b80787:
  FUN_00414480(local_res8);
  return uVar1;
}

