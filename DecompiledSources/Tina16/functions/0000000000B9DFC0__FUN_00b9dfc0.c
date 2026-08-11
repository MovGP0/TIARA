/* Ghidra address: 00b9dfc0 */
/* Ghidra symbol: FUN_00b9dfc0 */


void FUN_00b9dfc0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                 longlong *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *local_res10 [3];
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40 [2];
  longlong *local_30;
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = (longlong *)0x0;
  local_30 = (longlong *)0x0;
  local_res10[0] = param_2;
  local_70 = param_3;
  local_68 = param_4;
  FUN_0041b910(param_2);
  FUN_0041b910(param_5);
  iVar1 = FUN_00416db0(local_68,&LAB_00b9e238);
  iVar2 = (**(code **)(*local_res10[0] + 0x18))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*local_res10[0] + 0x20))(local_res10[0],local_40,iVar4);
      (**(code **)(*local_40[0] + 0xd8))(local_40[0],&local_30,local_70);
      if (local_30 != (longlong *)0x0) {
        if (iVar1 == 0) {
          (**(code **)(*local_res10[0] + 0x20))(local_res10[0],&local_48,iVar4);
          (**(code **)(*param_5 + 0x30))(param_5,local_48);
        }
        else {
          FUN_00b9de20(auStack_98,&local_50,local_30);
          FUN_0041b840(&local_30,local_50);
          if (local_30 != (longlong *)0x0) {
            (**(code **)(*local_30 + 0x50))(local_30,&local_58);
            iVar3 = FUN_00416db0(local_58,local_68);
            if (iVar3 == 0) {
              (**(code **)(*local_res10[0] + 0x20))(local_res10[0],&local_60,iVar4);
              (**(code **)(*param_5 + 0x30))(param_5,local_60);
            }
          }
        }
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_0041b800(&local_60);
  FUN_00414480(&local_58);
  FUN_00417840(&local_50,&DAT_00b9f8e0,3);
  FUN_0041b800(&local_30);
  FUN_0041b800(local_res10);
  FUN_0041b800(&param_5);
  return;
}

