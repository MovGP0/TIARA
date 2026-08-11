/* Ghidra address: 01a97050 */
/* Ghidra symbol: FUN_01a97050 */


longlong FUN_01a97050(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_res10 [3];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_res10[0] = param_2;
  lVar3 = FUN_00410920(param_1,local_res10);
  if (lVar3 != -1) {
    FUN_00b94d80(lVar3,0);
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 8) = 0;
    *(undefined1 *)(lVar3 + 0x12d) = 0;
    *(undefined1 *)(lVar3 + 0x12e) = 1;
    *(undefined1 *)(lVar3 + 0x12f) = 0;
    *(undefined8 *)(lVar3 + 0x180) = 0;
    *(undefined4 *)(lVar3 + 0x188) = 0;
    *(undefined4 *)(lVar3 + 0x18c) = 0;
    *(undefined1 *)(lVar3 + 0x28) = 0;
    *(undefined1 *)(lVar3 + 0x84) = 0;
    *(undefined1 *)(lVar3 + 0x129) = 0;
    *(undefined1 *)(lVar3 + 0x12a) = 0;
    *(undefined1 *)(lVar3 + 299) = 0;
    *(undefined1 *)(lVar3 + 300) = 0;
    *(undefined1 *)(lVar3 + 0x128) = 0;
    *(undefined4 *)(lVar3 + 0x130) = 20000;
    *(undefined4 *)(lVar3 + 0x134) = 20000;
    *(undefined4 *)(lVar3 + 0x138) = 0xffffb1e0;
    *(undefined4 *)(lVar3 + 0x13c) = 0xffffb1e0;
    *(undefined1 *)(lVar3 + 0x86) = 0;
    *(undefined4 *)(lVar3 + 0x88) = 0;
    *(undefined1 *)(lVar3 + 0x85) = 0;
    *(undefined1 *)(lVar3 + 0x170) = 0;
    *(undefined1 *)(lVar3 + 0x171) = 0;
    uVar4 = FUN_004b6930(&PTR_FUN_00478280,1);
    *(undefined8 *)(lVar3 + 0x1a8) = uVar4;
    FUN_00414ad0(lVar3 + 0x110,*(undefined8 *)PTR_DAT_02001f18);
    uVar4 = thunk_FUN_040ef593(0);
    *(undefined4 *)(lVar3 + 0x78) = 0x60;
    iVar1 = thunk_FUN_03f3ed25(8,0x60,0x48);
    thunk_FUN_041a9b5c(0,uVar4);
    *(double *)(lVar3 + 0x70) = (double)*(int *)(lVar3 + 0x78) / 96.0;
    *(undefined8 *)(lVar3 + 0x140) = param_3;
    iVar2 = thunk_FUN_041de4d6(*(undefined8 *)(lVar3 + 0x140));
    if (iVar2 == 0) {
      local_38 = 0;
      local_34 = 0;
      local_30 = 1;
      local_2c = 1;
      *(undefined8 *)(lVar3 + 0x148) = 0;
    }
    else {
      thunk_FUN_03abe598(*(undefined8 *)(lVar3 + 0x140),&local_38);
      uVar4 = thunk_FUN_040ef593(*(undefined8 *)(lVar3 + 0x140));
      *(undefined8 *)(lVar3 + 0x148) = uVar4;
      thunk_FUN_041a9b5c(*(undefined8 *)(lVar3 + 0x140),*(undefined8 *)(lVar3 + 0x148));
      *(int *)(lVar3 + 0xa0) = -iVar1;
      *(undefined4 *)(lVar3 + 0xa4) = 0;
      *(undefined4 *)(lVar3 + 0xa8) = 0;
      *(undefined4 *)(lVar3 + 0xac) = 0;
      *(undefined4 *)(lVar3 + 0xb0) = 300;
      *(undefined1 *)(lVar3 + 0xb4) = 0;
      *(undefined1 *)(lVar3 + 0xb5) = 0;
      *(undefined1 *)(lVar3 + 0xb6) = 0;
      *(undefined1 *)(lVar3 + 0xb7) = 1;
      *(undefined1 *)(lVar3 + 0xb8) = 0;
      *(undefined1 *)(lVar3 + 0xb9) = 0;
      *(undefined1 *)(lVar3 + 0xba) = 0;
      *(undefined1 *)(lVar3 + 0xbb) = 0;
      FUN_00414ad0(lVar3 + 0x108,L"Arial");
      FUN_00442620(lVar3 + 0xbc,*(undefined8 *)(lVar3 + 0x108));
      *(undefined4 *)(lVar3 + 0xfc) = 8;
      *(undefined4 *)(lVar3 + 0x100) = 0;
      uVar4 = thunk_FUN_041a15ee(lVar3 + 0xa0);
      uVar4 = thunk_FUN_041a19a1(*(undefined8 *)(lVar3 + 0x148),uVar4);
      *(undefined8 *)(lVar3 + 0x98) = uVar4;
      uVar4 = thunk_FUN_041d21bb(0,1,0x808080);
      uVar4 = thunk_FUN_041a19a1(*(undefined8 *)(lVar3 + 0x148),uVar4);
      *(undefined8 *)(lVar3 + 0x118) = uVar4;
      uVar4 = thunk_FUN_0412d81c(0);
      uVar4 = thunk_FUN_041a19a1(*(undefined8 *)(lVar3 + 0x148),uVar4);
      *(undefined8 *)(lVar3 + 0x120) = uVar4;
    }
    FUN_00b956d0(lVar3 + 0x2c,local_38,local_34,local_30,local_2c);
    FUN_00b956d0(lVar3 + 0x3c,0,0,local_30 - local_38,local_2c - local_34);
    FUN_01a98230(lVar3);
    param_1 = lVar3;
  }
  return param_1;
}

