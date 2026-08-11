/* Ghidra address: 017989e0 */
/* Ghidra symbol: FUN_017989e0 */


void FUN_017989e0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_30 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x750) + 0xa9) == '\0') {
    uVar1 = FUN_00b89270();
    FUN_00b8e520(uVar1,&local_30,0x84d);
    FUN_00416cd0(&local_28,4,&DAT_01798b58,*(undefined8 *)(*(longlong *)(param_1 + 0xca8) + 0x10),
                 L"> - ",local_30);
    FUN_0064de00(param_1,local_28);
  }
  else {
    FUN_00441920(&local_18,*(undefined8 *)(param_1 + 0xc98));
    uVar1 = FUN_00b89270();
    FUN_00b8e520(uVar1,&local_20,0x84d);
    FUN_00416cd0(&local_10,6,&DAT_01798b58,*(undefined8 *)(*(longlong *)(param_1 + 0xca8) + 0x10),
                 &DAT_01798b68,local_18,&DAT_01798b7c,local_20);
    FUN_0064de00(param_1,local_10);
  }
  FUN_00414560(&local_30,5);
  return;
}

