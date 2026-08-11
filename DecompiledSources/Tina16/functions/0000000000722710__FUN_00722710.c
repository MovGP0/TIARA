/* Ghidra address: 00722710 */
/* Ghidra symbol: FUN_00722710 */


undefined4 FUN_00722710(longlong param_1,code *param_2,longlong param_3)

{
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_40 = auStack_68;
  local_18 = FUN_0080f430(*(undefined8 *)PTR_DAT_02004030);
  local_10 = FUN_007f94c0(*(undefined8 *)(param_3 + 8));
  local_20 = FUN_007f9260();
  DAT_01e050f0 = param_1;
  local_34 = (*param_2)(param_3);
  FUN_007f95c0(local_10);
  thunk_FUN_04161dbd(local_18);
  FUN_007f9270(local_20);
  local_28 = (undefined8 *)(param_1 + 0x88);
  local_30 = *local_28;
  *local_28 = 0;
  FUN_00410f20(local_30);
  return local_34;
}

