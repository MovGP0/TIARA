/* Ghidra address: 005ec2e0 */
/* Ghidra symbol: FUN_005ec2e0 */


undefined1 FUN_005ec2e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined1 local_11;
  longlong local_10;
  
  local_20 = auStack_48;
  local_11 = 0;
  local_10 = FUN_005ebee0(param_1,param_2);
  if (local_10 != 0) {
    uVar2 = FUN_00416740(param_3);
    uVar1 = thunk_FUN_0412b031(local_10,uVar2,0);
    local_11 = FUN_005ea620(param_1,uVar1);
    thunk_FUN_0418fb4b(local_10);
  }
  return local_11;
}

