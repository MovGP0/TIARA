/* Ghidra address: 00f48bb0 */
/* Ghidra symbol: FUN_00f48bb0 */


void FUN_00f48bb0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  short local_2a;
  
  local_res10[0] = param_2;
  FUN_00410f20(*param_1);
  *param_1 = 0;
  iVar1 = FUN_01d31a40(local_res10[0]);
  if (iVar1 == 0) {
    FUN_01d30f00(local_res10[0],&local_2a,2);
    if (-1 < (short)(local_2a + -1)) {
      do {
        uVar2 = FUN_00f48820(&DAT_00f44e18,1,0,*param_1);
        *param_1 = uVar2;
        FUN_00f48a90(*param_1,local_res10,param_3,param_4,param_5);
        local_2a = local_2a + -1;
      } while (local_2a != 0);
    }
  }
  return;
}

