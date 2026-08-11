/* Ghidra address: 015266c0 */
/* Ghidra symbol: FUN_015266c0 */


bool FUN_015266c0(undefined4 param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  
  (**(code **)(*param_2 + 0x90))(param_2);
  local_30 = FUN_004b6930(&PTR_FUN_00478280,1);
  lVar2 = FUN_015264d0(param_1);
  *param_3 = lVar2;
  lVar2 = *param_3;
  if (lVar2 != 0) {
    FUN_017c4360(*param_3,local_30);
    (**(code **)(*param_2 + 0x10))(param_2,local_30);
    lVar3 = FUN_019a4600();
    iVar6 = *(int *)(lVar3 + 0x10);
    iVar5 = 0;
    if (-1 < iVar6 + -1) {
      do {
        uVar4 = FUN_00b94e60(lVar3,iVar5);
        cVar1 = FUN_01526580(auStack_58,uVar4);
        if (cVar1 != '\0') {
          FUN_00b94e60(lVar3,iVar5);
          break;
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  FUN_00410f20(local_30);
  return lVar2 != 0;
}

