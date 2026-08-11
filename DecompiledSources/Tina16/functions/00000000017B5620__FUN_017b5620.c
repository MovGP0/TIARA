/* Ghidra address: 017b5620 */
/* Ghidra symbol: FUN_017b5620 */


void FUN_017b5620(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong local_30 [2];
  
  local_30[0] = 0;
  if (param_2 != 0) {
    lVar1 = FUN_017ae270(&DAT_017ad878,1,param_2);
    if (*(char *)(param_1 + 0x21) == '\0') {
      uVar2 = 0x8000;
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
    FUN_017aec60(lVar1,0xfffffffe,0);
    FUN_017aeba0(lVar1,2,0);
    FUN_017aec60(lVar1,0,0xfffffffe);
    FUN_017aeba0(lVar1,0,2);
    FUN_00414b50(local_30,L"Label");
    if (local_30[0] == 0) {
      FUN_00414b50(local_30,L"<Label>");
    }
    FUN_017aef30(lVar1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0,0,0,
                 0x3ff0000000000000,0x3ff0000000000000,uVar2,*(undefined4 *)(lVar1 + 0x7c),300,0,
                 *(undefined1 *)(param_1 + 0x20),*(undefined8 *)(lVar1 + 0x88),local_30[0]);
    *(undefined8 *)(param_1 + 0x40) = DAT_021100c4;
    *(undefined8 *)(param_1 + 0x48) = DAT_021100cc;
    FUN_00410f20(lVar1);
    FUN_005fd640(*(undefined8 *)(param_2 + 0x78),4);
  }
  FUN_00414480(local_30);
  return;
}

