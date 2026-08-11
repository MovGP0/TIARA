/* Ghidra address: 0197e1d0 */
/* Ghidra symbol: FUN_0197e1d0 */


char FUN_0197e1d0(longlong param_1,undefined8 *param_2,double param_3,double param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  
  local_68 = *param_2;
  uStack_60 = param_2[1];
  cVar4 = '\0';
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      plVar2 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar5);
      (**(code **)(*plVar2 + 8))(plVar2,&local_78);
      iVar1 = local_70 - local_78;
      iVar3 = local_6c - local_74;
      if ((iVar1 != 0) && (iVar3 != 0)) {
        local_78 = local_78 + (int)local_68;
        local_74 = local_74 + local_68._4_4_;
        local_70 = local_78 + iVar1;
        local_6c = local_74 + iVar3;
        if ((param_3 < (double)local_78) ||
           ((((double)local_70 < param_3 || (param_4 < (double)local_74)) ||
            ((double)local_6c < param_4)))) {
          cVar4 = '\0';
        }
        else {
          cVar4 = '\x01';
        }
        if (cVar4 != '\0') {
          return cVar4;
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return cVar4;
}

