/* Ghidra address: 00e0eab0 */
/* Ghidra symbol: FUN_00e0eab0 */


void FUN_00e0eab0(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(longlong *)(param_1 + 0x28) == 0) {
LAB_00e0eada:
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x28),L"VHDLTyp");
    if (iVar1 == 0) goto LAB_00e0eada;
  }
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x28),L"VerilogTyp");
  if (iVar1 != 0) {
    iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x28),L"VerilogDTyp");
    if (iVar1 != 0) goto LAB_00e0eb0c;
  }
  uVar2 = 2;
LAB_00e0eb0c:
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x28),L"VerilogATyp");
  if (iVar1 == 0) {
    uVar2 = 4;
  }
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x28),L"VerilogAMSTyp");
  if (iVar1 == 0) {
    uVar2 = 8;
  }
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x28),L"SystemCTyp");
  if (iVar1 == 0) {
    uVar2 = 0x20;
  }
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x28),L"SystemCAMSTyp");
  if (iVar1 == 0) {
    uVar2 = 0x40;
  }
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x28),L"VHDLAMSTyp");
  if (iVar1 == 0) {
    uVar2 = 0x80;
  }
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x28),L"TFLITETyp");
  if (iVar1 == 0) {
    uVar2 = 0x200;
  }
  *param_2 = uVar2;
  return;
}

