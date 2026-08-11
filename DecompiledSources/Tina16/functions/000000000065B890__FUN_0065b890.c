/* Ghidra address: 0065b890 */
/* Ghidra symbol: FUN_0065b890 */


int * FUN_0065b890(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  FUN_004238d0(param_2,0x7fffffff,0x7fffffff,0,0);
  iVar1 = FUN_00654c00();
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar4 = FUN_00654bc0(param_1,iVar5);
      if ((*(char *)(lVar4 + 0xa9) != '\0') ||
         (((*(ushort *)(lVar4 + 0x34) & 0x10) != 0 && ((*(uint *)(lVar4 + 0xa0) & 0x400) == 0)))) {
        iVar2 = (**(code **)(**(longlong **)(lVar4 + 0xd8) + 0x20))(*(longlong **)(lVar4 + 0xd8),0);
        if (iVar2 < *param_2) {
          iVar2 = (**(code **)(**(longlong **)(lVar4 + 0xd8) + 0x20))
                            (*(longlong **)(lVar4 + 0xd8),0);
          *param_2 = iVar2;
        }
        iVar2 = (**(code **)(**(longlong **)(lVar4 + 0xd8) + 0x20))(*(longlong **)(lVar4 + 0xd8),1);
        if (iVar2 < param_2[1]) {
          iVar2 = (**(code **)(**(longlong **)(lVar4 + 0xd8) + 0x20))
                            (*(longlong **)(lVar4 + 0xd8),1);
          param_2[1] = iVar2;
        }
        iVar2 = (**(code **)(**(longlong **)(lVar4 + 0xd8) + 0x20))(*(longlong **)(lVar4 + 0xd8),0);
        iVar3 = (**(code **)(**(longlong **)(lVar4 + 0xd8) + 0x20))(*(longlong **)(lVar4 + 0xd8),2);
        if (param_2[2] < iVar2 + iVar3) {
          iVar2 = (**(code **)(**(longlong **)(lVar4 + 0xd8) + 0x20))
                            (*(longlong **)(lVar4 + 0xd8),0);
          iVar3 = (**(code **)(**(longlong **)(lVar4 + 0xd8) + 0x20))
                            (*(longlong **)(lVar4 + 0xd8),2);
          param_2[2] = iVar2 + iVar3;
        }
        iVar2 = (**(code **)(**(longlong **)(lVar4 + 0xd8) + 0x20))(*(longlong **)(lVar4 + 0xd8),1);
        iVar3 = (**(code **)(**(longlong **)(lVar4 + 0xd8) + 0x20))(*(longlong **)(lVar4 + 0xd8),3);
        if (param_2[3] < iVar2 + iVar3) {
          iVar2 = (**(code **)(**(longlong **)(lVar4 + 0xd8) + 0x20))
                            (*(longlong **)(lVar4 + 0xd8),1);
          iVar3 = (**(code **)(**(longlong **)(lVar4 + 0xd8) + 0x20))
                            (*(longlong **)(lVar4 + 0xd8),3);
          param_2[3] = iVar2 + iVar3;
        }
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return param_2;
}

