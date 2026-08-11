/* Ghidra address: 00bb0420 */
/* Ghidra symbol: FUN_00bb0420 */


void FUN_00bb0420(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_70 = 0;
  local_78 = 0;
  local_60 = (longlong *)0x0;
  local_68 = (longlong *)0x0;
  local_58 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_50 = (longlong *)0x0;
  local_40 = (longlong *)0x0;
  local_30[0] = 0;
  local_38 = 0;
  (**(code **)(*param_2 + 0x50))(param_2,0);
  (**(code **)*param_1)(param_1,&local_38);
  FUN_00416ba0(local_30,&DAT_00bb0774,local_38);
  (**(code **)(*param_2 + 0x90))(param_2,local_30[0]);
  cVar1 = FUN_00bae3b0(param_1);
  if (cVar1 != '\0') {
    FUN_00baec20(param_1,&local_40);
    iVar2 = (**(code **)(*local_40 + 0x18))();
    iVar3 = 0;
    if (-1 < iVar2 + -1) {
      do {
        FUN_00baec20(param_1,&local_50);
        (**(code **)(*local_50 + 0x20))(local_50,&local_48,iVar3);
        (**(code **)(*local_48 + 200))(local_48,param_2);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  cVar1 = FUN_00baeff0(param_1);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
    if (cVar1 == '\x02') {
      (**(code **)(*param_2 + 0x90))(param_2,&DAT_00bb0784);
    }
    (**(code **)(*param_2 + 0x90))(param_2,&DAT_00bb0794);
    goto LAB_00bb0696;
  }
  (**(code **)(*param_2 + 0x90))(param_2,&DAT_00bb07a8);
  FUN_00baf6a0(param_1,param_2);
  cVar1 = FUN_00baeff0(param_1);
  if (cVar1 != '\0') {
    FUN_00baec70(param_1,&local_58);
    iVar2 = (**(code **)(*local_58 + 0x18))(local_58);
    if (iVar2 == 1) {
      FUN_00baec70(param_1,&local_68);
      (**(code **)(*local_68 + 0x20))(local_68,&local_60,0);
      cVar1 = (**(code **)(*local_60 + 0x48))(local_60);
      if (cVar1 == '\x03') goto LAB_00bb064a;
    }
    (**(code **)(*param_2 + 0x50))(param_2,0);
  }
LAB_00bb064a:
  (**(code **)*param_1)(param_1,&local_78);
  FUN_00416cd0(&local_70,3,&DAT_00bb07b8,local_78,&DAT_00bb07a8);
  (**(code **)(*param_2 + 0x90))(param_2,local_70);
LAB_00bb0696:
  FUN_00414560(&local_78,2);
  FUN_0041b800(&local_68);
  FUN_0041b800(&local_60);
  FUN_0041b800(&local_58);
  FUN_0041b800(&local_50);
  FUN_0041b800(&local_48);
  FUN_0041b800(&local_40);
  FUN_00414560(&local_38,2);
  return;
}

