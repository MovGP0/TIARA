/* Ghidra address: 01d12460 */
/* Ghidra symbol: FUN_01d12460 */


void FUN_01d12460(undefined8 param_1,longlong param_2,int param_3,undefined8 param_4,
                 undefined8 param_5,int *param_6)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  iVar2 = FUN_01d11780(param_2);
  if ((iVar2 <= param_3) || (*(short *)(local_res10[0] + (longlong)param_3 * 2) != 0x28)) {
    FUN_01d120b0(param_1);
  }
  iVar5 = 1;
  iVar3 = FUN_01d11780(local_res10[0]);
  iVar2 = param_3;
  if (param_3 < iVar3 + -1) {
    do {
      iVar2 = iVar2 + 1;
      sVar1 = *(short *)(local_res10[0] + (longlong)iVar2 * 2);
      if (sVar1 == 0x28) {
        iVar5 = iVar5 + 1;
      }
      else if (sVar1 == 0x29) {
        iVar5 = iVar5 + -1;
      }
      iVar3 = FUN_01d11780(local_res10[0]);
    } while ((iVar2 < iVar3 + -1) &&
            ((iVar5 != 1 || (*(short *)(local_res10[0] + (longlong)iVar2 * 2) != 0x2c))));
  }
  if (*(short *)(local_res10[0] + (longlong)iVar2 * 2) != 0x2c) {
    FUN_01d120b0(param_1);
  }
  FUN_01d11790(param_4,local_res10,param_3 + 1,iVar2 - (param_3 + 1));
  iVar4 = iVar2 + 1;
  iVar3 = FUN_01d11780(local_res10[0]);
  if (iVar2 < iVar3 + -1) {
    do {
      iVar2 = iVar2 + 1;
      sVar1 = *(short *)(local_res10[0] + (longlong)iVar2 * 2);
      if (sVar1 == 0x28) {
        iVar5 = iVar5 + 1;
      }
      else if (sVar1 == 0x29) {
        iVar5 = iVar5 + -1;
      }
      iVar3 = FUN_01d11780(local_res10[0]);
    } while ((iVar2 < iVar3 + -1) &&
            ((iVar5 != 0 || (*(short *)(local_res10[0] + (longlong)iVar2 * 2) != 0x29))));
  }
  if (*(short *)(local_res10[0] + (longlong)iVar2 * 2) != 0x29) {
    FUN_01d120b0(param_1);
  }
  FUN_01d11790(param_5,local_res10,iVar4,iVar2 - iVar4);
  *param_6 = (iVar2 - param_3) + 1;
  return;
}

