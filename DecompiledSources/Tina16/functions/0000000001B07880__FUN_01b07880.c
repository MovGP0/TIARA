/* Ghidra address: 01b07880 */
/* Ghidra symbol: FUN_01b07880 */


void FUN_01b07880(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  
  uVar1 = FUN_01b077e0(param_1);
  *(undefined8 *)(param_1 + 0x118) = uVar1;
  uVar1 = FUN_01b077e0(param_1);
  *(undefined8 *)(param_1 + 0x128) = uVar1;
  uVar1 = FUN_01b077e0(param_1);
  *(undefined8 *)(param_1 + 0x138) = uVar1;
  uVar1 = FUN_01b077e0(param_1);
  *(undefined8 *)(param_1 + 0x140) = uVar1;
  uVar1 = FUN_01b077e0(param_1);
  *(undefined8 *)(param_1 + 0x130) = uVar1;
  if (*(char *)(param_1 + 0x5db) != '\x06') {
    if (*(byte *)(param_1 + 0x98) < 0x10) {
      bVar2 = ((int)CONCAT62((int6)((ulonglong)param_2 >> 0x10),1) <<
               (*(byte *)(param_1 + 0x98) & 0x1f) & 0x162U) != 0;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      uVar1 = FUN_01b077e0(param_1);
      *(undefined8 *)(param_1 + 0x148) = uVar1;
      if (*(char *)(param_1 + 0x98) == '\b') {
        uVar1 = FUN_01b077e0(param_1);
        *(undefined8 *)(param_1 + 0x150) = uVar1;
      }
    }
  }
  FUN_017c54f0(param_1 + 0x178,param_1 + 0x238,*(undefined4 *)(param_1 + 0x308));
  FUN_017c5300(param_1 + 0x1b8,param_1 + 0x1f8,param_1 + 0x180,param_1 + 0x188,param_1 + 400,
               param_1 + 0x198,*(undefined4 *)(param_1 + 0x31c));
  FUN_01b0f5c0(param_1);
  FUN_0040d200(param_1 + 0x278,0x38,0);
  FUN_0040d200(param_1 + 0x50,0x38,0);
  FUN_01b0f5e0(param_1);
  return;
}

