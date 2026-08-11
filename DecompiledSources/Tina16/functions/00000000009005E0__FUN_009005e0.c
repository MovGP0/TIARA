/* Ghidra address: 009005e0 */
/* Ghidra symbol: FUN_009005e0 */


undefined8 FUN_009005e0(short *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = FUN_008ff6c0();
  uVar2 = 0;
  if (param_1 != (short *)0x0) {
    uVar2 = *(uint *)(param_1 + -2) >> 1;
  }
  if ((((uVar2 == 3) && ((*param_1 == 0x58 || (*param_1 == 0x78)))) &&
      ((param_1[1] == 0x4d || (param_1[1] == 0x6d)))) &&
     ((param_1[2] == 0x4c || (param_1[2] == 0x6c)))) {
    uVar1 = 0;
  }
  return uVar1;
}

