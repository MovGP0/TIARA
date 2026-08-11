/* Ghidra address: 004db1f0 */
/* Ghidra symbol: FUN_004db1f0 */


undefined1 FUN_004db1f0(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_29;
  longlong *local_28;
  longlong *local_20 [2];
  
  local_20[0] = (longlong *)0x0;
  local_28 = (longlong *)0x0;
  local_29 = 0;
  FUN_004db130(local_20,param_1);
  uVar2 = FUN_0041b800(&local_28);
  cVar1 = FUN_00452340(local_20[0],&DAT_004db2b8,uVar2);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*local_28 + 0x18))(local_28);
    if (cVar1 != '\0') {
      (**(code **)(*local_20[0] + 0x40))(local_20[0]);
      local_29 = 1;
    }
  }
  FUN_0041b800(&local_28);
  FUN_0041b800(local_20);
  return local_29;
}

