/* Ghidra address: 01bc47d0 */
/* Ghidra symbol: FUN_01bc47d0 */


undefined1 FUN_01bc47d0(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  (**(code **)*DAT_02111420)(DAT_02111420);
  if (DAT_02111418 == 0) {
    uVar2 = FUN_00416740(local_res8[0]);
    DAT_02111418 = thunk_FUN_04163be6(uVar2);
    if (0x1f < DAT_02111418) {
      DAT_02111408 = FUN_00427c10(DAT_02111418,L"CX2A");
      DAT_02111400 = FUN_00427c10(DAT_02111418,L"CX2AP");
    }
  }
  (**(code **)(*DAT_02111420 + 8))(DAT_02111420);
  if (((DAT_02111418 < 0x20) || (DAT_02111408 == 0)) || (DAT_02111400 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_00414480(local_res8);
  return uVar1;
}

