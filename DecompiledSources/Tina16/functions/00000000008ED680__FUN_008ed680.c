/* Ghidra address: 008ed680 */
/* Ghidra symbol: FUN_008ed680 */


undefined8 FUN_008ed680(undefined8 param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2 & 0xffff;
  if (uVar1 < 0xa4) {
    if (uVar1 == 0xa3) {
      return 0x4a;
    }
    if (uVar1 == 0x21) {
      return 0x5a;
    }
    if (uVar1 == 0x24) {
      return 0xe0;
    }
    if (uVar1 == 0x7c) {
      return 0x4f;
    }
  }
  else {
    if (uVar1 == 0xa5) {
      return 0x5b;
    }
    if (uVar1 == 0xac) {
      return 0x5f;
    }
    if (uVar1 == 0x203e) {
      return 0xa1;
    }
  }
  uVar2 = FUN_008e59a0(param_2,&DAT_01e28eec,L"IBM281");
  return uVar2;
}

