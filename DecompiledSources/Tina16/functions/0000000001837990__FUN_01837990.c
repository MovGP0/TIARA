/* Ghidra address: 01837990 */
/* Ghidra symbol: FUN_01837990 */


void FUN_01837990(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_30 = auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  local_58 = *(undefined8 *)(param_1 + 0xa8);
  local_28 = FUN_01847460(&DAT_01843700,1,0,*(undefined1 *)(param_1 + 0xb7));
  uVar1 = FUN_0181e3c0(param_2,0);
  local_20 = (longlong *)
             FUN_0183a030(*(undefined8 *)(param_1 + 0x100),uVar1,*(undefined8 *)(param_1 + 0x110));
  (**(code **)(*local_20 + 0x10))(local_20,&local_48);
  FUN_00461840(param_1 + 0xb8,&local_48);
  FUN_01837210(*(undefined8 *)(param_1 + 0x100),local_28,local_20);
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00460ba0(&local_48);
  return;
}

