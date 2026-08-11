/* Ghidra address: 01ac7590 */
/* Ghidra symbol: FUN_01ac7590 */


int FUN_01ac7590(longlong param_1,undefined8 param_2,longlong *param_3,undefined2 *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 local_res10 [3];
  int local_3c;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  *param_4 = 0;
  iVar4 = 0;
  local_3c = 0;
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 - 1U < 0x80000000) {
    do {
      lVar3 = FUN_004aeac0(param_1,iVar4);
      lVar3 = *(longlong *)(lVar3 + 0xe0);
      FUN_01cc0ae0(lVar3,local_30);
      iVar2 = FUN_004413f0(&LAB_01ac7734,local_30[0]);
      if (0 < iVar2) {
        FUN_00416dc0(local_30,local_30[0],1,iVar2 + -1);
      }
      if ((((*(char *)(lVar3 + 8) == '\0') &&
           (cVar1 = FUN_004113d0(lVar3,&PTR_FUN_01cb38a0), cVar1 != '\0')) &&
          (iVar2 = FUN_00416db0(local_30[0],local_res10[0]), iVar2 == 0)) &&
         (local_3c = local_3c + 1, *(char *)(lVar3 + 0x39) != '\0')) {
        *param_4 = 1;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (local_3c == 1) {
    *param_4 = 0;
  }
  if (*param_3 != 0) {
    FUN_004095f0(*param_3);
  }
  if (0 < local_3c) {
    lVar3 = FUN_00409570((longlong)(local_3c * 8));
    *param_3 = lVar3;
  }
  FUN_00414480(local_30);
  FUN_00414480(local_res10);
  return local_3c;
}

