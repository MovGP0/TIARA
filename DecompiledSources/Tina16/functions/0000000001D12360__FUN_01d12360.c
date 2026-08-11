/* Ghidra address: 01d12360 */
/* Ghidra symbol: FUN_01d12360 */


void FUN_01d12360(undefined8 param_1,longlong param_2,int param_3,undefined8 param_4,int *param_5)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  iVar2 = FUN_01d11780(param_2);
  if ((iVar2 <= param_3) || (*(short *)(local_res10[0] + (longlong)param_3 * 2) != 0x28)) {
    FUN_01d120b0(param_1);
  }
  iVar3 = param_3 + 1;
  iVar4 = 1;
  iVar2 = FUN_01d11780(local_res10[0]);
  if (param_3 < iVar2 + -1) {
    do {
      param_3 = param_3 + 1;
      sVar1 = *(short *)(local_res10[0] + (longlong)param_3 * 2);
      if (sVar1 == 0x28) {
        iVar4 = iVar4 + 1;
      }
      else if (sVar1 == 0x29) {
        iVar4 = iVar4 + -1;
      }
      iVar2 = FUN_01d11780(local_res10[0]);
    } while ((param_3 < iVar2 + -1) &&
            ((iVar4 != 0 || (*(short *)(local_res10[0] + (longlong)param_3 * 2) != 0x29))));
  }
  if (*(short *)(local_res10[0] + (longlong)param_3 * 2) != 0x29) {
    FUN_01d120b0(param_1);
  }
  param_3 = param_3 - iVar3;
  FUN_01d11790(param_4,local_res10,iVar3,param_3);
  *param_5 = param_3;
  return;
}

