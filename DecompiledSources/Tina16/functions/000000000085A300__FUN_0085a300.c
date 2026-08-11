/* Ghidra address: 0085a300 */
/* Ghidra symbol: FUN_0085a300 */


undefined * FUN_0085a300(byte param_1)

{
  if (param_1 < 4) {
    if (param_1 == 3) {
      return PTR_PTR_02002b18;
    }
    if (param_1 == 0) {
      return PTR_PTR_02003880;
    }
    if (param_1 == 1) {
      return PTR_PTR_020057e8;
    }
    if (param_1 == 2) {
      return PTR_PTR_02002dc8;
    }
  }
  else {
    if (param_1 == 4) {
      return PTR_PTR_020036f0;
    }
    if (param_1 == 5) {
      return PTR_PTR_02003378;
    }
  }
  return (undefined *)0x0;
}

