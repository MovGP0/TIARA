/* Ghidra address: 01512260 */
/* Ghidra symbol: FUN_01512260 */


void FUN_01512260(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  double dVar5;
  char local_39 [25];
  
  if ((*(char *)((longlong)param_1 + 0x7ed) != '\0') &&
     (iVar4 = (**(code **)(*(longlong *)param_1[0x1dc] + 0x78))((longlong *)param_1[0x1dc]),
     iVar4 != 0)) {
    return;
  }
  cVar3 = FUN_00f83630(param_2,(longlong)param_1 + 0x7ee);
  if (cVar3 == '\0') {
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0x7ed) = 1;
  FUN_0082a6c0(param_1[0xf7],1);
  plVar1 = (longlong *)param_1[0x1dc];
  lVar2 = param_1[0x136];
  *(longlong *)(lVar2 + 0xf8) = param_1[0x18a];
  *(longlong *)(lVar2 + 0x100) = param_1[0x18b];
  *(longlong *)(lVar2 + 0xd8) = param_1[0x18a];
  *(longlong *)(lVar2 + 0xe0) = param_1[0x18b];
  FUN_010e81e0(lVar2,1,0);
  FUN_010e81e0(lVar2,0,plVar1[0x12]);
  iVar4 = (**(code **)(*plVar1 + 0x78))(plVar1);
  if (iVar4 == 0) {
    FUN_0082a890(param_1[0xf7],1);
    FUN_0082a6c0(param_1[0xf7],0);
    FUN_0082a6c0(param_1[0xf8],0);
  }
  (**(code **)(*plVar1 + 0x118))(plVar1,local_39,1);
  FUN_00f835c0(10);
  if (local_39[0] != '\0') {
    iVar4 = (**(code **)(*plVar1 + 0x78))(plVar1);
    if (iVar4 == 0) {
      dVar5 = (double)(**(code **)(*plVar1 + 0xc0))(plVar1);
      iVar4 = (**(code **)(*plVar1 + 0xe8))(plVar1);
      if (dVar5 * (double)iVar4 < (double)plVar1[0x12]) goto LAB_015123d2;
    }
    iVar4 = (**(code **)(*plVar1 + 0x78))(plVar1);
    if (iVar4 == 0) goto LAB_015123ef;
  }
LAB_015123d2:
  FUN_0082a6c0(param_1[0xf8],1);
  (**(code **)(*param_1 + 0x3d8))(param_1,param_1);
LAB_015123ef:
  *(undefined1 *)((longlong)param_1 + 0x7ed) = 0;
  return;
}

