/* Ghidra address: 006a3380 */
/* Ghidra symbol: FUN_006a3380 */


void FUN_006a3380(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_006a35d0(param_1);
  uVar2 = FUN_006a35d0(param_1,param_3);
  (**(code **)(*param_1 + 0x50))(param_1,uVar1,uVar2);
  return;
}

