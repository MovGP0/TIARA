/* Ghidra address: 0157efb0 */
/* Ghidra symbol: FUN_0157efb0 */


undefined1 FUN_0157efb0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined1 local_2b [18];
  undefined1 local_19;
  longlong local_10;
  
  local_40 = auStack_68;
  local_19 = 0;
  local_10 = FUN_0157f930(&PTR_FUN_01576b50,1);
  uVar1 = FUN_004b9860(&PTR_FUN_0047c498,1,param_1,0x20);
  *(undefined8 *)(local_10 + 0x10) = uVar1;
  local_19 = FUN_0157f0a0(local_10,local_2b);
  FUN_00410f20(*(undefined8 *)(local_10 + 0x10));
  FUN_00410f20(local_10);
  return local_19;
}

