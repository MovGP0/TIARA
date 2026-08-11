/* Ghidra address: 014db9b0 */
/* Ghidra symbol: FUN_014db9b0 */


void FUN_014db9b0(longlong *param_1,byte *param_2,undefined8 param_3,int *param_4)

{
  char cVar1;
  longlong lVar2;
  byte *pbVar3;
  longlong local_138;
  undefined8 *local_130;
  byte local_128 [256];
  
  lVar2 = (ulonglong)*param_2 + 1;
  pbVar3 = local_128;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_2;
    param_2 = param_2 + 1;
    pbVar3 = pbVar3 + 1;
  }
  cVar1 = FUN_014db910(local_128,param_3,&local_138);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x2d0))(param_1,*param_4,&local_130);
    *local_130 = *(undefined8 *)(local_138 + 0x28);
  }
  *param_4 = *param_4 + 1;
  return;
}

