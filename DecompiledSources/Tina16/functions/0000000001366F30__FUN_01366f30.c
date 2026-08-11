/* Ghidra address: 01366f30 */
/* Ghidra symbol: FUN_01366f30 */


void FUN_01366f30(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  if ((param_2 != (longlong *)0x0) && (*(char *)((longlong)param_2 + 0xb) != '\0')) {
    if (*(char *)(*(longlong *)(param_1 + 0x70) + 0x20) == '\0') {
      uVar1 = FUN_0198d430(*(undefined8 *)(param_1 + 0x38));
      (**(code **)(*param_2 + 0xa8))(param_2,uVar1);
      FUN_0198b6d0(*(undefined8 *)(param_1 + 0x38),param_2);
      if ((undefined **)*param_2 == &PTR_FUN_01cf10a8) {
        FUN_017ff4f0(param_2,local_20);
        FUN_00414b50(param_1 + 0x30,local_20[0]);
        FUN_00416cd0(param_1 + 0x28,3,L"DeletePart(",*(undefined8 *)(param_1 + 0x30),&LAB_013670e8);
        FUN_00415dd0(&local_28,*(undefined8 *)(param_1 + 0x28),0);
        FUN_017fe450(*(undefined8 *)PTR_DAT_02001d08,local_28,0,1);
        FUN_0135ac90(*(undefined8 *)PTR_DAT_02001f10,*(undefined8 *)(param_1 + 0x30));
      }
    }
    else {
      uVar1 = FUN_0198d430(*(undefined8 *)(param_1 + 0x38));
      (**(code **)(*param_2 + 0xe0))(param_2,uVar1);
    }
  }
  FUN_004144d0(&local_28);
  FUN_00414480(local_20);
  return;
}

