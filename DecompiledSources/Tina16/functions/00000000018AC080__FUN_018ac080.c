/* Ghidra address: 018ac080 */
/* Ghidra symbol: FUN_018ac080 */


void FUN_018ac080(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_006e2530(*(undefined8 *)(param_1[0xa0] + 0x4e8));
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(lVar2 + 0x28);
    FUN_018ab560(param_1,uVar1,*(undefined4 *)(lVar2 + 0x34));
    FUN_018a9880(param_1,uVar1);
    (**(code **)(*param_1 + 600))(param_1);
  }
  return;
}

