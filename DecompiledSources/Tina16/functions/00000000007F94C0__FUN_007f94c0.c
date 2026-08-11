/* Ghidra address: 007f94c0 */
/* Ghidra symbol: FUN_007f94c0 */


undefined8 FUN_007f94c0(undefined *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  code *local_28;
  undefined *local_18;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_18 = PTR_DAT_01e13ff0;
  local_10 = DAT_01e14010;
  DAT_01e14010 = 0;
  local_28 = FUN_007f9460;
  DAT_01e14008 = 1;
  PTR_DAT_01e13ff0 = param_1;
  uVar2 = FUN_00427ab0();
  thunk_FUN_0413b16e(uVar2,local_28,0);
  uVar1 = DAT_01e14010;
  DAT_01e14008 = 0;
  DAT_01e14010 = local_10;
  PTR_DAT_01e13ff0 = local_18;
  return uVar1;
}

