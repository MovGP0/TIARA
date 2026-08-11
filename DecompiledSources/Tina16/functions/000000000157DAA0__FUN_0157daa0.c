/* Ghidra address: 0157daa0 */
/* Ghidra symbol: FUN_0157daa0 */


undefined8 FUN_0157daa0(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  longlong local_58;
  undefined1 local_4a [66];
  
  local_60 = auStack_88;
  FUN_00417580(local_4a,&DAT_015764a8);
  if (*(char *)(param_1 + 8) == '\0') {
    uVar1 = FUN_0044d710(&PTR_FUN_01576898,1,PTR_PTR_02001f60);
    FUN_004134c0(uVar1);
  }
  FUN_00417740(local_4a,&DAT_015764a8);
  local_58 = *(longlong *)(param_1 + 0x30);
  if (*(uint *)(local_58 + 0x10) <= param_3) {
    FUN_00594f90();
  }
  FUN_00417c40(local_4a,*(longlong *)(local_58 + 8) + (longlong)(int)param_3 * 0x42,&DAT_015764a8);
  FUN_00417c40(param_2,local_4a,&DAT_015764a8);
  FUN_00417740(local_4a,&DAT_015764a8);
  FUN_00417740(local_4a,&DAT_015764a8);
  return param_2;
}

