/* Ghidra address: 012dc8a0 */
/* Ghidra symbol: FUN_012dc8a0 */


void FUN_012dc8a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 int param_5,undefined8 *param_6,int param_7,undefined8 *param_8,int param_9,
                 undefined1 param_10,undefined1 param_11,undefined1 param_12,undefined8 param_13)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(param_13);
  lVar2 = FUN_012dc4a0(&DAT_012db4d0,1);
  FUN_00414ad0(lVar2 + 8,local_res10);
  FUN_00414ad0(lVar2 + 0x10,local_res18);
  FUN_00419260(lVar2 + 0x20,&DAT_012db3b8,1,(longlong)(param_5 + 1));
  iVar1 = 0;
  if (-1 < param_5) {
    param_5 = param_5 + 1;
    do {
      *(undefined8 *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar1 * 8) = *param_4;
      iVar1 = iVar1 + 1;
      param_4 = param_4 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  FUN_00419260(lVar2 + 0x28,&DAT_012db3b8,1,(longlong)(param_7 + 1));
  iVar1 = 0;
  if (-1 < param_7) {
    param_7 = param_7 + 1;
    do {
      *(undefined8 *)(*(longlong *)(lVar2 + 0x28) + (longlong)iVar1 * 8) = *param_6;
      iVar1 = iVar1 + 1;
      param_6 = param_6 + 1;
      param_7 = param_7 + -1;
    } while (param_7 != 0);
  }
  FUN_00419260(lVar2 + 0x30,&DAT_012db3b8,1,(longlong)(param_9 + 1));
  iVar1 = 0;
  if (-1 < param_9) {
    param_9 = param_9 + 1;
    do {
      *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) = *param_8;
      iVar1 = iVar1 + 1;
      param_8 = param_8 + 1;
      param_9 = param_9 + -1;
    } while (param_9 != 0);
  }
  *(undefined1 *)(lVar2 + 0x38) = param_10;
  *(undefined1 *)(lVar2 + 0x39) = param_11;
  *(undefined1 *)(lVar2 + 0x3a) = param_12;
  FUN_00414ad0(lVar2 + 0x18,param_13);
  FUN_004aef40(*(longlong *)(param_1 + 0x48),*(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x10));
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x48),lVar2);
  FUN_00414560(&local_res10,2);
  FUN_00414480(&param_13);
  return;
}

