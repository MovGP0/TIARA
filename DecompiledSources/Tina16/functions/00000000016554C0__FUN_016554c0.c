/* Ghidra address: 016554c0 */
/* Ghidra symbol: FUN_016554c0 */


undefined4 * FUN_016554c0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined8 local_30 [2];
  
  if (*param_2 == 1) {
    local_30[0] = *(undefined8 *)(param_2 + 10);
    (**(code **)(PTR_PTR_02003958 + (longlong)param_1 * 8 + -8))(local_30,0);
    puVar1 = (undefined4 *)FUN_01655470();
    FUN_016a94d0(param_2,1);
  }
  else {
    puVar1 = (undefined4 *)FUN_004095c0(0xd0);
    FUN_0040d200(puVar1,0xd0,0);
    *puVar1 = 9;
    *(int **)(puVar1 + 2) = param_2;
    puVar1[0x13] = param_1;
  }
  return puVar1;
}

