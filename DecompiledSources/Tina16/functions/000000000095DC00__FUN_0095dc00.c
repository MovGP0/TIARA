/* Ghidra address: 0095dc00 */
/* Ghidra symbol: FUN_0095dc00 */


undefined4 FUN_0095dc00(longlong *param_1,longlong *param_2,int *param_3,char *param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int local_2c;
  
  uVar2 = 0;
  *param_4 = '\0';
  cVar1 = *(char *)((longlong)param_1 + 0x2a);
  if (cVar1 == '\0') {
    uVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3,0,param_4);
  }
  else if (cVar1 == '\x01') {
    uVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3,1,param_4);
  }
  else if (cVar1 == '\x02') {
    uVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3,0,param_4);
    if ((char)uVar2 != '\0') {
      local_2c = *param_3;
      while (((iVar3 = (**(code **)(*param_2 + 0x38))(param_2), local_2c < iVar3 &&
              (cVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2,&local_2c,0,param_4),
              cVar1 != '\0')) && (*param_3 != local_2c))) {
        *param_3 = local_2c;
      }
    }
  }
  else if ((cVar1 == '\x03') &&
          (uVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3,1,param_4),
          (char)uVar2 != '\0')) {
    local_2c = *param_3;
    while (((iVar3 = (**(code **)(*param_2 + 0x38))(param_2), local_2c < iVar3 &&
            (cVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2,&local_2c,0,param_4),
            cVar1 != '\0')) && (*param_3 != local_2c))) {
      *param_3 = local_2c;
    }
  }
  if (*param_4 != '\0') {
    uVar2 = 0;
  }
  return uVar2;
}

