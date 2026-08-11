/* Ghidra address: 014dd5b0 */
/* Ghidra symbol: FUN_014dd5b0 */


void FUN_014dd5b0(longlong *param_1,undefined8 param_2,longlong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *local_30;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2);
  iVar2 = 0;
  iVar6 = param_4;
  if (-1 < param_4 + -1) {
    do {
      plVar3 = (longlong *)FUN_00b94e60(param_1,iVar1 + iVar2);
      (**(code **)(*plVar3 + 0x2d0))(plVar3,0,&local_30);
      lVar4 = FUN_01d347d0(param_3,(*(int *)(param_3 + 0x10) - iVar2) + -1);
      *local_30 = *(undefined8 *)(lVar4 + 0x28);
      iVar2 = iVar2 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  uVar5 = FUN_00b94e60(param_1,iVar1 + param_4);
  lVar4 = FUN_01cfd6a0();
  lVar4 = *(longlong *)(lVar4 + 0x26);
  FUN_0040d200(*(undefined8 *)(lVar4 + 0x19),*(undefined2 *)(lVar4 + 0x21),1);
  FUN_014dd530(uVar5,8,*(undefined8 *)(lVar4 + 9),*(undefined8 *)(lVar4 + 1),
               *(undefined8 *)(lVar4 + 0x19),param_3,&DAT_01f59ae0);
  return;
}

