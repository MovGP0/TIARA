/* Ghidra address: 00b9dbf0 */
/* Ghidra symbol: FUN_00b9dbf0 */


void FUN_00b9dbf0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                 char param_5,longlong *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *local_res10 [3];
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong *local_40 [2];
  longlong *local_30;
  
  local_58 = 0;
  local_50 = 0;
  local_40[0] = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_30 = (longlong *)0x0;
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  FUN_0041b910(param_6);
  iVar1 = FUN_00416db0(param_4,&LAB_00b9de14);
  iVar2 = (**(code **)(*local_res10[0] + 0x18))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*local_res10[0] + 0x20))(local_res10[0],&local_48,iVar4);
      (**(code **)(*local_48 + 0x18))(local_48,local_40);
      (**(code **)(*local_40[0] + 0x60))(local_40[0],&local_30,param_3);
      if (local_30 != (longlong *)0x0) {
        if (iVar1 != 0) {
          (**(code **)(*local_30 + 0x50))(local_30,&local_50);
          iVar3 = FUN_00416db0(local_50,param_4);
          if ((iVar3 == 0) == (bool)param_5) goto LAB_00b9dd50;
        }
        (**(code **)(*local_res10[0] + 0x20))(local_res10[0],&local_58,iVar4);
        (**(code **)(*param_6 + 0x30))(param_6,local_58);
      }
LAB_00b9dd50:
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_0041b800(&local_58);
  FUN_00414480(&local_50);
  FUN_0041b800(&local_48);
  FUN_0041b800(local_40);
  FUN_0041b800(&local_30);
  FUN_0041b800(local_res10);
  FUN_0041b800(&param_6);
  return;
}

