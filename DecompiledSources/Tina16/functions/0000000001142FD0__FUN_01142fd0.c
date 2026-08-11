/* Ghidra address: 01142fd0 */
/* Ghidra symbol: FUN_01142fd0 */


void FUN_01142fd0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  if (*(longlong *)(param_1 + 0x778) == 0) {
    puVar1 = (undefined8 *)FUN_01c8a3c0(*(undefined8 *)PTR_DAT_02004e40,0);
    FUN_00414b50(local_20,*puVar1);
  }
  else {
    FUN_01cc37d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x778) + 8) + 8),local_20);
  }
  uVar2 = FUN_01143830(*(undefined1 *)(param_1 + 0x791),*(undefined1 *)(param_1 + 0x780),
                       *(undefined8 *)(param_1 + 0x798),0,local_20[0]);
  if (*(char *)(param_1 + 0x1007b1) != '\0') {
    FUN_013d2f60(*(undefined8 *)PTR_DAT_020027c0,0,0);
  }
  FUN_00b8fec0(local_30,*(undefined8 *)(param_1 + 0x789),*PTR_DAT_02005310,0,0x3cd203af9ee75616);
  FUN_013db650(uVar2,local_30[0],*(undefined1 *)(param_1 + 0x792),0);
  *(undefined4 *)(param_1 + 0x508) = 1;
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

