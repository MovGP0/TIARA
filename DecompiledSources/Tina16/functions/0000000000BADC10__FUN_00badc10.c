/* Ghidra address: 00badc10 */
/* Ghidra symbol: FUN_00badc10 */


void FUN_00badc10(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  
  FUN_00411a80(param_1,param_2);
  iVar1 = FUN_00bade20(param_1);
  if (0 < iVar1) {
    FUN_00badc90(param_1,0);
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    lVar2 = FUN_004113f0(*(longlong *)(param_1 + 0x18),&PTR_FUN_00bada90);
    *(undefined8 *)(lVar2 + 0x50) = 0;
  }
  FUN_00badf90(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x18));
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

