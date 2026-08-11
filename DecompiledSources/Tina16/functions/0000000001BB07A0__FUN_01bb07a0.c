/* Ghidra address: 01bb07a0 */
/* Ghidra symbol: FUN_01bb07a0 */


undefined4 FUN_01bb07a0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 local_30;
  undefined4 local_2c [3];
  
  uVar1 = FUN_01bb06d0(param_1,param_2,local_2c,&local_30);
  if ((char)uVar1 == '\0') {
    *param_3 = 0;
  }
  else {
    lVar2 = FUN_00410e60(&DAT_01baf5c8,1);
    *param_3 = lVar2;
    FUN_004194b0(*param_3 + 0x10,*(undefined8 *)(param_1 + 0x10),&DAT_00406578);
    *(undefined4 *)(*param_3 + 0x1c) = 0xffffffff;
    *(undefined4 *)(*param_3 + 0x18) = local_2c[0];
    *(undefined4 *)(*param_3 + 0x20) = local_30;
  }
  return uVar1;
}

