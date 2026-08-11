/* Ghidra address: 00ac04e0 */
/* Ghidra symbol: FUN_00ac04e0 */


undefined4
FUN_00ac04e0(longlong param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5,
            undefined8 param_6,int param_7,undefined8 param_8,undefined8 param_9,undefined8 param_10
            ,int *param_11,undefined4 *param_12)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x74) = param_4;
  *(undefined4 *)(param_1 + 0x68) = *param_12;
  *(int *)(param_1 + 0x7c) = param_4;
  *(int *)(param_1 + 0x78) = param_4;
  iVar1 = FUN_00a73eb0(param_10,param_4);
  iVar1 = iVar1 - param_3;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0xb8) = iVar1;
  iVar2 = FUN_00a73fa0(param_10,param_4);
  iVar1 = iVar2 - param_3;
  if (param_7 < iVar2 - param_3) {
    iVar1 = param_7;
  }
  iVar1 = iVar1 - *(int *)(param_1 + 0xb8);
  *(int *)(param_1 + 0xb4) = iVar1;
  *param_11 = iVar1;
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0xa8);
  *(int *)(param_1 + 0x80) = param_4 + *(int *)(param_1 + 0x88);
  *(int *)(param_1 + 0x84) = param_4 + *(int *)(param_1 + 0x8c);
  return *(undefined4 *)(param_1 + 0x88);
}

