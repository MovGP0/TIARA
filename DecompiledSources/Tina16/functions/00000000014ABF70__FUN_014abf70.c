/* Ghidra address: 014abf70 */
/* Ghidra symbol: FUN_014abf70 */


void FUN_014abf70(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  
  lVar2 = *(longlong *)(*param_1 + 0x48);
  if (*(longlong *)(*param_1 + 0x48) == 0) {
    lVar2 = DAT_0210eae0;
  }
  FUN_01d30f00(*param_1,&local_38,0x10);
  iVar1 = FUN_01d31a40(*param_1);
  if (iVar1 == 0) {
    *(undefined8 *)(lVar2 + 0xc44) = local_38;
    *(undefined8 *)(lVar2 + 0xc4c) = uStack_30;
  }
  return;
}

