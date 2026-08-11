/* Ghidra address: 01235b70 */
/* Ghidra symbol: FUN_01235b70 */


void FUN_01235b70(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  ulonglong uVar4;
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
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x9c8) + 0x260))(*(longlong **)(param_1 + 0x9c8));
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x9d0),uVar3);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x8a0),1);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x9f0),0);
  FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_020044a8 + 0x720),1);
  FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_020044a8 + 0x898),0);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x9c0) + 0x260))(*(longlong **)(param_1 + 0x9c0));
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x8d0),uVar3);
  (**(code **)(**(longlong **)(param_1 + 0x798) + 0x278))(*(longlong **)(param_1 + 0x798));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0x4f0);
  (**(code **)(*plVar1 + 0x78))(plVar1,L"Butterworth");
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0x4f0);
  (**(code **)(*plVar1 + 0x78))(plVar1,L"Chebyshev");
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0x4f0);
  (**(code **)(*plVar1 + 0x78))(plVar1,L"Elliptic");
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0x4f0);
  (**(code **)(*plVar1 + 0x78))(plVar1,L"Inverse Chebyshev");
  uVar4 = (ulonglong)*(ushort *)(PTR_DAT_020021e8 + 0x1fa6);
  if (uVar4 < 0x44) {
    if (uVar4 == 0x43) {
      (**(code **)(**(longlong **)(param_1 + 0x798) + 0x268))(*(longlong **)(param_1 + 0x798),1);
      lVar2 = *(longlong *)(param_1 + 0x798);
      plVar1 = *(longlong **)(lVar2 + 0x4f0);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_28,1);
      FUN_0064de00(lVar2,local_28);
    }
    else if (uVar4 - 0x30 < 7) {
      FUN_00416780(&local_40,*(ushort *)(PTR_DAT_020021e8 + 0x1fa6));
      uVar3 = FUN_0043fc00(local_40);
      (**(code **)(**(longlong **)(param_1 + 0x798) + 0x268))(*(longlong **)(param_1 + 0x798),uVar3)
      ;
      lVar2 = *(longlong *)(param_1 + 0x798);
      plVar1 = *(longlong **)(lVar2 + 0x4f0);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_48,uVar3);
      FUN_0064de00(lVar2,local_48);
    }
    else if (uVar4 - 0x30 == 0x12) {
      (**(code **)(**(longlong **)(param_1 + 0x798) + 0x268))(*(longlong **)(param_1 + 0x798),0);
      lVar2 = *(longlong *)(param_1 + 0x798);
      plVar1 = *(longlong **)(lVar2 + 0x4f0);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_20,0);
      FUN_0064de00(lVar2,local_20);
    }
  }
  else if (uVar4 == 0x45) {
    (**(code **)(**(longlong **)(param_1 + 0x798) + 0x268))(*(longlong **)(param_1 + 0x798),2);
    lVar2 = *(longlong *)(param_1 + 0x798);
    plVar1 = *(longlong **)(lVar2 + 0x4f0);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_30,2);
    FUN_0064de00(lVar2,local_30);
  }
  else if (uVar4 == 0x49) {
    (**(code **)(**(longlong **)(param_1 + 0x798) + 0x268))(*(longlong **)(param_1 + 0x798),3);
    lVar2 = *(longlong *)(param_1 + 0x798);
    plVar1 = *(longlong **)(lVar2 + 0x4f0);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_38,3);
    FUN_0064de00(lVar2,local_38);
  }
  FUN_00414560(&local_48,6);
  return;
}

