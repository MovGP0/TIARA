/* Ghidra address: 014a9e20 */
/* Ghidra symbol: FUN_014a9e20 */


void FUN_014a9e20(longlong *param_1,undefined8 param_2,ushort param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 local_9b;
  undefined1 local_6e;
  undefined8 local_6d;
  undefined8 local_65;
  undefined8 local_5d;
  undefined8 local_55;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined8 local_49;
  undefined8 local_41;
  undefined8 local_39;
  undefined8 local_31;
  char local_29;
  
  lVar4 = *(longlong *)(*param_1 + 0x48);
  if (*(longlong *)(*param_1 + 0x48) == 0) {
    lVar4 = DAT_0210eae0;
  }
  if (param_3 == 0x13) {
    FUN_01d30f00(*param_1,&local_9b,0x2d);
    iVar1 = FUN_01d31a40(*param_1);
    if (iVar1 == 0) {
      puVar3 = &local_9b;
      puVar5 = (undefined8 *)(lVar4 + 0x87a);
      for (lVar2 = 5; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
      *(undefined4 *)puVar5 = *(undefined4 *)puVar3;
      *(undefined1 *)((longlong)puVar5 + 4) = *(undefined1 *)((longlong)puVar3 + 4);
    }
  }
  else if (param_3 == 0x12) {
    FUN_01d30f00(*param_1,&local_6e,0x24);
    *(undefined1 *)(lVar4 + 0x87a) = local_6e;
    *(undefined8 *)(lVar4 + 0x87b) = local_6d;
    *(undefined8 *)(lVar4 + 0x883) = local_65;
    *(undefined8 *)(lVar4 + 0x88b) = local_5d;
    *(undefined8 *)(lVar4 + 0x893) = local_55;
    *(undefined1 *)(lVar4 + 0x8a3) = local_4d;
    *(undefined1 *)(lVar4 + 0x8a4) = local_4c;
    *(undefined1 *)(lVar4 + 0x8a5) = local_4b;
  }
  else {
    FUN_01d30f00(*param_1,&local_4a,0x22);
    *(undefined1 *)(lVar4 + 0x87a) = local_4a;
    *(undefined8 *)(lVar4 + 0x87b) = local_49;
    *(undefined8 *)(lVar4 + 0x883) = local_41;
    *(undefined8 *)(lVar4 + 0x88b) = local_39;
    *(undefined8 *)(lVar4 + 0x893) = local_31;
    *(char *)(lVar4 + 0x8a3) = local_29;
    if (param_3 < 0x11) {
      *(char *)(lVar4 + 0x8a3) = local_29 + -1;
    }
  }
  return;
}

