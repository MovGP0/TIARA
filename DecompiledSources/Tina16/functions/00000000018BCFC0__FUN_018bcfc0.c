/* Ghidra address: 018bcfc0 */
/* Ghidra symbol: FUN_018bcfc0 */


void FUN_018bcfc0(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (**(code **)*param_1)(param_1);
  if (iVar1 != 0) {
    lVar2 = FUN_018038a0(&PTR_FUN_01801848,1);
    lVar3 = FUN_018039f0(param_1[0xf],param_2);
    FUN_00414ad0(lVar2 + 0x20,*(undefined8 *)(lVar3 + 0x20));
    FUN_01803b30(param_1[0xf],param_2,lVar2);
    FUN_018b7df0(param_1);
  }
  return;
}

