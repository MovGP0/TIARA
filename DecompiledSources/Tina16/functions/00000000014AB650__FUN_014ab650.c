/* Ghidra address: 014ab650 */
/* Ghidra symbol: FUN_014ab650 */


void FUN_014ab650(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
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
  FUN_01d30f00(*param_1,&local_c0,0xa8);
  iVar1 = FUN_01d31a40(*param_1);
  if (iVar1 == 0) {
    *(undefined8 *)(lVar2 + 0x76d) = local_c0;
    *(undefined8 *)(lVar2 + 0x775) = local_b8;
    *(undefined8 *)(lVar2 + 0x77d) = local_b0;
    *(undefined8 *)(lVar2 + 0x785) = local_a8;
    *(undefined8 *)(lVar2 + 0x78d) = local_a0;
    *(undefined8 *)(lVar2 + 0x795) = local_98;
    *(undefined8 *)(lVar2 + 0x79d) = local_90;
    *(undefined8 *)(lVar2 + 0x7a5) = local_88;
    *(undefined8 *)(lVar2 + 0x7ad) = local_80;
    *(undefined8 *)(lVar2 + 0x7b5) = local_78;
    *(undefined8 *)(lVar2 + 0x7bd) = local_70;
    *(undefined8 *)(lVar2 + 0x7c5) = local_68;
    *(undefined8 *)(lVar2 + 0x7cd) = local_60;
    *(undefined8 *)(lVar2 + 0x7d5) = local_58;
    *(undefined8 *)(lVar2 + 0x7dd) = local_50;
    *(undefined8 *)(lVar2 + 0x7e5) = local_48;
    *(undefined8 *)(lVar2 + 0x7ed) = local_40;
    *(undefined8 *)(lVar2 + 0x7f5) = local_38;
    *(undefined8 *)(lVar2 + 0x7fd) = local_30;
    *(undefined8 *)(lVar2 + 0x805) = local_28;
    *(undefined8 *)(lVar2 + 0x80d) = local_20;
  }
  return;
}

