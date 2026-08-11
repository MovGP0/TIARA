/* Ghidra address: 00b84b00 */
/* Ghidra symbol: FUN_00b84b00 */


void FUN_00b84b00(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 4;
  do {
    uVar3 = param_2 >> 0x18;
    if ((uVar3 & 0x80) == 0) {
      uVar1 = uVar3 * 2;
    }
    else {
      uVar1 = uVar3 * 2 ^ 0x14d;
    }
    if ((uVar3 & 1) == 0) {
      uVar2 = param_2 >> 0x19;
    }
    else {
      uVar2 = param_2 >> 0x19 ^ 0xa6;
    }
    uVar2 = uVar2 ^ uVar1 & 0xff;
    param_2 = param_2 << 8 ^ uVar2 << 0x18 ^ (uVar1 & 0xff) << 0x10 ^ uVar2 << 8 ^ uVar3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  param_2 = param_2 ^ param_1;
  iVar4 = 4;
  do {
    uVar3 = param_2 >> 0x18;
    if ((uVar3 & 0x80) == 0) {
      uVar1 = uVar3 * 2;
    }
    else {
      uVar1 = uVar3 * 2 ^ 0x14d;
    }
    if ((uVar3 & 1) == 0) {
      uVar2 = param_2 >> 0x19;
    }
    else {
      uVar2 = param_2 >> 0x19 ^ 0xa6;
    }
    uVar2 = uVar2 ^ uVar1 & 0xff;
    param_2 = param_2 << 8 ^ uVar2 << 0x18 ^ (uVar1 & 0xff) << 0x10 ^ uVar2 << 8 ^ uVar3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

