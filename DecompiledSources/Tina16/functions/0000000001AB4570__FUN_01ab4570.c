/* Ghidra address: 01ab4570 */
/* Ghidra symbol: FUN_01ab4570 */


void FUN_01ab4570(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 local_res10 [3];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_78 = 0;
  local_70 = 0;
  local_50[0] = 0;
  local_58 = 0;
  local_68 = 0;
  local_60 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  cVar3 = FUN_01ada080(*(undefined8 *)(param_1 + 0x70));
  if (cVar3 != '\0') {
    FUN_01ae9510(*(undefined8 *)(param_1 + 0x70),0,param_1);
    FUN_01ae94a0(*(undefined8 *)(param_1 + 0x70),local_30);
    FUN_01ab2940(param_1,&local_60);
    FUN_01ce7c10(&local_58,local_60);
    FUN_004168e0(&local_68,local_58);
    FUN_00b0cea0(local_50,local_68,0xfde9);
    FUN_004155b0(local_50,&DAT_01ab4888);
    FUN_00416880(&local_38,local_50[0]);
    FUN_00414480(&local_40);
    plVar5 = (longlong *)FUN_01ae9310(*(undefined8 *)(param_1 + 0x70),local_res10[0],0);
    lVar1 = *(longlong *)(param_1 + 0x60);
    FUN_00416cd0(&local_70,3,local_38,L"width",local_40);
    uVar4 = (**(code **)(*plVar5 + 0x20))
                      (plVar5,local_30[0],local_70,
                       *(undefined4 *)(*(longlong *)(lVar1 + 0x18) + 0x2c));
    FUN_005fd6d0(lVar1,uVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    FUN_00416cd0(&local_78,3,local_38,L"color",local_40);
    uVar4 = FUN_005fd4d0(uVar2);
    uVar4 = (**(code **)(*plVar5 + 0x20))(plVar5,local_30[0],local_78,uVar4);
    FUN_005fd4e0(uVar2,uVar4);
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))
              (*(longlong **)(param_1 + 0xa0),L"main",L"width",
               *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x18) + 0x2c));
    uVar4 = FUN_005fd4d0(*(undefined8 *)(param_1 + 0x60));
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))
              (*(longlong **)(param_1 + 0xa0),L"main",L"color",uVar4);
    FUN_00410f20(plVar5);
  }
  FUN_00414560(&local_78,2);
  FUN_00414520(&local_68);
  FUN_00414560(&local_60,2);
  FUN_004144d0(local_50);
  FUN_00414560(&local_40,3);
  FUN_00414480(local_res10);
  return;
}

