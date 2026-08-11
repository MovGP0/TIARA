/* Ghidra address: 00970f90 */
/* Ghidra symbol: FUN_00970f90 */


void FUN_00970f90(longlong param_1,undefined1 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 local_10;
  
  local_10 = 0;
  *param_3 = 0;
  *param_4 = 0;
  iVar2 = FUN_00416420(*(undefined8 *)(param_1 + 0x88),L"xmlns");
  if (iVar2 == 0) {
    iVar2 = FUN_00416420(*(undefined8 *)(param_1 + 0x90),L"http://www.w3.org/2000/xmlns/");
    if (iVar2 == 0) goto LAB_00970ffd;
LAB_00971027:
    *param_2 = 0x95;
    FUN_00414b90(param_3,*(undefined8 *)(param_1 + 0x88));
    FUN_00414520(param_4);
  }
  else {
LAB_00970ffd:
    iVar2 = FUN_00416420(*(undefined8 *)(param_1 + 0x88),0);
    if (iVar2 != 0) {
      cVar1 = FUN_009009a0(*(undefined8 *)(param_1 + 0x88));
      if (cVar1 == '\0') goto LAB_00971027;
    }
    FUN_004168b0(&local_10,*(undefined8 *)(param_1 + 0x90));
    cVar1 = FUN_008fc3c0(local_10);
    if (cVar1 == '\0') {
      *param_2 = 0x94;
      FUN_00414b90(param_3,*(undefined8 *)(param_1 + 0x90));
      FUN_00414520(param_4);
    }
    else {
      *param_2 = 0;
      FUN_00414520(param_3);
      FUN_00414520(param_4);
    }
  }
  FUN_00414480(&local_10);
  return;
}

