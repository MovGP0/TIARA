/* Ghidra address: 00b9d0d0 */
/* Ghidra symbol: FUN_00b9d0d0 */


void FUN_00b9d0d0(undefined8 param_1,longlong *param_2,undefined8 param_3,uint param_4,char param_5,
                 longlong *param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong *local_res10 [3];
  longlong *local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  
  local_50 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  local_30 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  FUN_0041b910(param_6);
  iVar2 = FUN_00416db0(param_3,&LAB_00b9d3f8);
  if (param_4 == 2) {
    (**(code **)(*local_res10[0] + 0x18))(local_res10[0],&local_38);
  }
  else {
    (**(code **)(*local_res10[0] + 0x20))(local_res10[0],&local_38);
  }
  iVar3 = (**(code **)(*local_38 + 0x18))();
  iVar6 = 0;
  if (-1 < iVar3 + -1) {
    do {
      (**(code **)(*local_38 + 0x20))(local_38,&local_30,iVar6);
      uVar4 = (**(code **)(*local_30 + 0x48))(local_30);
      if ((uVar4 & 0xff) == param_4) {
        if (iVar2 != 0) {
          (**(code **)(*local_30 + 0x40))(local_30,&local_40);
          iVar5 = FUN_00416db0(local_40,param_3);
          if (iVar5 != 0) goto LAB_00b9d223;
        }
        (**(code **)(*param_6 + 0x30))(param_6,local_30);
      }
LAB_00b9d223:
      if ((param_5 != '\0') && (cVar1 = (**(code **)(*local_30 + 0x48))(local_30), cVar1 == '\x01'))
      {
        FUN_00b9d0d0(param_1,local_30,param_3,param_4,1,param_6);
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if ((param_5 != '\0') && (param_4 == 2)) {
    (**(code **)(*local_res10[0] + 0x20))(local_res10[0],&local_48);
    iVar2 = (**(code **)(*local_48 + 0x18))();
    iVar3 = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(*local_res10[0] + 0x20))(local_res10[0],&local_50);
        (**(code **)(*local_50 + 0x20))(local_50,&local_30,iVar3);
        cVar1 = (**(code **)(*local_30 + 0x48))(local_30);
        if (cVar1 == '\x01') {
          FUN_00b9d0d0(param_1,local_30,param_3,2,1,param_6);
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00417840(&local_50,&DAT_00b9f960,2);
  FUN_00414480(&local_40);
  FUN_0041b800(&local_38);
  FUN_0041b800(&local_30);
  FUN_0041b800(local_res10);
  FUN_0041b800(&param_6);
  return;
}

