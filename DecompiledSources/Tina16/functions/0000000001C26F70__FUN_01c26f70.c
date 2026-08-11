/* Ghidra address: 01c26f70 */
/* Ghidra symbol: FUN_01c26f70 */


void FUN_01c26f70(longlong param_1)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  undefined1 local_19 [9];
  
  if (*(longlong *)(param_1 + 0x588) == 0) {
    *(undefined8 *)(param_1 + 0x568) = 0;
    *(undefined8 *)(param_1 + 0x560) = 0x3ff0000000000000;
  }
  else {
    local_19[0] = 0;
    sVar2 = FUN_00c3f420(*(undefined8 *)(param_1 + 0x588),1,0,local_19);
    if (sVar2 != -1) {
      lVar3 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x588) + 0x38),(int)sVar2);
      sVar2 = *(short *)(lVar3 + 0x12);
      sVar1 = *(short *)(lVar3 + 0xe);
      *(int *)(param_1 + 0x568) =
           ((*(int *)(param_1 + 0x98) -
            ((int)*(short *)(lVar3 + 0x10) - (int)*(short *)(lVar3 + 0xc))) +
           *(int *)(param_1 + 0x52c)) / 2;
      *(int *)(param_1 + 0x56c) =
           ((*(int *)(param_1 + 0x9c) - ((int)sVar2 - (int)sVar1)) + *(int *)(param_1 + 0x530)) / 2;
      *(undefined8 *)(param_1 + 0x560) = 0x3ff0000000000000;
    }
  }
  return;
}

