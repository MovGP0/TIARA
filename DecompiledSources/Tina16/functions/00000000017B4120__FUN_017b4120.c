/* Ghidra address: 017b4120 */
/* Ghidra symbol: FUN_017b4120 */


void FUN_017b4120(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_017ae270(&DAT_017ad878,1,param_2);
    if (*(char *)(param_1 + 0x21) == '\0') {
      uVar2 = 0x800080;
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
    FUN_017ae620(lVar1,0xfffffffe,0xfffffffe,2,2);
    FUN_017aec60(lVar1,0xfffffffe,0);
    FUN_017aeba0(lVar1,2,0);
    FUN_017aec60(lVar1,0,0xfffffffe);
    FUN_017aeba0(lVar1,0,2);
    FUN_00410f20(lVar1);
    FUN_005fd640(*(undefined8 *)(param_2 + 0x78),4);
  }
  return;
}

