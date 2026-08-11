/* Ghidra address: 01991f70 */
/* Ghidra symbol: FUN_01991f70 */


void FUN_01991f70(longlong param_1,longlong *param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_40;
  undefined4 local_3c [3];
  
  cVar1 = FUN_0198a580(param_2);
  if (cVar1 == '\x04') {
    FUN_012bf110(*(undefined8 *)(param_1 + 0xd8),param_2);
  }
  iVar2 = (**(code **)(*param_2 + 0x1c8))(param_2);
  iVar3 = 0;
  iVar4 = iVar2;
  if (-1 < iVar2 + -1) {
    do {
      cVar1 = (**(code **)(*param_2 + 0x1d8))(param_2,iVar3);
      if (cVar1 == '\0') {
        if (param_3 == '\0') {
          (**(code **)(*param_2 + 0x1f0))(param_2,iVar3,local_3c,&local_40);
        }
        else {
          (**(code **)(*param_2 + 0x1f0))(param_2,-1 - iVar3,local_3c,&local_40);
        }
        FUN_01991dd0(param_1,param_2,local_3c[0],local_40);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = (**(code **)(*param_2 + 0x1d0))();
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      cVar1 = (**(code **)(*param_2 + 0x1d8))(param_2,iVar2 + iVar3);
      if (cVar1 == '\0') {
        if (param_3 == '\0') {
          (**(code **)(*param_2 + 0x1f0))(param_2,iVar2 + iVar3,local_3c,&local_40);
        }
        else {
          (**(code **)(*param_2 + 0x1f0))(param_2,-1 - (iVar2 + iVar3),local_3c,&local_40);
        }
        FUN_01991dd0(param_1,param_2,local_3c[0],local_40);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

