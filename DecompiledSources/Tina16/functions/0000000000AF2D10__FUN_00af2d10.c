/* Ghidra address: 00af2d10 */
/* Ghidra symbol: FUN_00af2d10 */


void FUN_00af2d10(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  short *local_40;
  longlong local_38;
  undefined8 local_30;
  
  local_40 = (short *)0x0;
  local_30 = 0;
  local_38 = 0;
  if (((param_1[0xed] == 0) && (*(int *)((longlong)param_1 + 0x4cc) != 0)) &&
     (iVar1 = (**(code **)(*(longlong *)param_1[0xee] + 0xb0))((longlong *)param_1[0xee],param_2),
     iVar1 != 0)) {
    if (iVar1 < 0) {
      iVar2 = 0;
      iVar1 = *(int *)(*(longlong *)(param_1[0x116] + 600) + 0x10);
      if (-1 < iVar1 + -1) {
        do {
          uVar4 = FUN_00a94970(*(undefined8 *)(param_1[0x116] + 600),iVar2);
          FUN_00a94740(uVar4,&local_38);
          iVar3 = 0;
          if (local_38 != 0) {
            iVar3 = *(int *)(local_38 + -4);
          }
          if (0 < iVar3) {
            FUN_00a94740(uVar4,&local_40);
            if (*local_40 == 0x23) {
              FUN_00416ba0(&local_30,param_1[0x117],local_38);
            }
            else {
              (**(code **)(*param_1 + 0x448))(param_1,&local_30,local_38,0);
            }
            iVar3 = FUN_00416db0(param_2,local_30);
            if (iVar3 == 0) {
              FUN_00a945d0(uVar4,1);
            }
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
    else {
      (**(code **)(*(longlong *)param_1[0xee] + 0x98))((longlong *)param_1[0xee],iVar1);
    }
    (**(code **)(*(longlong *)param_1[0xee] + 200))((longlong *)param_1[0xee],0,param_2);
    iVar1 = (**(code **)(*(longlong *)param_1[0xee] + 0x28))((longlong *)param_1[0xee]);
    iVar1 = iVar1 + -1;
    if (*(int *)((longlong)param_1 + 0x4cc) <= iVar1) {
      iVar2 = (*(int *)((longlong)param_1 + 0x4cc) - iVar1) + -1;
      do {
        (**(code **)(*(longlong *)param_1[0xee] + 0x98))((longlong *)param_1[0xee],iVar1);
        iVar1 = iVar1 + -1;
        iVar2 = iVar2 + 1;
      } while (iVar2 != 0);
    }
  }
  FUN_00414560(&local_40,3);
  return;
}

