/* Ghidra address: 01079320 */
/* Ghidra symbol: FUN_01079320 */


void FUN_01079320(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(longlong *)(param_1 + 0xb90) = param_2;
  lVar1 = FUN_004113f0(*(undefined8 *)(param_2 + 0x1a8),&PTR_FUN_01763148);
  *(longlong *)(param_1 + 0xad0) = lVar1;
  *(undefined4 *)(param_1 + 0x4c74) = *(undefined4 *)(lVar1 + 0x104);
  uVar2 = FUN_010afd00(&DAT_010a9ec8,1);
  *(undefined8 *)(param_1 + 0xac8) = uVar2;
  FUN_010b0ed0(uVar2,*(undefined8 *)(*(longlong *)(param_1 + 0xad0) + 0x110));
  return;
}

