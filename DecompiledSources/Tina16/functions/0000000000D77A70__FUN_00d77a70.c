/* Ghidra address: 00d77a70 */
/* Ghidra symbol: FUN_00d77a70 */


void FUN_00d77a70(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  uint local_2c [3];
  
  (**(code **)(*param_2 + 0x18))(param_2,local_2c,4);
  if ((local_2c[0] & 0xf0000) == 0xf0000) {
    uVar1 = local_2c[0] & 0xfff0ffff;
    local_2c[0] = uVar1;
    if (-1 < (int)(uVar1 - 1)) {
      do {
        FUN_00d75780(param_2,param_1);
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  else {
    uVar1 = local_2c[0];
    if (-1 < (int)(local_2c[0] - 1)) {
      do {
        FUN_00d754a0(param_2,param_1);
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  return;
}

