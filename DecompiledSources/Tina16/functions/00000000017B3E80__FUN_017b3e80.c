/* Ghidra address: 017b3e80 */
/* Ghidra symbol: FUN_017b3e80 */


void FUN_017b3e80(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  if (param_2 != 0) {
    lVar1 = FUN_017ae270(&DAT_017ad878,1,param_2);
    if (*(char *)(param_1 + 0x21) == '\0') {
      uVar2 = 0xc0c0c0;
    }
    else {
      uVar2 = 0xff;
    }
    FUN_005fd6d0(*(undefined8 *)(param_2 + 0x78),1);
    FUN_005fd640(*(undefined8 *)(param_2 + 0x78),param_3);
    FUN_005fd4e0(*(undefined8 *)(param_2 + 0x78),uVar2);
    FUN_005fdab0(*(undefined8 *)(param_2 + 0x80),0xffffff);
    FUN_005fdcb0(*(undefined8 *)(param_2 + 0x80),1);
    *(undefined8 *)(lVar1 + 0x14) = *(undefined8 *)(param_1 + 0x18);
    *(undefined1 *)(lVar1 + 0x1c) = 0;
    *(undefined1 *)(lVar1 + 0x1d) = 0;
    FUN_017aec60(lVar1,0xfffffffb,0);
    FUN_017aeba0(lVar1,5,0);
    local_50 = FUN_00498310(5,0);
    local_48 = FUN_00498310(4,0xffffffff);
    local_40 = FUN_00498310(4,1);
    FUN_017ae9f0(lVar1,&local_50,2);
    FUN_017aec60(lVar1,0,0xfffffffb);
    FUN_017aeba0(lVar1,0,5);
    local_50 = FUN_00498310(0,5);
    local_48 = FUN_00498310(0xffffffff,4);
    local_40 = FUN_00498310(1,4);
    FUN_017ae9f0(lVar1,&local_50,2);
    FUN_00410f20(lVar1);
    FUN_005fd640(*(undefined8 *)(param_2 + 0x78),4);
  }
  return;
}

