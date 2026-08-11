/* Ghidra address: 00448a10 */
/* Ghidra symbol: FUN_00448a10 */


undefined8
FUN_00448a10(ushort param_1,ushort param_2,ushort param_3,ushort param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  int local_10 [2];
  
  uVar1 = 0;
  if ((((param_1 < 0x18) && (param_2 < 0x3c)) && (param_3 < 0x3c)) && (uVar1 = 0, param_4 < 1000)) {
    local_10[0] = (uint)param_1 * 3600000 + (uint)param_2 * 60000 + (uint)param_3 * 1000 +
                  (uint)param_4;
    local_10[1] = 0xa955a;
    uVar1 = FUN_00448910(local_10);
    *param_5 = uVar1;
    uVar1 = 1;
  }
  return uVar1;
}

