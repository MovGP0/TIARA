/* Ghidra address: 008ff4b0 */
/* Ghidra symbol: FUN_008ff4b0 */


undefined8 FUN_008ff4b0(ushort param_1)

{
  undefined8 uVar1;
  
  if ((((((param_1 == 0x20) || (param_1 == 0xd)) || (param_1 == 10)) ||
       ((0x60 < param_1 && (param_1 < 0x7b)))) ||
      (((((0x40 < param_1 && (param_1 < 0x5b)) ||
         (((0x2f < param_1 && (param_1 < 0x3a)) || (param_1 == 0x2d)))) ||
        ((((param_1 == 0x27 || (param_1 == 0x28)) || (param_1 == 0x29)) ||
         ((param_1 == 0x2b || (param_1 == 0x2c)))))) ||
       (((param_1 == 0x2e || ((param_1 == 0x2f || (param_1 == 0x3a)))) ||
        ((param_1 == 0x3d || (((param_1 == 0x3f || (param_1 == 0x3b)) || (param_1 == 0x21))))))))))
     || (((param_1 == 0x2a || (param_1 == 0x23)) ||
         (((param_1 == 0x40 || ((param_1 == 0x24 || (param_1 == 0x5f)))) || (param_1 == 0x25)))))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

