/* Ghidra address: 00be1010 */
/* Ghidra symbol: FUN_00be1010 */


undefined4 FUN_00be1010(longlong param_1,undefined8 param_2)

{
  undefined1 local_38 [28];
  int local_1c;
  
  FUN_00be1ec0(local_38,param_2,0,1,0xffffffff);
  FUN_00be4670(*(undefined8 *)(param_1 + 0x20),local_38,&local_1c);
  local_1c = local_1c + -1;
  if (-1 < local_1c) {
    do {
      if (-1 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 8) + 0xc +
                       (longlong)local_1c * 0x10)) {
        return *(undefined4 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x20) + 8) + 0xc + (longlong)local_1c * 0x10)
        ;
      }
      local_1c = local_1c + -1;
    } while (local_1c != -1);
  }
  return 0xffffffff;
}

