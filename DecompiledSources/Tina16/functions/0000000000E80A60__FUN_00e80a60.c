/* Ghidra address: 00e80a60 */
/* Ghidra symbol: FUN_00e80a60 */


void FUN_00e80a60(longlong param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 local_950 [2];
  undefined1 local_940 [704];
  double local_680;
  
  local_950[0] = 0;
  FUN_00417580(local_940,&DAT_01d0d0b8);
  FUN_00417c40(local_940,PTR_DAT_02004010,&DAT_01d0d0b8);
  local_680 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6b8));
  if (local_680 <= 0.0) {
    uVar2 = FUN_00b89270();
    FUN_00b8e520(uVar2,local_950,0x134);
    FUN_00e80bf0(param_1,local_950[0]);
  }
  if (*(char *)(param_1 + 0x718) == '\0') {
    *(undefined1 *)(param_1 + 0x6e4) = 1;
    *(undefined1 *)(param_1 + 0x6e5) = 1;
    uVar2 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6b8));
    *(undefined8 *)(param_1 + 0x6e6) = uVar2;
    uVar2 = FUN_015f6540(*(undefined8 *)(param_1 + 0x6e6));
    *(undefined8 *)(param_1 + 0x6ee) = uVar2;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x260))(*(longlong **)(param_1 + 0x6d8))
    ;
    *(undefined1 *)(param_1 + 0x702) = uVar1;
    *(undefined1 *)(param_1 + 0x704) = 0;
    *(undefined1 *)(param_1 + 0x705) = 0;
    *(undefined4 *)(param_1 + 0x706) = 0;
    FUN_00417c40(PTR_DAT_02004010,local_940,&DAT_01d0d0b8);
  }
  FUN_00414480(local_950);
  FUN_00417740(local_940,&DAT_01d0d0b8);
  return;
}

