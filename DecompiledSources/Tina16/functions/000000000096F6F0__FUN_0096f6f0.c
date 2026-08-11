/* Ghidra address: 0096f6f0 */
/* Ghidra symbol: FUN_0096f6f0 */


undefined8 FUN_0096f6f0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_30;
  
  local_30 = 0;
  lVar1 = *param_1;
  uVar2 = (**(code **)(*param_1 + 0x40))(param_1);
  uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
  uVar4 = (**(code **)(*param_1 + 0x50))(param_1);
  uVar5 = (**(code **)(*param_1 + 0x58))(param_1);
  uVar6 = (**(code **)(*param_1 + 0x60))(param_1);
  uVar7 = (**(code **)(*param_1 + 8))(param_1);
  uVar8 = (**(code **)(*param_1 + 0x10))(param_1);
  uVar9 = (**(code **)(*param_1 + 0x18))(param_1);
  uVar10 = (**(code **)(*param_1 + 0x20))(param_1);
  uVar11 = (**(code **)(*param_1 + 0x28))(param_1);
  (**(code **)(*param_1 + 0x68))(param_1,&local_30);
  uVar12 = (**(code **)(*param_1 + 0x30))(param_1);
  uVar13 = (**(code **)(*param_1 + 0x38))(param_1);
  uVar2 = (**(code **)(lVar1 + 0x70))
                    (lVar1,1,param_2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
                     local_30,uVar12,uVar13);
  FUN_00414520(&local_30);
  return uVar2;
}

