/* Ghidra address: 0163fb90 */
/* Ghidra symbol: FUN_0163fb90 */


void FUN_0163fb90(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined8 local_40 [2];
  char local_29;
  undefined8 local_28;
  int local_1c [3];
  
  local_40[0] = 0;
  local_28 = 0;
  FUN_004b84c0(param_2,local_1c,4);
  iVar1 = local_1c[0];
  if (-1 < local_1c[0] + -1) {
    do {
      FUN_01b20f00(local_40,param_2);
      FUN_004168b0(&local_28,local_40[0]);
      FUN_004b84c0(param_2,&local_29,1);
      if (local_29 == 'd') {
        (**(code **)(**(longlong **)(param_3 + 0x28) + 0x78))
                  (*(longlong **)(param_3 + 0x28),local_28);
      }
      else {
        (**(code **)(**(longlong **)(param_3 + 0x30) + 0x78))
                  (*(longlong **)(param_3 + 0x30),local_28);
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414520(local_40);
  FUN_00414480(&local_28);
  return;
}

