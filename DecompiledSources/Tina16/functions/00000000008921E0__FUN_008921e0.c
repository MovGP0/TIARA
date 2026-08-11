/* Ghidra address: 008921e0 */
/* Ghidra symbol: FUN_008921e0 */


void FUN_008921e0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (*param_3 != 0) {
    uVar2 = *(ulonglong *)(*param_3 + -8);
  }
  uVar1 = (**(code **)(*param_1 + 0x150))(param_1,param_2,*param_3,uVar2 & 0xffffffff,0);
  FUN_0089c9c0(param_1,uVar1);
  return;
}

