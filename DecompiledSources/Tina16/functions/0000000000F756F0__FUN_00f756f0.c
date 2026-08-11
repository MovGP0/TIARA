/* Ghidra address: 00f756f0 */
/* Ghidra symbol: FUN_00f756f0 */


void FUN_00f756f0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 local_3d;
  int local_3c [3];
  
  FUN_004b84c0(param_2,local_3c,4);
  if (-1 < local_3c[0] + -1) {
    do {
      FUN_004b84c0(param_2,&local_3d,1);
      plVar1 = (longlong *)FUN_00f6dee0(local_3d);
      FUN_00f6dfa0(plVar1,*(undefined4 *)(param_1 + 0x18));
      (**(code **)(*plVar1 + 8))(plVar1,param_2);
      FUN_004ae7e0(param_1,plVar1);
      local_3c[0] = local_3c[0] + -1;
    } while (local_3c[0] != 0);
  }
  return;
}

