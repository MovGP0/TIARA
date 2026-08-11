/* Ghidra address: 015c33c0 */
/* Ghidra symbol: FUN_015c33c0 */


undefined1 FUN_015c33c0(longlong param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined8 local_20 [2];
  undefined1 local_9;
  
  local_20[0] = 0;
  FUN_015bf270(local_20,param_2);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb0))
                    (*(longlong **)(param_1 + 0x10),local_20[0]);
  *param_3 = iVar1;
  local_9 = -1 < *param_3;
  FUN_00414480(local_20);
  return local_9;
}

