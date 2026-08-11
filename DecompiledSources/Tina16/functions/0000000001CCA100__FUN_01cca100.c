/* Ghidra address: 01cca100 */
/* Ghidra symbol: FUN_01cca100 */


void FUN_01cca100(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_4);
  uVar2 = FUN_01d347d0(*(undefined8 *)(param_1[3] + 8),(int)param_1[0x10]);
  uVar1 = FUN_01cc5810(param_1[1],uVar2,param_3,(int)param_1[5] + -1);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  return;
}

