/* Ghidra address: 00cbba00 */
/* Ghidra symbol: FUN_00cbba00 */


undefined1 FUN_00cbba00(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  longlong local_10;
  
  local_10 = 0;
  iVar2 = FUN_00877cc0(param_2,0);
  if ((iVar2 < 100) || (999 < iVar2)) {
    FUN_0043ea00(&local_10,param_2);
    if (local_10 != 0) {
      uVar1 = 0;
      goto LAB_00cbba47;
    }
  }
  uVar1 = 1;
LAB_00cbba47:
  FUN_00414480(&local_10);
  return uVar1;
}

