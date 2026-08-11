/* Ghidra address: 00daefd0 */
/* Ghidra symbol: FUN_00daefd0 */


void FUN_00daefd0(longlong *param_1,undefined4 param_2,byte *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *pbVar3;
  byte local_128 [264];
  
  lVar2 = (ulonglong)*param_3 + 1;
  pbVar3 = local_128;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_3;
    param_3 = param_3 + 1;
    pbVar3 = pbVar3 + 1;
  }
  uVar1 = FUN_00daeec0(&DAT_00dae4f0,1,param_2,local_128);
  (**(code **)(*param_1 + 0x50))(param_1,uVar1);
  return;
}

