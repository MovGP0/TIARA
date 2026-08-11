/* Ghidra address: 0108a6e0 */
/* Ghidra symbol: FUN_0108a6e0 */


void FUN_0108a6e0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  char local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  lVar1 = *(longlong *)(param_1 + 0x8f0);
  FUN_00bf2ed0(*(undefined8 *)(param_1 + 0xa78),local_20);
  FUN_007267a0(lVar1,&local_28);
  iVar2 = FUN_0043e6d0(local_20[0],local_28);
  if (iVar2 == 0) {
    FUN_00726820(lVar1,&local_30);
    FUN_00c08be0(*(undefined8 *)(param_1 + 0xa78),local_30);
  }
  while ((local_51 != '\0' && ((*(ushort *)(lVar1 + 0xd0) & 0x400) != 0))) {
    FUN_00726820(lVar1,&local_38);
    FUN_00c08be0(*(undefined8 *)(param_1 + 0xa78),local_38);
  }
  if ((local_51 == '\0') && ((*(ushort *)(lVar1 + 0xd0) & 0x200) != 0)) {
    uVar3 = FUN_00b89270();
    FUN_00b8e520(uVar3,&local_48,0x3ea);
    FUN_007267a0(lVar1,&local_50);
    FUN_00416cd0(&local_40,4,local_48,&DAT_0108a878,local_50,&LAB_0108a88c);
    FUN_016fd940(local_40);
  }
  FUN_00414560(&local_50,7);
  return;
}

