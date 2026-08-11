/* Ghidra address: 01cc2930 */
/* Ghidra symbol: FUN_01cc2930 */


longlong FUN_01cc2930(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                     undefined8 param_5,undefined8 param_6,char param_7,undefined1 param_8)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414610(param_6);
  FUN_01cc28c0(param_1);
  *(int *)(param_1 + 0x8a) = (int)param_1[2];
  lVar1 = FUN_01cc0b90(&PTR_FUN_01cb38a0,1);
  *(undefined1 *)(lVar1 + 8) = param_3;
  FUN_01cc09f0(lVar1,local_res10[0]);
  *(undefined1 *)(lVar1 + 0x2b) = param_4;
  *(undefined1 *)(lVar1 + 0x38) = *(undefined1 *)(lVar1 + 0x38);
  if (param_7 == '\n') {
    *(undefined1 *)(lVar1 + 0x3a) = 3;
  }
  else {
    *(char *)(lVar1 + 0x3a) = param_7;
  }
  FUN_01cc1590(lVar1,param_6);
  *(int *)(lVar1 + 0x158) = (int)param_1[0x89];
  uVar2 = FUN_004b6da0(param_1[0x87]);
  *(undefined8 *)(lVar1 + 0x160) = uVar2;
  *(undefined1 *)(lVar1 + 0x39) = param_8;
  (**(code **)(*param_1 + 0x50))(param_1,lVar1);
  *(int *)(param_1 + 0x89) = (int)param_1[0x89] + 1;
  *(undefined4 *)((longlong)param_1 + 0x44c) = 1;
  FUN_00414480(local_res10);
  FUN_00414480(&param_6);
  return lVar1;
}

