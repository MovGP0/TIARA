/* Ghidra address: 01d85850 */
/* Ghidra symbol: FUN_01d85850 */


void FUN_01d85850(longlong param_1,char param_2)

{
  undefined8 uVar1;
  code *local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    if (param_2 == '\0') {
      FUN_01d84d10(*(undefined8 *)(param_1 + 0x10),*PTR_DAT_020035f8);
    }
    else {
      FUN_01d849e0(&local_10);
      FUN_01d84b90(*(undefined8 *)(param_1 + 0x10),local_10,*PTR_DAT_020035f8);
    }
  }
  *(char *)(param_1 + 0x2b) = param_2;
  uVar1 = FUN_006261a0();
  local_20 = FUN_01d85480;
  local_18 = param_1;
  FUN_00621370(uVar1,param_1,&local_20);
  FUN_00414480(&local_10);
  return;
}

