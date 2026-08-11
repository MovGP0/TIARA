/* Ghidra address: 00d26790 */
/* Ghidra symbol: FUN_00d26790 */


void FUN_00d26790(undefined8 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = 0;
  iVar2 = 0;
  do {
    uVar6 = param_3;
    if (iVar2 != 0) {
      uVar6 = param_2;
    }
    uVar1 = uVar1 ^ uVar6;
    iVar3 = 4;
    do {
      uVar6 = uVar1 >> 0x18;
      if ((uVar6 & 0x80) == 0) {
        uVar4 = uVar6 * 2;
      }
      else {
        uVar4 = uVar6 * 2 ^ 0x14d;
      }
      if ((uVar6 & 1) == 0) {
        uVar5 = uVar1 >> 0x19;
      }
      else {
        uVar5 = uVar1 >> 0x19 ^ 0xa6;
      }
      uVar5 = uVar5 ^ uVar4 & 0xff;
      uVar1 = uVar1 << 8 ^ uVar5 << 0x18 ^ (uVar4 & 0xff) << 0x10 ^ uVar5 << 8 ^ uVar6;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 2);
  return;
}

