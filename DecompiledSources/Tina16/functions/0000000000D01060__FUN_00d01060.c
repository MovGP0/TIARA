/* Ghidra address: 00d01060 */
/* Ghidra symbol: FUN_00d01060 */


undefined8 * FUN_00d01060(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  short sVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong *local_res18 [2];
  ulonglong in_stack_ffffffffffffff90;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  longlong local_30;
  
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30 = 0;
  local_res18[0] = param_3;
  FUN_0041b910(param_3);
  FUN_00414480(param_1);
  FUN_00419430(&local_30,&DAT_0086e978);
  if (param_2 != 0) {
    FUN_0086f700(local_res18,7);
    iVar4 = (**(code **)(*local_res18[0] + 0xd8))(local_res18[0],2);
    FUN_00419260(&local_30,&DAT_0086e978,1,(longlong)iVar4);
    iVar4 = 0;
    while( true ) {
      iVar9 = 0;
      if (param_2 != 0) {
        iVar9 = *(int *)(param_2 + -4);
      }
      if (iVar9 <= iVar4) break;
      iVar9 = iVar4 + 1;
      sVar1 = *(short *)(param_2 + -2 + (longlong)iVar9 * 2);
      if (sVar1 == 0x20) {
        FUN_00416ad0(param_1,&DAT_00d0135c);
        iVar4 = iVar4 + 1;
      }
      else {
        cVar3 = FUN_00cc3f50(PTR_u_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_01eb2cd8,sVar1);
        if (cVar3 == '\0') {
          iVar5 = FUN_00cc3f30(param_2,iVar9);
          in_stack_ffffffffffffff90 = in_stack_ffffffffffffff90 & 0xffffffff00000000;
          iVar9 = (**(code **)(*local_res18[0] + 0x80))
                            (local_res18[0],param_2,iVar9,iVar5,&local_30,in_stack_ffffffffffffff90)
          ;
          bVar2 = 0 < iVar9;
          if (((bVar2) && (sVar1 != 0x3f)) && (iVar7 = 0, iVar8 = iVar9, -1 < iVar9 + -1)) {
            do {
              if (*(char *)(local_30 + iVar7) == '?') {
                bVar2 = false;
                break;
              }
              iVar7 = iVar7 + 1;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          if (bVar2) {
            iVar8 = 0;
            if (-1 < iVar9 + -1) {
              do {
                FUN_0043fba0(&local_48,*(undefined1 *)(local_30 + iVar8),2);
                FUN_00416cd0(param_1,3,*param_1,&DAT_00d0136c,local_48);
                iVar8 = iVar8 + 1;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
          }
          else {
            uVar6 = FUN_00cc3fd0(param_2,iVar4 + 1);
            FUN_0043f750(&local_50,uVar6);
            in_stack_ffffffffffffff90 = 0;
            FUN_00416cd0(param_1,4,*param_1,&DAT_00d0137c,local_50,&LAB_00d01390);
          }
          iVar4 = iVar4 + iVar5;
        }
        else {
          FUN_00416780(local_40,sVar1);
          FUN_00416ad0(param_1,local_40[0]);
          iVar4 = iVar4 + 1;
        }
      }
    }
  }
  FUN_00414560(&local_50,3);
  FUN_00419430(&local_30,&DAT_0086e978);
  FUN_0041b800(local_res18);
  return param_1;
}

