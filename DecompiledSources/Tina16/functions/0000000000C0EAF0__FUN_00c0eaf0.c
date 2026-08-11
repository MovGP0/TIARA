/* Ghidra address: 00c0eaf0 */
/* Ghidra symbol: FUN_00c0eaf0 */


undefined8 FUN_00c0eaf0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = *param_3;
  FUN_00414480(param_2);
  iVar4 = local_20._4_4_;
  if ((0 < local_20._4_4_) &&
     (iVar3 = (**(code **)(*(longlong *)param_1[0x9d] + 0x28))((longlong *)param_1[0x9d]),
     iVar4 <= iVar3)) {
    (**(code **)(*(longlong *)param_1[0x9d] + 0x18))
              ((longlong *)param_1[0x9d],&local_28,local_20._4_4_ + -1);
    iVar4 = 0;
    if (local_28 != 0) {
      iVar4 = *(int *)(local_28 + -4);
    }
    if (iVar4 < 1) {
      bVar1 = false;
    }
    else if ((int)local_20 < 1) {
      bVar1 = false;
    }
    else {
      iVar4 = 0;
      if (local_28 != 0) {
        iVar4 = *(int *)(local_28 + -4);
      }
      bVar1 = (int)local_20 <= iVar4;
    }
    if ((bVar1) &&
       (cVar2 = (**(code **)(*param_1 + 0x360))
                          (param_1,*(undefined2 *)(local_28 + -2 + (longlong)(int)local_20 * 2)),
       cVar2 != '\0')) {
      iVar4 = (int)local_20;
      while ((1 < iVar4 &&
             (cVar2 = (**(code **)(*param_1 + 0x360))
                                (param_1,*(undefined2 *)(local_28 + -2 + (longlong)(iVar4 + -1) * 2)
                                ), cVar2 != '\0'))) {
        iVar4 = iVar4 + -1;
      }
      iVar3 = (int)local_20;
      do {
        iVar3 = iVar3 + 1;
        iVar5 = 0;
        if (local_28 != 0) {
          iVar5 = *(int *)(local_28 + -4);
        }
      } while ((iVar3 <= iVar5) &&
              (cVar2 = (**(code **)(*param_1 + 0x360))
                                 (param_1,*(undefined2 *)(local_28 + -2 + (longlong)iVar3 * 2)),
              cVar2 != '\0'));
      FUN_00416dc0(param_2,local_28,iVar4,iVar3 - iVar4);
    }
  }
  FUN_00414480(&local_28);
  return param_2;
}

