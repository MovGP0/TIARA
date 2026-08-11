/* Ghidra address: 008922a0 */
/* Ghidra symbol: FUN_008922a0 */


void FUN_008922a0(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (*param_3 != 0) {
    uVar2 = *(ulonglong *)(*param_3 + -8);
  }
  uVar1 = (**(code **)(*param_1 + 0x198))
                    (param_1,param_2,*param_3,uVar2 & 0xffffffff,0,param_4,param_5,param_6);
  FUN_0089c9c0(param_1,uVar1);
  return;
}

