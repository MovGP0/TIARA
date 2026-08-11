/* Ghidra address: 0196aab0 */
/* Ghidra symbol: FUN_0196aab0 */


void FUN_0196aab0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x118))(param_1);
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x118))(param_1);
    FUN_01973030(uVar2,param_2,param_1[0x34],1);
  }
  return;
}

