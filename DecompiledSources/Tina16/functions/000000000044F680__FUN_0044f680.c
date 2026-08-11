/* Ghidra address: 0044f680 */
/* Ghidra symbol: FUN_0044f680 */


undefined8 FUN_0044f680(ushort *param_1)

{
  undefined8 uVar1;
  
  if ((((*param_1 < 0xd800) || (0xdbff < *param_1)) || (param_1[1] < 0xdc00)) ||
     (0xdfff < param_1[1])) {
    uVar1 = 2;
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}

