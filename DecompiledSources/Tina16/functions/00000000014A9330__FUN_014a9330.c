/* Ghidra address: 014a9330 */
/* Ghidra symbol: FUN_014a9330 */


void FUN_014a9330(longlong *param_1,undefined8 param_2,short param_3)

{
  int iVar1;
  longlong lVar2;
  undefined2 local_84;
  undefined2 local_82;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined8 local_5e;
  undefined8 local_56;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar2 = *(longlong *)(*param_1 + 0x48);
  if (*(longlong *)(*param_1 + 0x48) == 0) {
    lVar2 = DAT_0210eae0;
  }
  if (param_3 == 0x15) {
    FUN_01d30f00(*param_1,&local_4e,0x36);
    iVar1 = FUN_01d31a40(*param_1);
    if (iVar1 == 0) {
      *(undefined2 *)(lVar2 + 0x6f2) = local_4e;
      *(undefined2 *)(lVar2 + 0x72a) = local_4c;
      *(undefined2 *)(lVar2 + 0x704) = local_4a;
      *(undefined8 *)(lVar2 + 0x6f4) = local_48;
      *(undefined8 *)(lVar2 + 0x72c) = local_40;
      *(undefined8 *)(lVar2 + 0x706) = local_38;
      *(undefined8 *)(lVar2 + 0x6fc) = local_30;
      *(undefined8 *)(lVar2 + 0x734) = local_28;
      *(undefined8 *)(lVar2 + 0x70e) = local_20;
    }
    FUN_01d316c0(*param_1,lVar2 + 0xc60);
    FUN_01d316c0(*param_1,lVar2 + 0xc68);
    FUN_01d30f00(*param_1,lVar2 + 0xc70,1);
    FUN_01d30f00(*param_1,lVar2 + 0xc71,1);
  }
  else if (param_3 == 0x14) {
    FUN_01d30f00(*param_1,&local_84,0x24);
    iVar1 = FUN_01d31a40(*param_1);
    if (iVar1 == 0) {
      *(undefined2 *)(lVar2 + 0x6f2) = local_84;
      *(undefined2 *)(lVar2 + 0x72a) = local_82;
      *(undefined8 *)(lVar2 + 0x6f4) = local_80;
      *(undefined8 *)(lVar2 + 0x72c) = local_78;
      *(undefined8 *)(lVar2 + 0x6fc) = local_70;
      *(undefined8 *)(lVar2 + 0x734) = local_68;
    }
    FUN_01d316c0(*param_1,lVar2 + 0xc60);
    FUN_01d30f00(*param_1,lVar2 + 0xc70,1);
  }
  else if (param_3 == 0x13) {
    FUN_01d30f00(*param_1,&local_84,0x24);
    iVar1 = FUN_01d31a40(*param_1);
    if (iVar1 == 0) {
      *(undefined2 *)(lVar2 + 0x6f2) = local_84;
      *(undefined2 *)(lVar2 + 0x72a) = local_82;
      *(undefined8 *)(lVar2 + 0x6f4) = local_80;
      *(undefined8 *)(lVar2 + 0x72c) = local_78;
      *(undefined8 *)(lVar2 + 0x6fc) = local_70;
      *(undefined8 *)(lVar2 + 0x734) = local_68;
    }
    FUN_01d312f0(*param_1,lVar2 + 0xc60);
    FUN_01d30f00(*param_1,lVar2 + 0xc70,1);
  }
  else if (param_3 == 0x12) {
    FUN_01d30f00(*param_1,&local_84,0x24);
    iVar1 = FUN_01d31a40(*param_1);
    if (iVar1 == 0) {
      *(undefined2 *)(lVar2 + 0x6f2) = local_84;
      *(undefined2 *)(lVar2 + 0x72a) = local_82;
      *(undefined8 *)(lVar2 + 0x6f4) = local_80;
      *(undefined8 *)(lVar2 + 0x72c) = local_78;
      *(undefined8 *)(lVar2 + 0x6fc) = local_70;
      *(undefined8 *)(lVar2 + 0x734) = local_68;
    }
    FUN_01d312f0(*param_1,lVar2 + 0xc60);
  }
  else if (param_3 == 0x11) {
    FUN_01d30f00(*param_1,&local_84,0x24);
    iVar1 = FUN_01d31a40(*param_1);
    if (iVar1 == 0) {
      *(undefined2 *)(lVar2 + 0x6f2) = local_84;
      *(undefined2 *)(lVar2 + 0x72a) = local_82;
      *(undefined8 *)(lVar2 + 0x6f4) = local_80;
      *(undefined8 *)(lVar2 + 0x72c) = local_78;
      *(undefined8 *)(lVar2 + 0x6fc) = local_70;
      *(undefined8 *)(lVar2 + 0x734) = local_68;
    }
  }
  else {
    FUN_01d30f00(*param_1,&local_60,0x12);
    iVar1 = FUN_01d31a40(*param_1);
    if (iVar1 == 0) {
      *(undefined2 *)(lVar2 + 0x6f2) = local_60;
      *(undefined8 *)(lVar2 + 0x6f4) = local_5e;
      *(undefined8 *)(lVar2 + 0x6fc) = local_56;
    }
  }
  return;
}

