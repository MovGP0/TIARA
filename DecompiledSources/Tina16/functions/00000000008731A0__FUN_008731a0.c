/* Ghidra address: 008731a0 */
/* Ghidra symbol: FUN_008731a0 */


undefined8
FUN_008731a0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5,undefined4 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00872920(param_2,param_3,param_4);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00873270(param_1,lVar1,param_4,param_5,param_6);
  }
  return uVar2;
}

