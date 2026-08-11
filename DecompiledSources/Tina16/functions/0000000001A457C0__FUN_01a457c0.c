/* Ghidra address: 01a457c0 */
/* Ghidra symbol: FUN_01a457c0 */


undefined1
FUN_01a457c0(undefined8 param_1,longlong param_2,int *param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong local_res10 [3];
  undefined1 auStack_58 [40];
  int *local_30;
  undefined8 local_28;
  undefined1 local_19;
  
  local_res10[0] = param_2;
  local_30 = param_3;
  local_28 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(param_5);
  local_19 = 0;
  iVar3 = 0;
  if (local_res10[0] != 0) {
    iVar3 = *(int *)(local_res10[0] + -4);
  }
  iVar2 = *local_30;
  if (iVar2 <= iVar3) {
    iVar3 = (iVar3 - iVar2) + 1;
    do {
      cVar1 = FUN_01a45760(auStack_58,*(undefined2 *)(local_res10[0] + -2 + (longlong)iVar2 * 2));
      if (cVar1 != '\0') {
        if ((*(short *)(local_res10[0] + -2 + (longlong)iVar2 * 2) == 10) &&
           (*(short *)(local_res10[0] + -2 + (longlong)(iVar2 + -1) * 2) == 0xd)) {
          iVar3 = 2;
        }
        else {
          iVar3 = 0;
        }
        FUN_00416dc0(local_28,local_res10[0],*local_30,((iVar2 - *local_30) - iVar3) + 1);
        local_19 = 1;
        *local_30 = iVar2 + 1;
        break;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414480(local_res10);
  FUN_00414480(&param_5);
  return local_19;
}

