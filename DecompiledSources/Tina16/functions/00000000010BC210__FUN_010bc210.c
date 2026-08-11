/* Ghidra address: 010bc210 */
/* Ghidra symbol: FUN_010bc210 */


void FUN_010bc210(longlong *param_1,undefined8 param_2,undefined8 *param_3,char param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  
  local_48 = *param_3;
  local_40 = param_3[1];
  (**(code **)(*param_1 + 0x50))(param_1,param_2,&local_58);
  cVar1 = (char)param_1[7];
  iVar2 = (int)local_48;
  iVar3 = local_48._4_4_;
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      iVar2 = (int)local_40 - (local_50 - local_58);
    }
    else if (cVar1 == '\x03') {
      iVar3 = local_40._4_4_ - (local_4c - local_54);
    }
    else {
      iVar2 = *(int *)((longlong)param_1 + 0xc);
      iVar3 = (int)param_1[2];
      if (cVar1 == '\x04') {
        iVar2 = (int)local_40 - (local_50 - local_58);
        iVar3 = local_40._4_4_ - (local_4c - local_54);
      }
    }
  }
  if ((iVar2 != *(int *)((longlong)param_1 + 0xc)) || (iVar3 != (int)param_1[2])) {
    if (param_4 == '\0') {
      (**(code **)(*param_1 + 0xe8))(param_1,param_2,iVar2,iVar3);
    }
    else {
      *(int *)((longlong)param_1 + 0xc) = iVar2;
      *(int *)(param_1 + 2) = iVar3;
    }
  }
  return;
}

