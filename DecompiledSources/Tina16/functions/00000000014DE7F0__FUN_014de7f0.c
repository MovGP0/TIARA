/* Ghidra address: 014de7f0 */
/* Ghidra symbol: FUN_014de7f0 */


void FUN_014de7f0(longlong *param_1,undefined8 param_2)

{
  short sVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined **unaff_RSI;
  undefined **ppuVar4;
  longlong local_30;
  
  FUN_014de260(param_1,param_2);
  (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_30);
  lVar2 = *(longlong *)(local_30 + 0x26);
  uVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
  uVar3 = uVar3 & 0xffff;
  if (uVar3 < 0x59) {
    if (uVar3 == 0x17) {
      ppuVar4 = &PTR_DAT_01f550db;
    }
    else {
      ppuVar4 = unaff_RSI;
      if (uVar3 - 0x57 < 2) {
        ppuVar4 = &PTR_DAT_01f5564d;
      }
    }
  }
  else if (uVar3 - 0x59 < 4) {
    sVar1 = *(short *)(lVar2 + 0x23);
    if (sVar1 == 0x150) {
      ppuVar4 = (undefined **)&DAT_01f58c06;
    }
    else if (sVar1 == 0x188) {
      ppuVar4 = (undefined **)&DAT_01f58ed0;
    }
    else if (sVar1 == 0x438) {
      ppuVar4 = (undefined **)&DAT_01f55d02;
    }
    else if (sVar1 == 0x538) {
      ppuVar4 = (undefined **)&DAT_01f565f9;
    }
    else if (sVar1 == 0xcb0) {
      ppuVar4 = (undefined **)&DAT_01f57110;
    }
    else {
      ppuVar4 = (undefined **)&DAT_01f59211;
    }
  }
  else {
    ppuVar4 = (undefined **)PTR_DAT_01f599c8;
    if ((1 < uVar3 - 0x5d) && (ppuVar4 = unaff_RSI, uVar3 - 0x5d == 0x54)) {
      ppuVar4 = (undefined **)&DAT_01f59563;
    }
  }
  FUN_0040d200(*(undefined8 *)(lVar2 + 0x19),*(undefined2 *)(lVar2 + 0x21),1);
  FUN_014dd530(param_1,*(undefined2 *)(lVar2 + 0x21),*(undefined8 *)(lVar2 + 9),
               *(undefined8 *)(lVar2 + 1),*(undefined8 *)(lVar2 + 0x19),param_2,ppuVar4);
  return;
}

