/* Ghidra address: 006d5650 */
/* Ghidra symbol: FUN_006d5650 */


void FUN_006d5650(longlong param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(char *)(param_1 + 0x4c2) != param_2) {
    if ((param_2 != '\0') && (*(char *)(param_1 + 0x4c1) != '\0')) {
      FUN_0041ddd0(&local_10,PTR_PTR_020017a0);
      uVar1 = FUN_0044d490(&PTR_FUN_00472870,1,local_10);
      FUN_004134c0(uVar1);
    }
    *(char *)(param_1 + 0x4c2) = param_2;
    if ((*(char *)(param_1 + 0x4b0) == '\0') && ((param_2 == '\x02' || (param_2 == '\x03')))) {
      FUN_006d52b0(param_1,1);
    }
    FUN_00655b90(param_1);
  }
  FUN_00414480(&local_10);
  return;
}

