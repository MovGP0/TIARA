/* Ghidra address: 014ac050 */
/* Ghidra symbol: FUN_014ac050 */


void FUN_014ac050(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_36;
  undefined4 uStack_2e;
  undefined2 uStack_2a;
  
  lVar2 = *(longlong *)(*param_1 + 0x48);
  if (*(longlong *)(*param_1 + 0x48) == 0) {
    lVar2 = DAT_0210eae0;
  }
  FUN_01d30f00(*param_1,&local_36,0xe);
  iVar1 = FUN_01d31a40(*param_1);
  if (iVar1 == 0) {
    *(undefined8 *)(lVar2 + 0xcbf) = local_36;
    *(undefined4 *)(lVar2 + 0xcc7) = uStack_2e;
    *(undefined2 *)(lVar2 + 0xccb) = uStack_2a;
  }
  return;
}

