/* Ghidra address: 00f74ae0 */
/* Ghidra symbol: FUN_00f74ae0 */


longlong FUN_00f74ae0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
                     int *param_5,int *param_6)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong local_60;
  int local_54;
  int local_50;
  int local_4c;
  undefined1 local_48 [24];
  
  local_60 = 0;
  *param_5 = -1;
  *param_4 = 0;
  *param_6 = 0;
  iVar4 = *(int *)(param_1 + 0x10);
  local_54 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(param_1,local_54);
      iVar5 = *(int *)(*(longlong *)(lVar2 + 0x18) + 0x10);
      local_50 = 0;
      if (-1 < iVar5 + -1) {
        do {
          lVar3 = FUN_004aeac0(*(undefined8 *)(lVar2 + 0x18),local_50);
          if ((*(char *)(lVar3 + 0x10) == '\0') &&
             (cVar1 = FUN_00f60540(*(undefined8 *)(lVar3 + 0x20),*(undefined4 *)(lVar3 + 0x2c),
                                   param_2,param_3), cVar1 != '\0')) {
            *param_4 = 2;
            return lVar2;
          }
          iVar6 = *(int *)(lVar3 + 0x74);
          local_4c = 0;
          if (-1 < iVar6 + -1) {
            do {
              FUN_00f6efb0(lVar2,local_48,lVar3,local_4c);
              cVar1 = FUN_00f60630(local_48,param_2,param_3);
              if (cVar1 != '\0') {
                *param_5 = local_4c;
                *param_4 = 1;
                *param_6 = *param_6 + 1;
                local_60 = lVar2;
              }
              local_4c = local_4c + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          local_50 = local_50 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      local_54 = local_54 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return local_60;
}

