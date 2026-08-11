/* Ghidra address: 01b74f20 */
/* Ghidra symbol: FUN_01b74f20 */


void FUN_01b74f20(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  if (*(longlong *)(param_1 + 0x748) != 0) {
    iVar2 = FUN_00414f50(*(undefined8 *)(param_1 + 0x748),&DAT_01b750fc,
                         (ulonglong)**(byte **)(param_1 + 0x748) + 1);
    if (iVar2 != 0) {
      iVar2 = FUN_00414f50(*(undefined8 *)(param_1 + 0x748),
                           "&{6A65B724-CD3D-4588-A748-E6453AA5351A}",
                           (ulonglong)**(byte **)(param_1 + 0x748) + 1);
      if (iVar2 != 0) {
        plVar1 = *(longlong **)(param_1 + 0x6f8);
        uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
        (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_28,uVar3);
        FUN_00416cd0(local_20,3,L"Do you want to delete the \"",local_28,L"\" color scheme?");
        iVar2 = FUN_0072d440(local_20[0],3,0xc,0);
        if (iVar2 == 1) {
          FUN_004095f0(*(undefined8 *)(param_1 + 0x748));
          *(undefined8 *)(param_1 + 0x748) = 0;
          plVar1 = *(longlong **)(param_1 + 0x6f8);
          uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
          (**(code **)(*(longlong *)plVar1[0x94] + 0x98))((longlong *)plVar1[0x94],uVar3);
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f8) + 0x4a0);
          iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
          if (0 < iVar2) {
            (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x268))
                      (*(longlong **)(param_1 + 0x6f8),1);
          }
          FUN_01b74210(param_1,0);
        }
        goto LAB_01b750cb;
      }
    }
    FUN_0072d440(L"You cannot delete a system color scheme",1,4,0);
  }
LAB_01b750cb:
  FUN_00414560(&local_28,2);
  return;
}

