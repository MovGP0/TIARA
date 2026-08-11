/* Ghidra address: 01957840 */
/* Ghidra symbol: FUN_01957840 */


void FUN_01957840(longlong param_1,undefined8 param_2,int param_3,int param_4,int param_5,
                 int param_6)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_68 [32];
  int local_48;
  int local_40;
  int local_38;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_24 = param_5 - param_3;
  local_20 = param_6 - param_4;
  uVar2 = *(uint *)(param_1 + 8);
  uVar3 = uVar2 & 0xff;
  uVar4 = uVar2 >> 8 & 0xff;
  uVar5 = uVar2 >> 0x10 & 0xff;
  uVar2 = *(uint *)(param_1 + 0xc);
  local_48 = (uVar2 & 0xff) - uVar3;
  local_40 = (uVar2 >> 8 & 0xff) - uVar4;
  local_38 = (uVar2 >> 0x10 & 0xff) - uVar5;
  bVar1 = *(byte *)(param_1 + 0x10);
  local_28 = param_3;
  local_1c = param_4;
  if (bVar1 < 4) {
    if (bVar1 == 3) {
      FUN_019572e0(auStack_68,uVar3,uVar4,uVar5);
    }
    else if (bVar1 == 0) {
      FUN_01956d80(auStack_68,uVar3,uVar4,uVar5);
    }
    else if (bVar1 == 1) {
      FUN_01956ea0(auStack_68,uVar3,uVar4,uVar5);
    }
    else if (bVar1 == 2) {
      FUN_01956fc0(auStack_68,uVar3,uVar4,uVar5);
    }
  }
  else if (bVar1 == 4) {
    FUN_01957500(auStack_68,uVar3,uVar4,uVar5);
  }
  else if (bVar1 == 5) {
    FUN_019576a0(auStack_68,uVar3,uVar4,uVar5);
  }
  return;
}

