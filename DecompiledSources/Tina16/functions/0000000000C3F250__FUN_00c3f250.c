/* Ghidra address: 00c3f250 */
/* Ghidra symbol: FUN_00c3f250 */


void FUN_00c3f250(longlong param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4,
                 undefined1 param_5,undefined1 param_6)

{
  short sVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  short sVar4;
  
  sVar1 = FUN_00c3f0d0(param_1);
  if (sVar1 != -1) {
    uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),(longlong)sVar1);
    sVar1 = *(short *)(*(longlong *)(param_1 + 0x38) + 0x10);
    sVar4 = 0;
    if (-1 < (short)(sVar1 + -1)) {
      do {
        uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),(longlong)sVar4);
        FUN_00c3ce20(uVar3,uVar2,param_3,param_4,param_5,param_6);
        sVar4 = sVar4 + 1;
        sVar1 = sVar1 + -1;
      } while (sVar1 != 0);
    }
  }
  return;
}

