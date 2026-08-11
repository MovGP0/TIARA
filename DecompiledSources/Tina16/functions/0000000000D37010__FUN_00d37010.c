/* Ghidra address: 00d37010 */
/* Ghidra symbol: FUN_00d37010 */


undefined8 FUN_00d37010(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_68 [4];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined4 local_40;
  
  FUN_0040d200(local_48,0x20,0);
  thunk_FUN_03d2c01a(param_1,0x20,local_48);
  uVar1 = thunk_FUN_040ef593(0);
  uVar2 = thunk_FUN_04181813(uVar1,local_44,local_40);
  local_68[0] = 0xffffffff;
  local_58 = uVar2;
  local_50 = param_1;
  uVar3 = thunk_FUN_0415412b(local_68);
  thunk_FUN_0416f828(uVar2);
  thunk_FUN_041a9b5c(0,uVar1);
  return uVar3;
}

