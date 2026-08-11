/* Ghidra address: 01d3d9b0 */
/* Ghidra symbol: FUN_01d3d9b0 */


uint FUN_01d3d9b0(undefined8 param_1,uint param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  ushort *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 local_77;
  
  puVar4 = &local_77;
  for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *param_3;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = *(undefined4 *)param_3;
  *(undefined2 *)((longlong)puVar4 + 4) = *(undefined2 *)((longlong)param_3 + 4);
  *(undefined1 *)((longlong)puVar4 + 6) = *(undefined1 *)((longlong)param_3 + 6);
  if ((((param_2 == 0x3ea) || (param_2 == 0x3ed)) || (param_2 == 0x3eb)) || (param_2 == 0x3f1)) {
    iVar1 = 0;
    puVar3 = &DAT_01ff577e;
    do {
      iVar5 = iVar1;
      if (*puVar3 == param_2) break;
      iVar1 = iVar1 + 1;
      puVar3 = puVar3 + 1;
      iVar5 = param_4;
    } while (iVar1 != 0x17);
    param_2 = (uint)(ushort)(&DAT_01ff577e)[(int)(iVar5 + (uint)local_77._1_1_ + -2)];
  }
  return param_2;
}

