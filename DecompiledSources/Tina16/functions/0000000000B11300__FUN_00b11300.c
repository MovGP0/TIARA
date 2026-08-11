/* Ghidra address: 00b11300 */
/* Ghidra symbol: FUN_00b11300 */


void FUN_00b11300(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_40 = 0;
  local_38 = *param_4;
  uStack_30 = param_4[1];
  if (*(char *)((longlong)param_1 + 0x524) != '\0') {
    if ((param_2 == 0) && ((int)param_1[0x98] + -1 < param_3)) {
      FUN_00468530(&local_60,param_3 - (int)param_1[0x98],0xfffffffffffffffc);
      lVar3 = FUN_00b13190(param_1[0xc0],&local_60,0);
    }
    else {
      lVar3 = 0;
    }
    if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0x30) == 0)) {
      (**(code **)(*param_1 + 0x2d8))(param_1,&local_40,param_2,param_3);
    }
    else {
      FUN_00414b50(&local_40,*(undefined8 *)(lVar3 + 0x30));
    }
    plVar4 = (longlong *)FUN_00781840();
    cVar1 = (**(code **)(*plVar4 + 0x98))(plVar4);
    if (cVar1 == '\0') {
      iVar2 = 2;
    }
    else {
      iVar2 = 4;
    }
    (**(code **)(*(longlong *)param_1[0x92] + 0x130))
              ((longlong *)param_1[0x92],&local_38,(int)local_38 + iVar2,local_38._4_4_ + 2,local_40
              );
  }
  FUN_0084a0b0(param_1,param_2,param_3,&local_38,param_5);
  FUN_00460ba0(&local_60);
  FUN_00414480(&local_40);
  return;
}

