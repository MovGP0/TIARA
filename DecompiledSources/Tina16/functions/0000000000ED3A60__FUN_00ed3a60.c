/* Ghidra address: 00ed3a60 */
/* Ghidra symbol: FUN_00ed3a60 */


void FUN_00ed3a60(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_24;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30 = 0;
  local_20[0] = 0;
  *(undefined4 *)(param_1 + 0x910) = 0xffffffff;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x748) + 0x4a0);
  iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (0 < iVar3) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x750) + 0x4a0);
    iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
    if (0 < iVar3) {
      plVar1 = *(longlong **)(param_1 + 0x750);
      uVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
      (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_30,uVar4);
      FUN_00ea9ca0(local_20,local_30);
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0x260))
                        (*(longlong **)(param_1 + 0x7a0));
      if (cVar2 != '\0') {
        plVar1 = *(longlong **)(param_1 + 0x748);
        uVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
        (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_38,uVar4);
        iVar3 = FUN_00416db0(*(undefined8 *)(param_1 + 0x8f0),local_38);
        if (iVar3 != 0) {
          cVar2 = FUN_00c40990(*(undefined8 *)PTR_DAT_02004440,local_20[0],param_1 + 0x7e0,&local_24
                              );
          if (cVar2 != '\0') {
            *(undefined4 *)(param_1 + 0x910) = local_24;
          }
          goto LAB_00ed3c0d;
        }
      }
      cVar2 = FUN_01cf1650(local_20[0],*(undefined8 *)(param_1 + 0x898),&local_24);
      if (cVar2 != '\0') {
        *(undefined4 *)(param_1 + 0x910) = local_24;
      }
      plVar1 = *(longlong **)(param_1 + 0x7e0);
      if (plVar1 != *(longlong **)(param_1 + 0x8a0)) {
        (**(code **)(*plVar1 + 0x10))(plVar1,*(longlong **)(param_1 + 0x8a0));
      }
    }
  }
LAB_00ed3c0d:
  FUN_00ed3870(param_1);
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  return;
}

