/* Ghidra address: 01a979b0 */
/* Ghidra symbol: FUN_01a979b0 */


longlong FUN_01a979b0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
                     undefined8 *param_5,undefined1 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  lVar2 = FUN_00410920(param_1,local_res10);
  if (lVar2 != -1) {
    FUN_00b94d80(lVar2,0);
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 8) = 0;
    *(undefined1 *)(lVar2 + 0x12d) = 0;
    *(undefined1 *)(lVar2 + 0x12e) = 1;
    *(undefined1 *)(lVar2 + 0x12f) = 0;
    *(undefined8 *)(lVar2 + 0x180) = 0;
    *(undefined4 *)(lVar2 + 0x188) = 0;
    *(undefined4 *)(lVar2 + 0x18c) = 0;
    *(undefined1 *)(lVar2 + 0x28) = 0;
    *(undefined1 *)(lVar2 + 0x84) = 0;
    *(undefined1 *)(lVar2 + 0x129) = 0;
    *(undefined1 *)(lVar2 + 0x12a) = 0;
    *(undefined1 *)(lVar2 + 299) = param_6;
    *(undefined1 *)(lVar2 + 300) = 0;
    *(undefined1 *)(lVar2 + 0x128) = 0;
    *(undefined4 *)(lVar2 + 0x130) = 20000;
    *(undefined4 *)(lVar2 + 0x134) = 20000;
    *(undefined4 *)(lVar2 + 0x138) = 0xffffb1e0;
    *(undefined4 *)(lVar2 + 0x13c) = 0xffffb1e0;
    *(undefined1 *)(lVar2 + 0x86) = 0;
    *(undefined4 *)(lVar2 + 0x88) = 0;
    *(undefined1 *)(lVar2 + 0x85) = 0;
    *(undefined1 *)(lVar2 + 0x170) = 0;
    *(undefined1 *)(lVar2 + 0x171) = 0;
    uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
    *(undefined8 *)(lVar2 + 0x1a8) = uVar3;
    FUN_00414ad0(lVar2 + 0x110,*(undefined8 *)PTR_DAT_02001f18);
    *(undefined4 *)(lVar2 + 0x78) = 0x60;
    iVar1 = thunk_FUN_03f3ed25(8,0x60,0x48);
    *(undefined8 *)(lVar2 + 0x70) = 0x3ff0000000000000;
    *(undefined8 *)(lVar2 + 0x140) = 0;
    if (param_3 == 0) {
      param_1 = FUN_004109a0(lVar2,local_res10[0]);
    }
    else {
      *(longlong *)(lVar2 + 0x148) = param_3;
      *(int *)(lVar2 + 0xa0) = -iVar1;
      *(undefined4 *)(lVar2 + 0xa4) = 0;
      *(undefined4 *)(lVar2 + 0xa8) = 0;
      *(undefined4 *)(lVar2 + 0xac) = 0;
      *(undefined4 *)(lVar2 + 0xb0) = 300;
      *(undefined1 *)(lVar2 + 0xb4) = 0;
      *(undefined1 *)(lVar2 + 0xb5) = 0;
      *(undefined1 *)(lVar2 + 0xb6) = 0;
      *(undefined1 *)(lVar2 + 0xb7) = 1;
      *(undefined1 *)(lVar2 + 0xb8) = 0;
      *(undefined1 *)(lVar2 + 0xb9) = 0;
      *(undefined1 *)(lVar2 + 0xba) = 0;
      *(undefined1 *)(lVar2 + 0xbb) = 0;
      FUN_00414ad0(lVar2 + 0x108,L"Arial");
      FUN_00442620(lVar2 + 0xbc,*(undefined8 *)(lVar2 + 0x108));
      *(undefined4 *)(lVar2 + 0xfc) = 8;
      *(undefined4 *)(lVar2 + 0x100) = 0;
      uVar3 = thunk_FUN_041a15ee(lVar2 + 0xa0);
      uVar3 = thunk_FUN_041a19a1(*(undefined8 *)(lVar2 + 0x148),uVar3);
      *(undefined8 *)(lVar2 + 0x98) = uVar3;
      uVar3 = thunk_FUN_041d21bb(0,1,0x808080);
      uVar3 = thunk_FUN_041a19a1(*(undefined8 *)(lVar2 + 0x148),uVar3);
      *(undefined8 *)(lVar2 + 0x118) = uVar3;
      uVar3 = thunk_FUN_0412d81c(0);
      uVar3 = thunk_FUN_041a19a1(*(undefined8 *)(lVar2 + 0x148),uVar3);
      *(undefined8 *)(lVar2 + 0x120) = uVar3;
      *(undefined8 *)(lVar2 + 0x2c) = *param_4;
      *(undefined8 *)(lVar2 + 0x34) = param_4[1];
      *(undefined8 *)(lVar2 + 0x3c) = *param_5;
      *(undefined8 *)(lVar2 + 0x44) = param_5[1];
      FUN_01a98230(lVar2);
      param_1 = lVar2;
    }
  }
  return param_1;
}

