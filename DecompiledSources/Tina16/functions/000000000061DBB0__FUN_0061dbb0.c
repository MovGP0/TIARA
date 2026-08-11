/* Ghidra address: 0061dbb0 */
/* Ghidra symbol: FUN_0061dbb0 */


longlong FUN_0061dbb0(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  
  if ((((param_1 != (char *)0x0) && (*param_1 != '\0')) && (param_2 != (char *)0x0)) &&
     (*param_2 != '\0')) {
    iVar2 = FUN_00414ce0(param_1);
    uVar3 = FUN_00414ce0(param_2);
    for (lVar5 = FUN_0061db60(param_1,param_2);
        (lVar5 != 0 && (uVar3 <= (uint)(iVar2 - ((int)lVar5 - (int)param_1))));
        lVar5 = FUN_0061db60(lVar5 + 1,param_2)) {
      cVar1 = FUN_0061dda0(param_1,lVar5 - (longlong)param_1);
      if ((cVar1 != '\x02') && (iVar4 = FUN_00427790(0x400,0,lVar5,uVar3,param_2,uVar3), iVar4 == 2)
         ) {
        return lVar5;
      }
      if (cVar1 == '\x01') {
        lVar5 = lVar5 + 1;
      }
    }
  }
  return 0;
}

