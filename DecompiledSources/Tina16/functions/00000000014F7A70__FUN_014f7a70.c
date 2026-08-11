/* Ghidra address: 014f7a70 */
/* Ghidra symbol: FUN_014f7a70 */


void FUN_014f7a70(longlong param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 local_950 [2];
  undefined1 local_940 [704];
  double local_680;
  
  local_950[0] = 0;
  FUN_00417580(local_940,&DAT_01d0d0b8);
  FUN_00417c40(local_940,PTR_DAT_02004010,&DAT_01d0d0b8);
  local_680 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6d0));
  if (local_680 <= 0.0) {
    uVar2 = FUN_00b89270();
    FUN_00b8e520(uVar2,local_950,0x134);
    FUN_014f7a10(param_1,local_950[0]);
  }
  if (*(char *)(param_1 + 0x6f0) == '\0') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x260))(*(longlong **)(param_1 + 0x6e8))
    ;
    *PTR_DAT_020024f8 = uVar1;
    FUN_00417c40(PTR_DAT_02004010,local_940,&DAT_01d0d0b8);
  }
  FUN_00414480(local_950);
  FUN_00417740(local_940,&DAT_01d0d0b8);
  return;
}

