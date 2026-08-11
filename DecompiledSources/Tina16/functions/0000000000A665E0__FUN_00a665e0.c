/* Ghidra address: 00a665e0 */
/* Ghidra symbol: FUN_00a665e0 */


void FUN_00a665e0(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulonglong uVar1;
  undefined1 auStack_28 [32];
  
  uVar1 = param_2 & 0xff;
  if (uVar1 < 0x4d) {
    if (uVar1 == 0x4c) {
      FUN_00a64bb0(auStack_28,param_5);
      return;
    }
    if (2 < uVar1 - 0x43) {
      if (uVar1 - 0x46 < 5) {
        FUN_00a65600(auStack_28,param_3,param_5);
        return;
      }
      if (uVar1 - 0x46 != 5) {
        return;
      }
      FUN_00a65950(auStack_28,param_4);
      return;
    }
  }
  else {
    if (uVar1 == 0x4d) {
      FUN_00a65e70(auStack_28,param_5);
      return;
    }
    if (1 < uVar1 - 0x4e) {
      if (uVar1 - 0x4e != 2) {
        return;
      }
      FUN_00a649d0(auStack_28,param_5);
      return;
    }
  }
  FUN_00a66260(auStack_28,param_2,param_5);
  return;
}

