/* Ghidra address: 01824750 */
/* Ghidra symbol: FUN_01824750 */


undefined8 FUN_01824750(undefined8 param_1,undefined2 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 local_48;
  undefined2 *local_40;
  undefined8 local_38;
  undefined2 *local_30 [2];
  
  local_40 = (undefined2 *)0x0;
  local_48 = 0;
  local_30[0] = (undefined2 *)0x0;
  local_38 = 0;
  FUN_0043e600(param_1,param_2);
  iVar5 = 0;
  if (param_2 != (undefined2 *)0x0) {
    iVar5 = *(int *)(param_2 + -2);
  }
  iVar4 = 1;
  if (0 < iVar5) {
    do {
      if (iVar4 == 1) {
        FUN_00416780(&local_38,*param_2);
        FUN_0043e5a0(local_30,local_38);
        puVar2 = (undefined2 *)FUN_00414de0(param_1);
        *puVar2 = *local_30[0];
      }
      else {
        iVar1 = 0;
        if (param_2 != (undefined2 *)0x0) {
          iVar1 = *(int *)(param_2 + -2);
        }
        if ((iVar4 < iVar1) && (param_2[(longlong)iVar4 + -1] == 0x20)) {
          FUN_00416780(&local_48,param_2[(longlong)(iVar4 + 1) + -1]);
          FUN_0043e5a0(&local_40,local_48);
          lVar3 = FUN_00414de0(param_1);
          *(undefined2 *)(lVar3 + -2 + (longlong)(iVar4 + 1) * 2) = *local_40;
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414560(&local_48,4);
  return param_1;
}

