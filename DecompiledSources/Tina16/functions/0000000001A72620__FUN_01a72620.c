/* Ghidra address: 01a72620 */
/* Ghidra symbol: FUN_01a72620 */


void FUN_01a72620(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  lVar6 = FUN_0065f300(&PTR_FUN_00643358,1,param_1);
  param_1[0x1fb] = lVar6;
  *(undefined4 *)(param_1 + 0xd7) = 100;
  (**(code **)(*param_1 + 0x3b0))(param_1);
  *(undefined4 *)((longlong)param_1 + 0x1074) = 0xffffffff;
  FUN_0064cf60(param_1,0x1f5);
  *(undefined4 *)(param_1[0xfa] + 0xac) = 0x1f6;
  *(undefined4 *)(param_1[0x115] + 0xac) = 0x1fe;
  *(undefined4 *)(param_1[0x101] + 0xac) = 0x206;
  *(undefined4 *)(param_1[0x12e] + 0xac) = 0x21a;
  *(undefined4 *)(param_1[0x100] + 0xac) = 0x1f7;
  *(undefined4 *)(param_1[0xff] + 0xac) = 0x1f8;
  *(undefined4 *)(param_1[0xfe] + 0xac) = 0x1f9;
  *(undefined4 *)(param_1[0x129] + 0xac) = 0x1fa;
  *(undefined4 *)(param_1[0x16c] + 0xac) = 0x218;
  *(undefined4 *)(param_1[0x122] + 0xac) = 0x1fb;
  *(undefined4 *)(param_1[0xfc] + 0xac) = 0x1fc;
  *(undefined4 *)(param_1[0xfb] + 0xac) = 0x1fd;
  *(undefined4 *)(param_1[0x118] + 0xac) = 0x1ff;
  *(undefined4 *)(param_1[0x117] + 0xac) = 0x200;
  *(undefined4 *)(param_1[0x116] + 0xac) = 0x201;
  *(undefined4 *)(param_1[0x128] + 0xac) = 0x202;
  *(undefined4 *)(param_1[0x142] + 0xac) = 0x203;
  *(undefined4 *)(param_1[0x103] + 0xac) = 0x21b;
  *(undefined4 *)(param_1[0x104] + 0xac) = 0x21c;
  *(undefined4 *)(param_1[0x131] + 0xac) = 0x479;
  *(undefined4 *)(param_1[0x132] + 0xac) = 0x47a;
  *(undefined4 *)(param_1[0x130] + 0xac) = 0x47b;
  *(undefined4 *)(param_1[0x134] + 0xac) = 0x21d;
  *(undefined4 *)(param_1[0x178] + 0xac) = 0x21e;
  FUN_007e8920(param_1[0x102],0x208);
  *(undefined4 *)(param_1[0x12a] + 0xac) = 0x204;
  *(undefined4 *)(param_1[299] + 0xac) = 0x205;
  FUN_007e2f80(param_1[0x143],0);
  (**(code **)(*param_1 + 0x2e8))(param_1,L"bmProbe");
  lVar6 = FUN_01cebd00(&PTR_FUN_01cead48,1,param_1);
  param_1[0xf4] = lVar6;
  FUN_01a87970(param_1,*(undefined1 *)(lVar6 + 0x50),0);
  cVar2 = FUN_00f06b50(L"Vector style",1);
  if (cVar2 == '\x01') {
    FUN_007e2d20(param_1[0x13f],1);
  }
  else if (cVar2 == '\x02') {
    FUN_007e2d20(param_1[0x140],1);
  }
  else if (cVar2 == '\x03') {
    FUN_007e2d20(param_1[0x141],1);
  }
  param_1[0xf3] = 0;
  param_1[0x201] = 0;
  param_1[0x1fe] = 0;
  param_1[0x200] = 0;
  FUN_00806b40(param_1,DAT_01fcab2c);
  FUN_00806af0(param_1,DAT_01fcab30);
  FUN_0064cc50(param_1,DAT_01fcab34);
  FUN_0064cbf0(param_1,DAT_01fcab38);
  iVar3 = FUN_00809b10(*(undefined8 *)PTR_DAT_02005950);
  iVar4 = FUN_00f06b50(L"WinWidth",(int)param_1[0x13]);
  if (iVar3 < iVar4) {
    iVar4 = iVar3;
  }
  FUN_0064cbf0(param_1,iVar4);
  iVar3 = FUN_00809a80(*(undefined8 *)PTR_DAT_02005950);
  iVar4 = FUN_00f06b50(L"WinHeight",*(undefined4 *)((longlong)param_1 + 0x9c));
  if (iVar3 < iVar4) {
    iVar4 = iVar3;
  }
  FUN_0064cc50(param_1,iVar4);
  iVar3 = FUN_00809b10(*(undefined8 *)PTR_DAT_02005950);
  iVar3 = iVar3 - (int)param_1[0x13];
  uVar5 = FUN_007fd7d0(param_1);
  iVar4 = FUN_00f06b50(L"WinLeft",uVar5);
  if (iVar3 < iVar4) {
    iVar4 = iVar3;
  }
  FUN_00806af0(param_1,iVar4);
  iVar3 = FUN_00809a80(*(undefined8 *)PTR_DAT_02005950);
  iVar3 = iVar3 - *(int *)((longlong)param_1 + 0x9c);
  uVar5 = FUN_007fd800(param_1);
  iVar4 = FUN_00f06b50(L"WinTop",uVar5);
  if (iVar3 < iVar4) {
    iVar4 = iVar3;
  }
  FUN_00806b40(param_1,iVar4);
  lVar6 = FUN_005fc570(&PTR_FUN_005f2d40,1);
  param_1[0x207] = lVar6;
  FUN_005fcd80(lVar6,L"Arial");
  FUN_005fce30(param_1[0x207],0xc);
  FUN_0064dbe0(param_1[0xf7],0);
  lVar6 = FUN_007ffbe0(param_1);
  param_1[0xf0] = lVar6;
  FUN_0082a6c0(param_1[0x152],1);
  *(undefined1 *)(param_1 + 0xf5) = 0;
  *(undefined1 *)(param_1 + 0x211) = 1;
  DAT_02110848 = 0;
  DAT_02110850 = 0;
  uVar7 = FUN_007fc180(&PTR_FUN_00f0e178,1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined8 *)PTR_DAT_02003f68 = uVar7;
  uVar7 = FUN_007fc180(&PTR_FUN_01a64928,1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined8 *)PTR_DAT_02001450 = uVar7;
  lVar6 = FUN_0068e2d0(&PTR_FUN_00679048,1,param_1);
  param_1[0x20b] = lVar6;
  plVar1 = (longlong *)param_1[0x20b];
  (**(code **)(*plVar1 + 0x130))(plVar1,param_1);
  FUN_0068e690(plVar1,1);
  FUN_0064c650(plVar1,4);
  FUN_0065bce0(plVar1,0);
  plVar1[0x99] = (longlong)param_1;
  plVar1[0x98] = (longlong)FUN_01a89c10;
  lVar6 = FUN_0068e2d0(&PTR_FUN_00679048,1,param_1);
  param_1[0x20c] = lVar6;
  plVar1 = (longlong *)param_1[0x20c];
  (**(code **)(*plVar1 + 0x130))(plVar1,param_1);
  FUN_0068e690(plVar1,0);
  FUN_0064c650(plVar1,2);
  FUN_0065bce0(plVar1,0);
  plVar1[0x99] = (longlong)param_1;
  plVar1[0x98] = (longlong)FUN_01a89d80;
  FUN_007e2f80(param_1[0xff],0);
  FUN_007e2f80(param_1[0xfe],0);
  FUN_007e2f80(param_1[0x129],0);
  FUN_007e2f80(param_1[0x122],0);
  FUN_007e2f80(param_1[0xfc],0);
  FUN_007e2f80(param_1[0xfb],0);
  FUN_0064dbe0(param_1[0x10f],0);
  FUN_007e2f80(param_1[0xfd],0);
  FUN_007e2f80(param_1[0x1c9],1);
  uVar7 = FUN_006d8710(*(undefined8 *)(param_1[0x17b] + 0x490),0);
  iVar4 = FUN_0064d0b0(param_1[0x17b]);
  lVar6 = FUN_006d8710(*(undefined8 *)(param_1[0x17b] + 0x490),1);
  FUN_006d8600(uVar7,iVar4 - *(int *)(lVar6 + 0x20));
  *(undefined1 *)(param_1 + 0x20a) = 1;
  FUN_01a7fc90(param_1);
  lVar6 = *(longlong *)PTR_DAT_02004030;
  param_1[0x208] = *(longlong *)(lVar6 + 0x290);
  param_1[0x209] = *(longlong *)(lVar6 + 0x298);
  lVar6 = *(longlong *)PTR_DAT_02004030;
  *(longlong **)(lVar6 + 0x298) = param_1;
  *(code **)(lVar6 + 0x290) = FUN_01a72df0;
  (**(code **)(*(longlong *)param_1[0xf8] + 0x148))((longlong *)param_1[0xf8],0);
  lVar6 = FUN_01d44bd0(&DAT_01d41ea8,1);
  param_1[0x210] = lVar6;
  FUN_01aebc30(param_1,param_1[0xf9]);
  FUN_01aebc40(param_1);
  return;
}

