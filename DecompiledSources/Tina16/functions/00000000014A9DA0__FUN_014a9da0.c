/* Ghidra address: 014a9da0 */
/* Ghidra symbol: FUN_014a9da0 */


void FUN_014a9da0(longlong *param_1,undefined8 param_2,ushort param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_4b;
  undefined8 uStack_43;
  undefined2 uStack_3b;
  char local_39;
  
  lVar2 = *(longlong *)(*param_1 + 0x48);
  if (*(longlong *)(*param_1 + 0x48) == 0) {
    lVar2 = DAT_0210eae0;
  }
  FUN_01d30f00(*param_1,&local_4b,0x13);
  iVar1 = FUN_01d31a40(*param_1);
  if (iVar1 == 0) {
    *(undefined8 *)(lVar2 + 0x867) = local_4b;
    *(undefined8 *)(lVar2 + 0x86f) = uStack_43;
    *(undefined2 *)(lVar2 + 0x877) = uStack_3b;
    *(char *)(lVar2 + 0x879) = local_39;
    if (param_3 < 0x11) {
      local_39 = local_39 + -1;
    }
    *(char *)(lVar2 + 0x879) = local_39;
  }
  return;
}

