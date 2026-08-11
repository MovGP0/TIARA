/* Ghidra address: 00f815d0 */
/* Ghidra symbol: FUN_00f815d0 */


void FUN_00f815d0(longlong param_1,int param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)(param_1 + 0x30) + 0x10) <= param_2) {
    uVar1 = FUN_0044d490(&PTR_FUN_004334c0,1,L"TResultCurve.get_point");
    FUN_004134c0(uVar1);
  }
  lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),param_2);
  *param_3 = *(undefined8 *)(lVar2 + 8);
  lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),param_2);
  *param_4 = *(undefined4 *)(lVar2 + 0x10);
  return;
}

