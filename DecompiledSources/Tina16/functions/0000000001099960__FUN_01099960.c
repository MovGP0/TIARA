/* Ghidra address: 01099960 */
/* Ghidra symbol: FUN_01099960 */


longlong * FUN_01099960(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong local_res10 [3];
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  longlong local_40 [2];
  
  local_58 = 0;
  local_50[0] = 0;
  local_40[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_0043e1a0(local_50,local_res10[0]);
  FUN_00414b50(local_res10,local_50[0]);
  iVar6 = 0;
  if (local_res10[0] != 0) {
    iVar6 = *(int *)(local_res10[0] + -4);
  }
  if ((param_1 != (longlong *)0x0) && (0 < iVar6)) {
    iVar2 = (**(code **)(*param_1 + 0x28))();
    iVar7 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar4 = (**(code **)(*param_1 + 0x30))(param_1,iVar7);
        cVar1 = FUN_004113d0(uVar4,&PTR_FUN_00bbdc60);
        if (cVar1 != '\0') {
          local_60 = (longlong *)(**(code **)(*param_1 + 0x30))(param_1,iVar7);
          (**(code **)(*local_60 + 0xa0))(local_60,&local_58);
          FUN_0043e1a0(local_40,local_58);
          iVar3 = FUN_004170c0(&DAT_01099b64,local_40[0],1);
          if (0 < iVar3) {
            FUN_00416e20(local_40,1,iVar3);
            iVar3 = FUN_004170c0(local_res10[0],local_40[0],1);
            if (0 < iVar3) {
              iVar5 = 0;
              if (local_40[0] != 0) {
                iVar5 = *(int *)(local_40[0] + -4);
              }
              if ((iVar5 < iVar3 + iVar6) ||
                 (*(short *)(local_40[0] + -2 + (longlong)(iVar3 + iVar6) * 2) == 0x3b))
              goto LAB_01099aeb;
            }
          }
        }
        iVar7 = iVar7 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  local_60 = (longlong *)0x0;
LAB_01099aeb:
  FUN_00414560(&local_58,2);
  FUN_00414480(local_40);
  FUN_00414480(local_res10);
  return local_60;
}

