/* Ghidra address: 01b98d50 */
/* Ghidra symbol: FUN_01b98d50 */


void FUN_01b98d50(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                 char param_5)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40 [2];
  
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50[0] = 0;
  local_40[0] = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00414b50(local_40,**(undefined8 **)(param_2 + 0x18));
  plVar3 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0x7e0));
  iVar1 = (**(code **)(*plVar3 + 0xb0))(plVar3,local_res18);
  if (-1 < iVar1) {
    plVar3 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0x7e0));
    (**(code **)(*plVar3 + 0x48))(plVar3,iVar1,1);
    plVar3 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x880) + 0x30))
                       (*(longlong **)(param_1 + 0x880),iVar1);
    (**(code **)(*plVar3 + 0x38))(plVar3,local_50);
    FUN_004170c0(&DAT_01b98fd8,local_50[0],1);
    FUN_00416cd0(&local_58,3,&DAT_01b98fec,local_res20,&LAB_01b99000);
    (**(code **)(*plVar3 + 0x38))(plVar3,&local_60);
    iVar1 = FUN_004170c0(local_58,local_60,1);
    iVar2 = 1;
    iVar4 = 0;
    if (1 < iVar1) {
      do {
        (**(code **)(*plVar3 + 0x38))(plVar3,&local_68);
        iVar2 = FUN_004170c0(&DAT_01b98fd8,local_68,iVar2);
        iVar2 = iVar2 + 2;
        iVar4 = iVar4 + 1;
      } while (iVar2 < iVar1);
    }
    do {
      iVar4 = iVar4 + 1;
      iVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
      if (iVar1 <= iVar4) break;
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_78,iVar4);
      FUN_0043ea00(&local_70,local_78);
    } while (local_70 != 0);
    (**(code **)(*plVar3 + 200))(plVar3,iVar4,local_40[0]);
    if (param_5 == '\0') {
      FUN_01b984f0(param_1,param_2);
    }
  }
  FUN_00414560(&local_78,6);
  FUN_00414480(local_40);
  FUN_00414560(&local_res18,2);
  return;
}

