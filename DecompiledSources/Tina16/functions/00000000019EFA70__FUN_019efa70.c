/* Ghidra address: 019efa70 */
/* Ghidra symbol: FUN_019efa70 */


undefined8 FUN_019efa70(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 local_40 [2];
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  
  local_40[0] = 0;
  local_28 = 0;
  local_30 = 0;
  iVar3 = 0;
  while ((iVar2 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x1c8))
                            (*(longlong **)(param_1 + 0x88)), iVar3 < iVar2 &&
         (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x210))
                            (*(longlong **)(param_1 + 0x88),iVar3),
         iVar2 != *(int *)(param_1 + 0xc0)))) {
    iVar3 = iVar3 + 1;
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x1c8))(*(longlong **)(param_1 + 0x88));
  if (iVar3 < iVar2) {
    FUN_019ef990(*(undefined8 *)(param_1 + 0xb0),&local_28,*(undefined8 *)(param_1 + 0x88),iVar3);
  }
  else {
    FUN_00414b50(&local_30,&DAT_019efc68);
    FUN_00414480(&local_28);
    iVar3 = FUN_01cfd2d0();
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        cVar1 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x2d0))
                          (*(longlong **)(param_1 + 0x88),iVar2,&local_20);
        if (cVar1 == '\t') {
          if ((-1 < *(short *)(local_20 + 0x1f)) &&
             (*(int *)(param_1 + 0xc0) == (int)*(short *)(local_20 + 0x1f))) {
            FUN_00414b50(&local_28,local_30);
          }
          FUN_00414b50(&local_30,&DAT_019efc7c);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  if (local_28 == 0) {
    FUN_0043f750(local_40,*(undefined4 *)(param_1 + 0xc0));
    FUN_00416ba0(param_2,&LAB_019efc90,local_40[0]);
  }
  else {
    FUN_00414ad0(param_2,local_28);
  }
  FUN_00414480(local_40);
  FUN_00414560(&local_30,2);
  return param_2;
}

