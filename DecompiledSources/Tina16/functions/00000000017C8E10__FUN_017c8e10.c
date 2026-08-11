/* Ghidra address: 017c8e10 */
/* Ghidra symbol: FUN_017c8e10 */


double * FUN_017c8e10(double *param_1,longlong param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  double dVar6;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  double local_58;
  double local_50;
  double local_48;
  double local_40 [2];
  
  cVar1 = *param_3;
  if (cVar1 == '\x02') {
    pcVar5 = (char *)FUN_01b05ad0(*(undefined8 *)(param_3 + 0x10),2,0,&local_59,&local_5a,&local_5b)
    ;
    if ((*(char *)(param_2 + 0x339) == '\0') || (*pcVar5 != '\x01')) {
      iVar2 = FUN_01b05690(*(undefined8 *)(param_3 + 0x10),1,1);
      local_48 = *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar2 * 8);
      local_40[0] = *(double *)(*(longlong *)(param_2 + 0x120) + (longlong)iVar2 * 8);
    }
    else {
      local_48 = *(double *)PTR_DAT_020025e0;
      local_40[0] = *(double *)(PTR_DAT_020025e0 + 8);
    }
  }
  else if (cVar1 == '\x04') {
    pcVar5 = (char *)FUN_01b05ad0(*(undefined8 *)(param_3 + 0x10),3,0,&local_59,&local_5a,&local_5b)
    ;
    if ((*(char *)(param_2 + 0x339) == '\0') || (*pcVar5 != '\x01')) {
      iVar2 = FUN_01b05690(*(undefined8 *)(param_3 + 0x10),1,1);
      local_58 = *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar2 * 8);
      local_50 = *(double *)(*(longlong *)(param_2 + 0x120) + (longlong)iVar2 * 8);
      dVar6 = (double)FUN_00c44590(&local_58);
      if (dVar6 == 0.0) {
        local_48 = *(double *)PTR_DAT_020025e0;
        local_40[0] = *(double *)(PTR_DAT_020025e0 + 8);
      }
      else {
        FUN_00c44790(PTR_DAT_02003900,&local_58,&local_58);
        FUN_00c44500(&local_58,PTR_DAT_02002618,&local_58);
        local_48 = local_58;
        local_40[0] = local_50;
      }
    }
    else {
      local_48 = *(double *)PTR_DAT_020025e0;
      local_40[0] = *(double *)(PTR_DAT_020025e0 + 8);
    }
  }
  else if (cVar1 == '\x03') {
    iVar2 = FUN_01b05600(*(undefined8 *)(param_3 + 0x10),3);
    iVar3 = FUN_01b05600(*(undefined8 *)(param_3 + 0x10),4);
    iVar4 = FUN_01b05690(*(undefined8 *)(param_3 + 0x10),1,1);
    local_58 = *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar4 * 8) * 0.5;
    local_50 = -*(double *)(*(longlong *)(param_2 + 0x120) + (longlong)iVar4 * 8) * 0.5;
    local_48 = *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar2 * 8) -
               *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar3 * 8);
    local_40[0] = *(double *)(*(longlong *)(param_2 + 0x120) + (longlong)iVar2 * 8) -
                  *(double *)(*(longlong *)(param_2 + 0x120) + (longlong)iVar3 * 8);
    FUN_00c44720(&local_58,&local_48,&local_48);
  }
  else {
    local_48 = *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)*(int *)(param_3 + 4) * 8) -
               *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)*(int *)(param_3 + 8) * 8);
    local_40[0] = *(double *)(*(longlong *)(param_2 + 0x120) + (longlong)*(int *)(param_3 + 4) * 8)
                  - *(double *)
                     (*(longlong *)(param_2 + 0x120) + (longlong)*(int *)(param_3 + 8) * 8);
  }
  FUN_017c82f0(&local_48,local_40);
  *param_1 = local_48;
  param_1[1] = local_40[0];
  return param_1;
}

