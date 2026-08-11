/* Ghidra address: 01967230 */
/* Ghidra symbol: FUN_01967230 */


undefined8 * FUN_01967230(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_50 = 0;
  local_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  FUN_0195b240(param_1,local_20,param_3);
  FUN_0043f750(&local_28,*(undefined4 *)(param_1 + 0x2c0));
  puVar3 = &DAT_01967448;
  FUN_00416cd0(param_2,5,&DAT_01967410,local_20[0],L" ImageIndex=\"",local_28,&DAT_01967448);
  cVar1 = FUN_01966bb0(param_1,4);
  if (cVar1 != '\0') {
    uVar2 = FUN_01966bb0(param_1,4);
    FUN_00468820(&local_48,uVar2);
    FUN_018036e0(&local_30,&local_48);
    FUN_00416cd0(param_2,4,*param_2,L" Transparent=\"",local_30,&DAT_01967448);
  }
  if (*(int *)(param_1 + 0x2d4) != 0xffffff) {
    FUN_0043f750(&local_50,*(int *)(param_1 + 0x2d4));
    FUN_00416cd0(param_2,4,*param_2,L" TransparentColor=\"",local_50,&DAT_01967448,puVar3);
  }
  FUN_00414480(&local_50);
  FUN_00460ba0(&local_48);
  FUN_00414560(&local_30,3);
  return param_2;
}

