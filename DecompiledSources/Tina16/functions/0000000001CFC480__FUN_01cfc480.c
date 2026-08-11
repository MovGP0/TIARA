/* Ghidra address: 01cfc480 */
/* Ghidra symbol: FUN_01cfc480 */


void FUN_01cfc480(longlong *param_1,undefined8 param_2,undefined1 param_3,char param_4,char param_5,
                 int param_6,int param_7)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int local_30;
  int local_2c;
  
  cVar3 = FUN_01cfc450(param_1);
  if (cVar3 != '\0') {
    if (*(char *)((longlong)param_1 + 0xaa) == '\0') {
      lVar1 = param_1[1];
      if ((char)lVar1 != '\0') {
        (**(code **)(*param_1 + 0xa8))(param_1,param_2);
      }
      *(undefined1 *)((longlong)param_1 + 0xd1) = param_3;
      if (param_5 != '\0') {
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        lVar2 = param_1[2];
        local_2c = iVar5 - param_6;
        local_30 = (int)param_1[2] - param_7;
        if (param_4 == '\0') {
          FUN_01cf1450(1,0,&local_2c,&local_30,0,0);
        }
        else {
          FUN_01cf1450(3,0,&local_2c,&local_30,0,0);
        }
        *(int *)((longlong)param_1 + 0xc) = param_6 + local_2c;
        *(int *)(param_1 + 2) = param_7 + local_30;
        if (*(char *)((longlong)param_1 + 0xb) != '\0') {
          *(int *)((longlong)param_1 + 0x14) =
               *(int *)((longlong)param_1 + 0x14) + (*(int *)((longlong)param_1 + 0xc) - iVar5);
          *(int *)(param_1 + 3) = (int)param_1[3] + ((int)param_1[2] - (int)lVar2);
        }
      }
      if ((char)lVar1 != '\0') {
        (**(code **)(*param_1 + 0xa0))(param_1,param_2);
      }
    }
    else {
      uVar4 = FUN_017bf3d0(param_1);
      iVar5 = (uVar4 & 0xff) - 1;
      if (iVar5 < 0) {
        iVar5 = 3;
      }
      if (3 < iVar5) {
        iVar5 = 0;
      }
      FUN_017bf210(param_1,param_2,iVar5 % 2);
    }
  }
  return;
}

