/* Ghidra address: 005a1ad0 */
/* Ghidra symbol: FUN_005a1ad0 */


uint FUN_005a1ad0(undefined8 param_1,longlong param_2,undefined8 param_3,int param_4,int param_5,
                 int param_6)

{
  uint uVar1;
  
  if ((param_5 <= param_6) && (param_5 <= param_6)) {
    do {
      uVar1 = (uint)(param_6 + param_5) >> 1;
      if (*(int *)(param_2 + (longlong)(int)uVar1 * 0x20) < param_4) {
        param_5 = uVar1 + 1;
      }
      else {
        if (*(int *)(param_2 + (longlong)(int)uVar1 * 0x20) <= param_4) {
          return uVar1;
        }
        param_6 = uVar1 - 1;
      }
    } while (param_5 <= param_6);
  }
  return 0xffffffff;
}

