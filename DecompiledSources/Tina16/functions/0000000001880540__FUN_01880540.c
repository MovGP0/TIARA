/* Ghidra address: 01880540 */
/* Ghidra symbol: FUN_01880540 */


char FUN_01880540(undefined8 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  char local_11;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_20 = (longlong *)FUN_00724d70(&PTR_FUN_0071a4d0,1,*(undefined8 *)PTR_DAT_02004030);
  uVar1 = FUN_0187fde0(param_1);
  *(undefined4 *)(local_20 + 0x1a) = uVar1;
  local_10 = FUN_018172d0();
  FUN_018172b0(*(undefined8 *)PTR_DAT_020056a0);
  local_11 = (**(code **)(*local_20 + 0xa8))(local_20);
  FUN_018172b0(local_10);
  if (local_11 != '\0') {
    FUN_0187fee0(param_1,(longlong)(int)local_20[0x1a]);
  }
  FUN_00410f20(local_20);
  return local_11;
}

