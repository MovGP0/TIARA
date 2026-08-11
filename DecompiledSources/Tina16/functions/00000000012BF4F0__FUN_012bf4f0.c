/* Ghidra address: 012bf4f0 */
/* Ghidra symbol: FUN_012bf4f0 */


/* WARNING: Removing unreachable block (ram,0x012bf559) */
/* WARNING: Removing unreachable block (ram,0x012bf570) */

undefined1 FUN_012bf4f0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined4 local_10;
  undefined1 local_9;
  
  local_20 = auStack_48;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  *param_1 = 0;
  local_10 = 0;
  uVar1 = FUN_004d7d90(&PTR_FUN_00496830,1,local_res10[0],1);
  *param_1 = uVar1;
  local_9 = 1;
  FUN_00414480(local_res10);
  return local_9;
}

