/* Ghidra address: 01053f40 */
/* Ghidra symbol: FUN_01053f40 */


void FUN_01053f40(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  uVar4 = FUN_017105e0(0);
  FUN_00414b50(&local_30,L"[MCU]");
  uVar5 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00414b50(&local_38,L"PIC16");
  FUN_01717260(uVar4,uVar5,local_30,local_38,4,0);
  uVar6 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00414b50(&local_38,L"PIC18");
  FUN_01717260(uVar4,uVar6,local_30,local_38,4,0);
  uVar7 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00414b50(&local_38,&DAT_01054370);
  FUN_01717260(uVar4,uVar7,local_30,local_38,4,0);
  uVar8 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00414b50(&local_38,L"i8051");
  uVar3 = 0;
  FUN_01717260(uVar4,uVar8,local_30,local_38,4,0);
  plVar9 = (longlong *)FUN_007fc180(&PTR_FUN_00fd7718,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_00fd82f0(plVar9,uVar5,uVar6,uVar7,uVar8,CONCAT44(uVar3,*(undefined4 *)(param_1 + 0x9a0)),
               *(undefined8 *)(param_1 + 0x9b0),*(undefined8 *)(param_1 + 0x9b8));
  iVar2 = (**(code **)(*plVar9 + 0x2d0))(plVar9);
  if (iVar2 != 1) goto LAB_010542a1;
  FUN_00fd84f0(plVar9,&local_40);
  iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x9b0),local_40);
  if (iVar2 == 0) {
    iVar2 = FUN_00fd84e0(plVar9);
    if (*(int *)(param_1 + 0x9a0) != iVar2) goto LAB_01054195;
    bVar1 = false;
  }
  else {
LAB_01054195:
    bVar1 = true;
  }
  if (bVar1) {
    uVar4 = FUN_00b89270();
    FUN_0041ddd0(&local_50,PTR_PTR_02002890);
    FUN_00b8e650(uVar4,&local_48,L"HDLStrings.Msg_FC_DeviceChanged",local_50);
    iVar2 = FUN_0072d440(local_48,3,0xb,0);
    if (iVar2 == 6) {
      FUN_0104f160(param_1,param_2);
      uVar4 = FUN_00fd8520(plVar9);
      *(undefined8 *)(param_1 + 0x9b8) = uVar4;
      FUN_00fd84f0(plVar9,&local_58);
      FUN_00414ad0(param_1 + 0x9b0,local_58);
      uVar3 = FUN_00fd84e0(plVar9);
      *(undefined4 *)(param_1 + 0x9a0) = uVar3;
      _FreeSimulatorObject(*(undefined8 *)(param_1 + 0x970));
      (**(code **)(**(longlong **)(param_1 + 0x930) + 0x90))(*(longlong **)(param_1 + 0x930));
      uVar4 = FUN_00442620(&DAT_0202f42c,*(undefined8 *)(param_1 + 0x9b0));
      _CreateSimulatorObject
                (*(undefined8 *)(param_1 + 0x970),*(undefined4 *)(param_1 + 0x9a0),uVar4);
      FUN_01053210(param_1);
    }
  }
LAB_010542a1:
  FUN_00410f20(plVar9);
  FUN_01051360(param_1);
  FUN_00410f20(uVar5);
  FUN_00410f20(uVar6);
  FUN_00410f20(uVar7);
  FUN_00410f20(uVar8);
  FUN_00414560(&local_58,6);
  return;
}

