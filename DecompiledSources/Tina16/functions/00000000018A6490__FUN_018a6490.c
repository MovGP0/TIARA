/* Ghidra address: 018a6490 */
/* Ghidra symbol: FUN_018a6490 */


void FUN_018a6490(longlong param_1,undefined4 param_2,ushort param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_43 [26];
  char local_29;
  
  local_29 = '\0';
  if (*(longlong *)(param_1 + 0x158) != 0) {
    (**(code **)(param_1 + 0x158))
              (*(undefined8 *)(param_1 + 0x160),param_1,param_2,param_3,param_4,param_5);
  }
  iVar1 = FUN_004b2060(*(undefined8 *)(param_1 + 0x528));
  if ((iVar1 != 0) && (*(char *)(param_1 + 0x518) == '\0')) {
    if ((*(char *)(param_1 + 0x508) == '\0') && ((char)param_2 != '\x01')) {
      local_43[0] = 4;
      FUN_018a74f0(param_1,param_2,param_3,param_4,param_5,local_43);
    }
    if (((char)param_2 == '\0') && (local_29 == '\0')) {
      *(undefined1 *)(param_1 + 0x4f3) = 1;
      *(undefined4 *)(param_1 + 0x510) = param_4;
      *(undefined4 *)(param_1 + 0x514) = param_5;
      if ((param_3 & 1) != 0) {
        FUN_00498350(&local_58,param_4,param_5,param_4,param_5);
        *(undefined8 *)(param_1 + 0x554) = local_58;
        *(undefined8 *)(param_1 + 0x55c) = uStack_50;
      }
    }
  }
  return;
}

