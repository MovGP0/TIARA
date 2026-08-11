/* Ghidra address: 0195a020 */
/* Ghidra symbol: FUN_0195a020 */


void FUN_0195a020(longlong param_1,longlong param_2,int param_3,int param_4,int param_5,int param_6,
                 double param_7,double param_8)

{
  int iVar1;
  undefined1 auStack_78 [32];
  int local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined1 local_38;
  
  if (*(char *)(param_1 + 0x2c) != '\0') {
    FUN_005fd670(*(undefined8 *)(param_2 + 0x78),0);
    FUN_005fd4e0(*(undefined8 *)(param_2 + 0x78),*(undefined4 *)(param_1 + 0x38));
    local_50._0_4_ = FUN_0040c770(*(double *)(param_1 + 0x30) * param_7);
    iVar1 = param_5 + (int)local_50 / 2;
    local_58 = param_6;
    FUN_01959600(auStack_78,iVar1,param_4 + (int)local_50,iVar1);
    iVar1 = FUN_0040c770(*(double *)(param_1 + 0x30) * param_8);
    local_58 = param_6 + iVar1 / 2;
    local_50 = CONCAT44(local_50._4_4_,iVar1);
    FUN_01959600(auStack_78,param_3 + iVar1,local_58,param_5 + iVar1);
  }
  if (((*(char *)(param_1 + 0x3d) != '\0') && (*(int *)(param_1 + 0x28) != 0x1fffffff)) &&
     (*(double *)(param_1 + 0x40) != 0.0)) {
    FUN_005fdcb0(*(undefined8 *)(param_2 + 0x80),0);
    if (*(char *)(param_1 + 0x3c) != '\0') {
      FUN_005fdcb0(*(undefined8 *)(param_2 + 0x80),1);
    }
    if ((*(byte *)(param_1 + 0x3d) & 1) != 0) {
      FUN_01959f60(auStack_78,*(undefined8 *)(param_1 + 8));
      iVar1 = FUN_005fd6c0(*(undefined8 *)(param_2 + 0x78));
      if ((iVar1 == 2) && (*(char *)(param_1 + 0x3c) != '\0')) {
        iVar1 = 1;
      }
      else {
        iVar1 = 0;
      }
      local_58 = param_6;
      local_50 = *(undefined8 *)(param_1 + 8);
      local_48 = 0;
      local_40 = (*(byte *)(param_1 + 0x3d) & 4) != 0;
      local_38 = (*(byte *)(param_1 + 0x3d) & 8) != 0;
      FUN_01959a80(auStack_78,param_3,param_4 - iVar1,param_3);
    }
    if ((*(byte *)(param_1 + 0x3d) & 2) != 0) {
      FUN_01959f60(auStack_78,*(undefined8 *)(param_1 + 0x18));
      local_58 = param_6;
      local_50 = *(undefined8 *)(param_1 + 0x18);
      local_48 = 1;
      local_40 = (*(byte *)(param_1 + 0x3d) & 4) != 0;
      local_38 = (*(byte *)(param_1 + 0x3d) & 8) != 0;
      FUN_01959a80(auStack_78,param_5,param_4,param_5);
    }
    if ((*(byte *)(param_1 + 0x3d) & 4) != 0) {
      FUN_01959f60(auStack_78,*(undefined8 *)(param_1 + 0x10));
      local_50 = *(undefined8 *)(param_1 + 0x10);
      local_48 = 2;
      local_40 = (*(byte *)(param_1 + 0x3d) & 1) != 0;
      local_38 = (*(byte *)(param_1 + 0x3d) & 2) != 0;
      local_58 = param_4;
      FUN_01959a80(auStack_78,param_3,param_4,param_5);
    }
    if ((*(byte *)(param_1 + 0x3d) & 8) != 0) {
      FUN_01959f60(auStack_78,*(undefined8 *)(param_1 + 0x20));
      iVar1 = FUN_005fd6c0(*(undefined8 *)(param_2 + 0x78));
      if ((iVar1 == 1) && (*(char *)(param_1 + 0x3c) != '\0')) {
        iVar1 = 1;
      }
      else {
        iVar1 = 0;
      }
      local_58 = param_6;
      local_50 = *(undefined8 *)(param_1 + 0x20);
      local_48 = 3;
      local_40 = (*(byte *)(param_1 + 0x3d) & 1) != 0;
      local_38 = (*(byte *)(param_1 + 0x3d) & 2) != 0;
      FUN_01959a80(auStack_78,param_3,param_6,param_5 + iVar1);
    }
  }
  return;
}

