/* Ghidra address: 014ac180 */
/* Ghidra symbol: FUN_014ac180 */


void FUN_014ac180(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_1c;
  
  lVar2 = *(longlong *)(*param_1 + 0x48);
  if (*(longlong *)(*param_1 + 0x48) == 0) {
    lVar2 = DAT_0210eae0;
  }
  FUN_01d30f00(*param_1,&local_1c,4);
  iVar1 = FUN_01d31a40(*param_1);
  if (iVar1 == 0) {
    *(undefined4 *)(lVar2 + 0xd4e) = local_1c;
  }
  return;
}

