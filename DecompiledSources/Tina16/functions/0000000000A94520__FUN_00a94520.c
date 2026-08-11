/* Ghidra address: 00a94520 */
/* Ghidra symbol: FUN_00a94520 */


void FUN_00a94520(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x40));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x38));
  FUN_00410f20(*(undefined8 *)(param_1 + 8));
  if (((*(longlong *)(param_1 + 0x10) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18), lVar1 != 0)) &&
     (*(longlong *)(lVar1 + 0x2c0) != 0)) {
    plVar2 = *(longlong **)(lVar1 + 0x2c0);
    iVar3 = (**(code **)(*plVar2 + 0xc0))(plVar2,*(undefined8 *)(param_1 + 0x60));
    if (-1 < iVar3) {
      (**(code **)(*plVar2 + 0x98))(plVar2,iVar3);
    }
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x60));
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

