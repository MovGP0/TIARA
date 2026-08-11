/* Ghidra address: 01781ab0 */
/* Ghidra symbol: FUN_01781ab0 */


void FUN_01781ab0(longlong param_1,longlong param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_40 = 0;
  local_38 = *param_4;
  uStack_30 = param_4[1];
  plVar1 = *(longlong **)(param_2 + 0x4b8);
  (**(code **)(*plVar1 + 0xa8))(plVar1,&local_38);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x4a0);
  lVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,param_3);
  if ((*(byte *)(lVar3 + 0x145) & 4) == 0) {
    FUN_005fce70(plVar1[0xe],0);
  }
  else {
    FUN_005fce70(plVar1[0xe],1);
  }
  (**(code **)(**(longlong **)(param_2 + 0x4a0) + 0x18))
            (*(longlong **)(param_2 + 0x4a0),&local_40,param_3);
  (**(code **)(*plVar1 + 0x120))(plVar1,(int)local_38 + 2,local_38._4_4_,local_40);
  FUN_00414480(&local_40);
  return;
}

