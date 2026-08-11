/* Ghidra address: 01bbe090 */
/* Ghidra symbol: FUN_01bbe090 */


void FUN_01bbe090(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res10 [3];
  undefined8 local_40 [2];
  int local_30;
  int local_2c [3];
  
  local_40[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  cVar1 = FUN_01b227a0(param_3,L".SUBCKT",local_res10[0],local_2c);
  if (cVar1 != '\0') {
    cVar1 = FUN_01b224b0(param_3,L".ENDS",local_2c[0],&local_30,0);
    if (cVar1 != '\0') {
      if (local_2c[0] <= local_30) {
        iVar3 = (local_30 - local_2c[0]) + 1;
        iVar2 = local_2c[0];
        do {
          (**(code **)(*param_3 + 0x18))(param_3,local_40,iVar2);
          (**(code **)(*param_4 + 0x78))(param_4,local_40[0]);
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      (**(code **)(*param_4 + 0x78))(param_4,0);
    }
  }
  FUN_00414480(local_40);
  FUN_00414480(local_res10);
  return;
}

