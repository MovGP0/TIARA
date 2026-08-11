/* Ghidra address: 01235730 */
/* Ghidra symbol: FUN_01235730 */


void FUN_01235730(longlong param_1)

{
  short sVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x9c8) + 0x260))(*(longlong **)(param_1 + 0x9c8));
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x9d0),uVar4);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x9f0),1);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x8a0),0);
  FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_020044a8 + 0x898),1);
  FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_020044a8 + 0x720),0);
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x9c0) + 0x260))(*(longlong **)(param_1 + 0x9c0));
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x8d0),uVar4);
  (**(code **)(**(longlong **)(param_1 + 0x798) + 0x278))(*(longlong **)(param_1 + 0x798));
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0x4f0);
  (**(code **)(*plVar2 + 0x78))(plVar2,L"Butterworth");
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0x4f0);
  (**(code **)(*plVar2 + 0x78))(plVar2,L"Chebyshev");
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0x4f0);
  (**(code **)(*plVar2 + 0x78))(plVar2,L"Elliptic");
  sVar1 = *(short *)(PTR_DAT_020021e8 + 0x1fa6);
  if (((sVar1 != 0x42) && (sVar1 != 0x45)) && (sVar1 != 0x43)) {
    *(undefined2 *)(PTR_DAT_020021e8 + 0x1fa6) = 0x42;
    (**(code **)(**(longlong **)(param_1 + 0x798) + 0x268))(*(longlong **)(param_1 + 0x798),0);
  }
  uVar5 = (ulonglong)*(ushort *)(PTR_DAT_020021e8 + 0x1fa6);
  if (uVar5 < 0x44) {
    if (uVar5 == 0x43) {
      (**(code **)(**(longlong **)(param_1 + 0x798) + 0x268))(*(longlong **)(param_1 + 0x798),1);
      lVar3 = *(longlong *)(param_1 + 0x798);
      plVar2 = *(longlong **)(lVar3 + 0x4f0);
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_28,1);
      FUN_0064de00(lVar3,local_28);
    }
    else if (uVar5 - 0x30 < 7) {
      FUN_00416780(&local_40,*(ushort *)(PTR_DAT_020021e8 + 0x1fa6));
      uVar4 = FUN_0043fc00(local_40);
      (**(code **)(**(longlong **)(param_1 + 0x798) + 0x268))(*(longlong **)(param_1 + 0x798),uVar4)
      ;
      lVar3 = *(longlong *)(param_1 + 0x798);
      plVar2 = *(longlong **)(lVar3 + 0x4f0);
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_48,uVar4);
      FUN_0064de00(lVar3,local_48);
    }
    else if (uVar5 - 0x30 == 0x12) {
      (**(code **)(**(longlong **)(param_1 + 0x798) + 0x268))(*(longlong **)(param_1 + 0x798),0);
      lVar3 = *(longlong *)(param_1 + 0x798);
      plVar2 = *(longlong **)(lVar3 + 0x4f0);
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_20,0);
      FUN_0064de00(lVar3,local_20);
    }
  }
  else if (uVar5 == 0x45) {
    (**(code **)(**(longlong **)(param_1 + 0x798) + 0x268))(*(longlong **)(param_1 + 0x798),2);
    lVar3 = *(longlong *)(param_1 + 0x798);
    plVar2 = *(longlong **)(lVar3 + 0x4f0);
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_30,2);
    FUN_0064de00(lVar3,local_30);
  }
  else if (uVar5 == 0x49) {
    (**(code **)(**(longlong **)(param_1 + 0x798) + 0x268))(*(longlong **)(param_1 + 0x798),3);
    lVar3 = *(longlong *)(param_1 + 0x798);
    plVar2 = *(longlong **)(lVar3 + 0x4f0);
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_38,3);
    FUN_0064de00(lVar3,local_38);
  }
  FUN_00414560(&local_48,6);
  return;
}

