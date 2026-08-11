/* Ghidra address: 00e0e000 */
/* Ghidra symbol: FUN_00e0e000 */


undefined4 FUN_00e0e000(longlong param_1,char param_2)

{
  int iVar1;
  undefined4 unaff_EDI;
  
  if ((*(longlong *)(param_1 + 0x28) == 0) ||
     (iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x28),L"VHDLTyp"), iVar1 == 0)) {
    return 1;
  }
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x28),L"VerilogDTyp");
  if ((iVar1 == 0) ||
     ((iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x28),L"VerilogTyp"), iVar1 == 0 ||
      (iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x28),&DAT_00e0e1cc), iVar1 == 0)))) {
    return 2;
  }
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x28),L"VerilogATyp");
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x28),L"VerilogAMSTyp");
  if (iVar1 == 0) {
    return 4;
  }
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x28),L"SystemCTyp");
  if (iVar1 == 0) {
    if (param_2 == '\0') {
      return 1;
    }
    return 5;
  }
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x28),L"TFLITETyp");
  if (iVar1 == 0) {
    if (param_2 == '\0') {
      return 1;
    }
    return 8;
  }
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x28),L"SystemCAMSTyp");
  if (iVar1 == 0) {
    return 6;
  }
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x28),L"VHDLAMSTyp");
  if (iVar1 == 0) {
    return 7;
  }
  FUN_0072d440(L"Invalid file mode",1,4,0);
  return unaff_EDI;
}

