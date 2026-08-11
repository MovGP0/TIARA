/* Ghidra address: 015126e0 */
/* Ghidra symbol: FUN_015126e0 */


void FUN_015126e0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined2 uVar3;
  double dVar4;
  undefined1 local_91 [81];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  double local_30 [2];
  
  lVar1 = *(longlong *)(param_1 + 0xed8);
  cVar2 = FUN_010e8310(*(undefined8 *)(param_1 + 0x9b0),1,local_91,local_30,local_38,local_40);
  if (cVar2 != '\0') {
    dVar4 = (double)(**(code **)(**(longlong **)(param_1 + 0xee0) + 0xc0))
                              (*(longlong **)(param_1 + 0xee0));
    uVar3 = FUN_0040c770(local_30[0] / dVar4);
    *(undefined2 *)(lVar1 + 8) = uVar3;
    *(double *)(lVar1 + 0x10) = local_30[0];
  }
  cVar2 = FUN_010e8310(*(undefined8 *)(param_1 + 0x9b0),0,local_91,local_30,local_38,local_40);
  if (cVar2 != '\0') {
    dVar4 = (double)(**(code **)(**(longlong **)(param_1 + 0xee0) + 0xc0))
                              (*(longlong **)(param_1 + 0xee0));
    uVar3 = FUN_0040c770(local_30[0] / dVar4);
    *(undefined2 *)(lVar1 + 10) = uVar3;
    *(double *)(lVar1 + 0x18) = local_30[0];
  }
  FUN_01512450(param_1,6);
  return;
}

