/* Ghidra address: 004120d0 */
/* Ghidra symbol: FUN_004120d0 */


void FUN_004120d0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  FUN_00411cd0(param_1);
  param_1[1] = param_1[1] - 1;
  if (param_1[1] == 0) {
    param_1[2] = 0;
    do {
      uVar1 = *param_1;
      LOCK();
      uVar2 = *param_1;
      if (uVar1 == uVar2) {
        *param_1 = uVar1 - 1;
        uVar2 = uVar1;
      }
      UNLOCK();
    } while (uVar2 != uVar1);
    if ((uVar1 & 0xfffffffe) != 0) {
      uVar3 = FUN_00412160(param_1);
      (**(code **)(PTR_PTR_020069a0 + 0x20))(uVar3,0,0);
    }
  }
  return;
}

