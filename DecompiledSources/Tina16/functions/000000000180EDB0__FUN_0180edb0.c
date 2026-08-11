/* Ghidra address: 0180edb0 */
/* Ghidra symbol: FUN_0180edb0 */


void FUN_0180edb0(longlong param_1)

{
  int iVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_0058ce80(&local_10,*(undefined8 *)(param_1 + 0x70),
               *(undefined8 *)
                (*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x44) * 8));
  FUN_0180ec20(param_1,&local_18,local_10);
  iVar1 = FUN_00416db0(local_10,local_18);
  if (iVar1 != 0) {
    FUN_0058cfc0(*(undefined8 *)(param_1 + 0x70),
                 *(undefined8 *)
                  (*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x44) * 8),local_18)
    ;
  }
  FUN_00414560(&local_18,2);
  return;
}

