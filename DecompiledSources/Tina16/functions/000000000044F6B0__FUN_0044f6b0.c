/* Ghidra address: 0044f6b0 */
/* Ghidra symbol: FUN_0044f6b0 */


ushort * FUN_0044f6b0(ushort *param_1)

{
  ushort uVar1;
  
  uVar1 = *param_1;
  if ((((uVar1 < 0xd800) || (0xdbff < uVar1)) || (param_1[1] < 0xdc00)) || (0xdfff < param_1[1])) {
    if (uVar1 != 0) {
      param_1 = param_1 + 1;
    }
  }
  else {
    param_1 = param_1 + 2;
  }
  return param_1;
}

