/* Ghidra address: 014ac120 */
/* Ghidra symbol: FUN_014ac120 */


void FUN_014ac120(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_3b;
  undefined8 uStack_33;
  undefined2 uStack_2b;
  undefined1 uStack_29;
  
  lVar2 = *(longlong *)(*param_1 + 0x48);
  if (*(longlong *)(*param_1 + 0x48) == 0) {
    lVar2 = DAT_0210eae0;
  }
  FUN_01d30f00(*param_1,&local_3b,0x13);
  iVar1 = FUN_01d31a40(*param_1);
  if (iVar1 == 0) {
    *(undefined8 *)(lVar2 + 0xd3b) = local_3b;
    *(undefined8 *)(lVar2 + 0xd43) = uStack_33;
    *(undefined2 *)(lVar2 + 0xd4b) = uStack_2b;
    *(undefined1 *)(lVar2 + 0xd4d) = uStack_29;
  }
  return;
}

