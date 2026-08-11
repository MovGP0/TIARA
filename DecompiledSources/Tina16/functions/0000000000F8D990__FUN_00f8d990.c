/* Ghidra address: 00f8d990 */
/* Ghidra symbol: FUN_00f8d990 */


void FUN_00f8d990(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 local_19 [9];
  
  _if_compile_design(*(undefined8 *)(param_1 + 0x60),local_19);
  uVar2 = FUN_00f8b5a0(param_1,0);
  *(undefined4 *)(param_1 + 0x348c) = uVar2;
  cVar1 = FUN_00f8bd60(param_1);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x3450) = 1;
    if (*(char *)(param_1 + 0x3511) == '\0') {
      uVar3 = FUN_0065b870(*(undefined8 *)PTR_DAT_020019c8);
      thunk_FUN_041b2403(uVar3,0x123d,0,0);
    }
    uVar3 = _get_mcu_status(*(undefined8 *)(param_1 + 0x60));
    *(undefined8 *)(param_1 + 0x3468) = uVar3;
    FUN_00f8d6e0(param_1);
    FUN_00f8d8a0(param_1);
  }
  return;
}

