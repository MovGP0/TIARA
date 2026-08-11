/* Ghidra address: 0112f740 */
/* Ghidra symbol: FUN_0112f740 */


undefined8 FUN_0112f740(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_50 [2];
  undefined8 local_3a;
  undefined8 uStack_32;
  undefined8 uStack_2a;
  undefined8 uStack_22;
  undefined2 uStack_1a;
  
  local_50[0] = 0;
  local_3a = *param_1;
  uStack_32 = param_1[1];
  uStack_2a = param_1[2];
  uStack_22 = param_1[3];
  uStack_1a = *(undefined2 *)(param_1 + 4);
  FUN_0112efe0(local_50,&local_3a);
  uVar1 = FUN_0043fcb0(local_50[0]);
  FUN_00414480(local_50);
  return uVar1;
}

