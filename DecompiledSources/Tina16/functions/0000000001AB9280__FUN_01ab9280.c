/* Ghidra address: 01ab9280 */
/* Ghidra symbol: FUN_01ab9280 */


void FUN_01ab9280(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  cVar3 = FUN_01ada080(*(undefined8 *)(param_1 + 0x60));
  if (cVar3 != '\0') {
    FUN_005dce70(*(undefined8 *)(param_1 + 0x68));
    lVar1 = *(longlong *)(param_1 + 0x78);
    FUN_00416ba0(&local_20,local_res18,L"width");
    iVar4 = (**(code **)(*param_4 + 0x20))
                      (param_4,local_res10,local_20,
                       *(undefined4 *)(*(longlong *)(lVar1 + 0x18) + 0x2c));
    if (*(int *)(*(longlong *)(lVar1 + 0x18) + 0x2c) != iVar4) {
      lVar1 = *(longlong *)(param_1 + 0x78);
      FUN_00416ba0(&local_28,local_res18,L"width");
      uVar5 = (**(code **)(*param_4 + 0x20))
                        (param_4,local_res10,local_28,
                         *(undefined4 *)(*(longlong *)(lVar1 + 0x18) + 0x2c));
      FUN_005fd6d0(lVar1,uVar5);
      (**(code **)(**(longlong **)(param_1 + 0x68) + 0x28))
                (*(longlong **)(param_1 + 0x68),L"main",L"width",
                 *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x18) + 0x2c));
    }
    iVar4 = FUN_005fd4d0(*(undefined8 *)(param_1 + 0x78));
    FUN_00416ba0(&local_30,local_res18,L"color");
    uVar5 = FUN_005fd4d0(*(undefined8 *)(param_1 + 0x78));
    iVar6 = (**(code **)(*param_4 + 0x20))(param_4,local_res10,local_30,uVar5);
    if (iVar4 != iVar6) {
      uVar2 = *(undefined8 *)(param_1 + 0x78);
      FUN_00416ba0(&local_38,local_res18,L"color");
      uVar5 = FUN_005fd4d0(uVar2);
      uVar5 = (**(code **)(*param_4 + 0x20))(param_4,local_res10,local_38,uVar5);
      uVar5 = FUN_01a90ee0(uVar5);
      FUN_005fd4e0(uVar2,uVar5);
      uVar5 = FUN_005fd4d0(*(undefined8 *)(param_1 + 0x78));
      (**(code **)(**(longlong **)(param_1 + 0x68) + 0x28))
                (*(longlong **)(param_1 + 0x68),L"main",L"color",uVar5);
    }
  }
  FUN_00414560(&local_38,4);
  FUN_00414560(&local_res10,2);
  return;
}

