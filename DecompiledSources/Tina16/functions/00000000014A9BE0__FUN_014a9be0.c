/* Ghidra address: 014a9be0 */
/* Ghidra symbol: FUN_014a9be0 */


void FUN_014a9be0(longlong *param_1,undefined8 param_2,short param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined8 local_62;
  undefined8 local_5a;
  undefined8 local_52;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  undefined8 local_46;
  undefined8 local_3e;
  char local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar2 = *(longlong *)(*param_1 + 0x48);
  if (*(longlong *)(*param_1 + 0x48) == 0) {
    lVar2 = DAT_0210eae0;
  }
  if (param_3 == 0x12) {
    FUN_01d30f00(*param_1,&local_36,0x1e);
    iVar1 = FUN_01d31a40(*param_1);
    if (iVar1 == 0) {
      *(char *)(lVar2 + 0x73c) = local_36;
      if (local_36 == '\x04') {
        *(undefined1 *)(lVar2 + 0x73c) = 1;
      }
      *(undefined1 *)(lVar2 + 0x73d) = local_35;
      *(undefined1 *)(lVar2 + 0x73e) = local_34;
      *(undefined1 *)(lVar2 + 0x73f) = local_33;
      *(undefined1 *)(lVar2 + 0x740) = local_32;
      *(undefined1 *)(lVar2 + 0x741) = local_31;
      *(undefined8 *)(lVar2 + 0x742) = local_30;
      *(undefined8 *)(lVar2 + 0x74a) = local_28;
      *(undefined8 *)(lVar2 + 0x752) = local_20;
    }
  }
  else if (param_3 == 0x11) {
    FUN_01d30f00(*param_1,&local_66,0x1c);
    iVar1 = FUN_01d31a40(*param_1);
    if (iVar1 == 0) {
      *(undefined1 *)(lVar2 + 0x73c) = 1;
      *(undefined1 *)(lVar2 + 0x73d) = local_65;
      *(undefined1 *)(lVar2 + 0x73e) = local_64;
      *(undefined1 *)(lVar2 + 0x73f) = local_63;
      *(undefined8 *)(lVar2 + 0x742) = local_62;
      *(undefined8 *)(lVar2 + 0x74a) = local_5a;
      *(undefined8 *)(lVar2 + 0x752) = local_52;
    }
  }
  else {
    FUN_01d30f00(*param_1,&local_4a,0x14);
    iVar1 = FUN_01d31a40(*param_1);
    if (iVar1 == 0) {
      *(undefined1 *)(lVar2 + 0x73c) = 1;
      *(undefined1 *)(lVar2 + 0x73d) = local_49;
      *(undefined1 *)(lVar2 + 0x73e) = local_48;
      *(undefined1 *)(lVar2 + 0x73f) = local_47;
      *(undefined8 *)(lVar2 + 0x742) = local_46;
      *(undefined8 *)(lVar2 + 0x74a) = local_3e;
      *(undefined8 *)(lVar2 + 0x752) = local_3e;
    }
  }
  return;
}

