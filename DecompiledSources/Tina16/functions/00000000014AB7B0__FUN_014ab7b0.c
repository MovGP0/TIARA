/* Ghidra address: 014ab7b0 */
/* Ghidra symbol: FUN_014ab7b0 */


void FUN_014ab7b0(longlong *param_1,undefined8 param_2,ushort param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 local_a78 [280];
  undefined1 local_960 [264];
  undefined1 local_858 [248];
  undefined1 local_760 [240];
  undefined1 local_670 [232];
  undefined1 local_588 [168];
  undefined1 local_4e0 [48];
  undefined1 local_4b0 [16];
  undefined1 local_4a0 [144];
  undefined1 local_410 [48];
  undefined1 local_3e0 [112];
  undefined1 local_370 [40];
  undefined1 local_348 [48];
  undefined1 local_318 [88];
  undefined1 local_2c0 [40];
  undefined1 local_298 [48];
  undefined1 local_268 [80];
  undefined1 local_218 [40];
  undefined1 local_1f0 [48];
  undefined8 local_1c0;
  undefined8 local_1b8 [51];
  
  local_1c0 = 0;
  lVar3 = *(longlong *)(*param_1 + 0x48);
  if (*(longlong *)(*param_1 + 0x48) == 0) {
    lVar3 = DAT_0210eae0;
  }
  if (((param_3 == 0x24) || (param_3 == 0x24)) || (param_3 == 0x23)) {
    FUN_01d30f00(*param_1,local_1b8,400);
    iVar1 = FUN_01d31a40(*param_1);
    if (iVar1 == 0) {
      puVar4 = local_1b8;
      puVar5 = (undefined8 *)(lVar3 + 0x55a);
      for (lVar2 = 0x32; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
  }
  else if ((param_3 == 0x22) || (param_3 == 0x21)) {
    FUN_01d30f00(*param_1,local_a78,0x118);
    iVar1 = FUN_01d31a40(*param_1);
    if (iVar1 == 0) {
      FUN_00409a70(local_a78,lVar3 + 0x55a,0x118);
    }
  }
  else if (param_3 == 0x20) {
    FUN_01d30f00(*param_1,local_960,0x108);
    iVar1 = FUN_01d31a40(*param_1);
    if (iVar1 == 0) {
      FUN_00409a70(local_960,lVar3 + 0x55a,0x108);
    }
  }
  else if (param_3 == 0x19) {
    FUN_01d30f00(*param_1,local_858,0xf8);
    iVar1 = FUN_01d31a40(*param_1);
    if (iVar1 == 0) {
      FUN_00409a70(local_858,lVar3 + 0x55a,0xf8);
    }
  }
  else if (param_3 == 0x18) {
    FUN_01d30f00(*param_1,local_760,0xf0);
    iVar1 = FUN_01d31a40(*param_1);
    if (iVar1 == 0) {
      FUN_00409a70(local_760,lVar3 + 0x55a,0xf0);
    }
  }
  else if (((param_3 == 0x17) || (param_3 == 0x16)) || (param_3 == 0x15)) {
    FUN_01d30f00(*param_1,local_670,0xe8);
    iVar1 = FUN_01d31a40(*param_1);
    if (iVar1 == 0) {
      FUN_00409a70(local_670,lVar3 + 0x55a,0xe0);
    }
  }
  else if (param_3 == 0x14) {
    FUN_01d30f00(*param_1,local_588,0xd8);
    iVar1 = FUN_01d31a40(*param_1);
    if (iVar1 == 0) {
      FUN_00409a70(local_588,lVar3 + 0x55a,0xa8);
      FUN_00409a70(local_4e0,lVar3 + 0x612,0x28);
    }
  }
  else if (param_3 == 0x13) {
    FUN_01d30f00(*param_1,local_4b0,0xd0);
    iVar1 = FUN_01d31a40(*param_1);
    if (iVar1 == 0) {
      FUN_00409a70(local_4b0,lVar3 + 0x55a,8);
      FUN_00409a70(local_4a0,lVar3 + 0x572,0x90);
      FUN_00409a70(local_410,lVar3 + 0x612,0x28);
    }
  }
  else if (param_3 == 0x12) {
    FUN_01d30f00(*param_1,local_3e0,200);
    iVar1 = FUN_01d31a40(*param_1);
    if (iVar1 == 0) {
      FUN_00409a70(local_3e0,lVar3 + 0x55a,8);
      FUN_00409a70(local_370,lVar3 + 0x5da,0x28);
      FUN_00409a70(local_348,lVar3 + 0x612,0x28);
    }
  }
  else if (param_3 == 0x11) {
    FUN_01d30f00(*param_1,local_318,0xb0);
    iVar1 = FUN_01d31a40(*param_1);
    if (iVar1 == 0) {
      FUN_00409a70(local_318,lVar3 + 0x55a,8);
      FUN_00409a70(local_2c0,lVar3 + 0x5da,0x28);
      FUN_00409a70(local_298,lVar3 + 0x612,0x28);
    }
  }
  else if (param_3 == 0x10) {
    FUN_01d30f00(*param_1,local_268,0xa8);
    iVar1 = FUN_01d31a40(*param_1);
    if (iVar1 == 0) {
      FUN_00409a70(local_268,lVar3 + 0x55a,8);
      FUN_00409a70(local_218,lVar3 + 0x5da,0x28);
      FUN_00409a70(local_1f0,lVar3 + 0x612,0x28);
    }
  }
  if (param_3 < 0x17) {
    *(undefined8 *)(lVar3 + 0x5fa) = *(undefined8 *)(PTR_DAT_02001120 + 0x168);
    *(undefined8 *)(lVar3 + 0x63a) = *(undefined8 *)(PTR_DAT_02001120 + 0x1a8);
    if (param_3 < 0x16) {
      *(undefined8 *)(lVar3 + 0x5f2) = *(undefined8 *)(PTR_DAT_02001120 + 0x160);
    }
  }
  if (((param_3 < 0x21) && (0x15 < param_3)) && (*(double *)(lVar3 + 0x65a) != 0.0)) {
    lVar2 = FUN_0040c770(DAT_01f510f8 * *(double *)(lVar3 + 0x5f2));
    *(double *)(lVar3 + 0x5f2) = (double)lVar2;
  }
  if (param_3 < 0x1a) {
    *(undefined8 *)(lVar3 + 0x652) = 0;
    *(undefined8 *)(lVar3 + 0x65a) = 0;
  }
  if ((param_3 < 0x25) &&
     (*(undefined8 *)(lVar3 + 0x6aa) = *(undefined8 *)(PTR_DAT_02001120 + 0x218),
     *(double *)(lVar3 + 0x6ba) <= 0.0)) {
    *(undefined8 *)(lVar3 + 0x6ba) = *(undefined8 *)(PTR_DAT_02001120 + 0x228);
  }
  if (*(double *)(lVar3 + 0x6b2) <= 0.0) {
    *(undefined8 *)(lVar3 + 0x6b2) = *(undefined8 *)(PTR_DAT_02001120 + 0x220);
  }
  if (param_3 < 0x22) {
    FUN_00414480(lVar3 + 0x6ea);
    lVar2 = FUN_0040c770(*(double *)(lVar3 + 0x5ba) * 10000.0);
    if (lVar2 == 1) {
      *(undefined8 *)(lVar3 + 0x5ba) = 0x3e112e0be826d695;
    }
  }
  else {
    if (param_3 < 0x24) {
      FUN_01d314e0(*param_1,&local_1c0);
    }
    else {
      FUN_01d316c0(*param_1,&local_1c0);
    }
    FUN_00414ad0(lVar3 + 0x6ea,local_1c0);
  }
  FUN_00414480(&local_1c0);
  return;
}

