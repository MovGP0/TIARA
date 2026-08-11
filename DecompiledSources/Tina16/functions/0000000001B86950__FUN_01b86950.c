/* Ghidra address: 01b86950 */
/* Ghidra symbol: FUN_01b86950 */


void FUN_01b86950(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_00416db0(*(undefined8 *)(param_2 + 0x10),L"ind2");
  if (iVar1 == 0) {
    FUN_00414ad0(param_2 + 0x10,&DAT_01b869f0);
  }
  iVar1 = FUN_00416db0(*(undefined8 *)(param_2 + 0x10),&DAT_01b86a04);
  if (iVar1 == 0) {
    FUN_00414ad0(param_2 + 0x10,&DAT_01b86a18);
  }
  iVar1 = FUN_00416db0(*(undefined8 *)(param_2 + 0x10),&DAT_01b86a28);
  if (iVar1 == 0) {
    FUN_00414ad0(param_2 + 0x10,&DAT_01b86a3c);
  }
  return;
}

