/* Ghidra address: 01584490 */
/* Ghidra symbol: FUN_01584490 */


undefined8 FUN_01584490(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  uVar1 = FUN_015837c0(param_1,param_3);
  iVar2 = FUN_01583710(param_1,param_3,uVar1);
  if (iVar2 < 0) {
    FUN_00417740(&local_28,&DAT_01577948);
    local_28 = 0;
    uStack_20 = 0;
    FUN_015831a0(param_2,param_3,&local_28);
  }
  else {
    FUN_01583b50(param_1,&local_38,param_3,uVar1,3);
    FUN_015831a0(param_2,param_3,&local_38);
  }
  FUN_00417840(&local_38,&DAT_01577948,2);
  return param_2;
}

