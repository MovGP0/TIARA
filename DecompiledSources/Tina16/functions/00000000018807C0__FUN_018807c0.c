/* Ghidra address: 018807c0 */
/* Ghidra symbol: FUN_018807c0 */


char FUN_018807c0(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 local_1a;
  char local_19;
  longlong *local_18;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_18 = (longlong *)FUN_00725300(&PTR_FUN_0071aaf8,1,*(undefined8 *)PTR_DAT_02004030);
  uVar2 = FUN_0187fde0(param_1);
  FUN_00725900(local_18,uVar2);
  *(ushort *)((longlong)local_18 + 0xd9) = *(ushort *)((longlong)local_18 + 0xd9) | 0x10;
  *(undefined1 *)(local_18 + 0x1b) = 2;
  local_1a = FUN_005fcf90(local_18[0x1a]);
  local_10 = FUN_018172d0();
  FUN_018172b0(*(undefined8 *)PTR_DAT_020056a0);
  local_19 = (**(code **)(*local_18 + 0xa8))(local_18);
  FUN_018172b0(local_10);
  cVar1 = FUN_005fcf90(local_18[0x1a]);
  if (cVar1 == '\x02') {
    FUN_005fcfa0(local_18[0x1a],local_1a);
  }
  if (local_19 != '\0') {
    FUN_0187fee0(param_1,local_18[0x1a]);
  }
  FUN_00410f20(local_18);
  return local_19;
}

