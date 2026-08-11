/* Ghidra address: 01809ab0 */
/* Ghidra symbol: FUN_01809ab0 */


void FUN_01809ab0(longlong param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5,
                 undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_0040c770((double)param_3 * ((double)*(int *)(param_1 + 0x5c) / 96.0));
  uVar2 = FUN_0040c770((double)param_4 * ((double)*(int *)(param_1 + 0x5c) / 96.0));
  FUN_0180de80(param_2,uVar1,uVar2,param_5,param_6);
  return;
}

