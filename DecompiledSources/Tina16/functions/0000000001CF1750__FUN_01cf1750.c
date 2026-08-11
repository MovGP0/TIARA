/* Ghidra address: 01cf1750 */
/* Ghidra symbol: FUN_01cf1750 */


longlong FUN_01cf1750(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  ushort uVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined8 local_res10 [3];
  undefined4 local_2c [3];
  
  local_res10[0] = param_2;
  lVar4 = FUN_00410920(param_1,local_res10);
  if (lVar4 != -1) {
    FUN_017bdbf0(lVar4,0);
    uVar1 = FUN_01d39f20(param_3 & 0xffffffff);
    *(undefined2 *)(lVar4 + 0xba) = uVar1;
    *(undefined2 *)(lVar4 + 0xee) = 0;
    *(undefined8 *)(lVar4 + 0xd8) = 0;
    *(undefined2 *)(lVar4 + 0xf0) = 0;
    *(undefined8 *)(lVar4 + 0xe0) = 0;
    lVar5 = FUN_01d06e20(lVar4);
    if (lVar5 == 0) {
      lVar5 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,*(undefined2 *)(lVar4 + 0xba));
      FUN_01d01990(lVar4,*(undefined1 *)(lVar5 + 0xb4));
    }
    else {
      uVar2 = FUN_00c41060(lVar5,local_2c);
      FUN_01d01990(lVar4,uVar2);
      FUN_01d01aa0(lVar4,local_2c[0]);
    }
    iVar3 = FUN_01cfd2d0(lVar4);
    uVar6 = FUN_00409570((longlong)iVar3);
    *(undefined8 *)(lVar4 + 200) = uVar6;
    uVar8 = (ushort)(param_3 & 0xffffffff);
    if (((((uVar8 != 0x10) && (uVar8 != 0xd9)) && (uVar8 != 0xda)) &&
        ((uVar8 != 0xf && (uVar8 != 0xa6)))) &&
       ((uVar8 != 0xa7 && ((uVar8 != 8 && (uVar8 != 0x62)))))) {
      FUN_01cfdfc0(lVar4,0,1);
    }
    lVar5 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,*(undefined2 *)(lVar4 + 0xba));
    lVar7 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,*(undefined2 *)(lVar4 + 0xba));
    FUN_017bf150(lVar4,0,(longlong)*(short *)(lVar5 + 0x7d),(longlong)*(short *)(lVar7 + 0x7f));
    if (uVar8 < 0x100) {
      if (uVar8 < 0xa8) {
        uVar9 = (param_3 & 0xffff) + 0x20;
        bVar10 = (*(byte *)(((longlong)uVar9 >> 3) + 0x1cf1970) >> (uVar9 & 7) & 1) != 0;
      }
      else {
        bVar10 = false;
      }
      if (bVar10) {
        *(undefined1 *)(lVar4 + 0x90) = 1;
      }
    }
    uVar6 = FUN_0173bdb0(lVar4);
    *(undefined8 *)(lVar4 + 0x198) = uVar6;
    *(undefined8 *)(lVar4 + 0x168) = 0;
    *(undefined8 *)(lVar4 + 0x528) = 0;
    *(undefined4 *)(lVar4 + 0x154) = 0xffffffff;
    *(undefined1 *)(lVar4 + 0x158) = 0;
    *(undefined1 *)(lVar4 + 0xfe) = 0;
    FUN_017feb40(lVar4);
    FUN_01d04c10(lVar4);
    *(undefined8 *)(lVar4 + 0x570) = 0;
    *(undefined1 *)(lVar4 + 0x532) = 0;
    *(undefined1 *)(lVar4 + 0x533) = 0;
    *(undefined8 *)(lVar4 + 0x538) = 0;
    param_1 = lVar4;
  }
  return param_1;
}

