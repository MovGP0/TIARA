/* Ghidra address: 00b23420 */
/* Ghidra symbol: FUN_00b23420 */


undefined8
FUN_00b23420(undefined8 param_1,char param_2,char param_3,char param_4,char param_5,byte param_6,
            byte param_7,longlong param_8,undefined1 param_9,short param_10)

{
  undefined2 uVar1;
  short *psVar2;
  longlong lVar3;
  undefined1 uVar4;
  ushort uVar5;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00414650(&param_8);
  FUN_00415d10(param_1,0xf,0);
  psVar2 = (short *)FUN_00414df0(param_1);
  *psVar2 = param_10 * 0x14;
  uVar5 = 0;
  if (param_3 != '\0') {
    uVar5 = 2;
  }
  if (param_5 != '\0') {
    uVar5 = uVar5 | 8;
  }
  lVar3 = FUN_00414df0(param_1);
  *(ushort *)(lVar3 + 2) = uVar5;
  uVar1 = FUN_00b1ba40(param_9);
  lVar3 = FUN_00414df0(param_1);
  *(undefined2 *)(lVar3 + 4) = uVar1;
  if (param_2 == '\0') {
    uVar1 = 400;
  }
  else {
    uVar1 = 700;
  }
  lVar3 = FUN_00414df0(param_1);
  *(undefined2 *)(lVar3 + 6) = uVar1;
  lVar3 = FUN_00414df0(param_1);
  *(ushort *)(lVar3 + 8) = (ushort)param_7;
  if ((param_4 != '\0') && (param_6 == 0)) {
    param_6 = 1;
  }
  lVar3 = FUN_00414df0(param_1);
  *(undefined *)(lVar3 + 10) = PTR_DAT_02002b80[param_6];
  lVar3 = FUN_00414df0(param_1);
  *(undefined1 *)(lVar3 + 0xb) = 0;
  lVar3 = FUN_00414df0(param_1);
  *(undefined1 *)(lVar3 + 0xc) = 1;
  lVar3 = FUN_00414df0(param_1);
  *(undefined1 *)(lVar3 + 0xd) = 0;
  uVar4 = 0;
  if (param_8 != 0) {
    uVar4 = (undefined1)(*(uint *)(param_8 + -4) >> 1);
  }
  lVar3 = FUN_00414df0(param_1);
  *(undefined1 *)(lVar3 + 0xe) = uVar4;
  FUN_00415d10(param_1,0x10,0);
  lVar3 = FUN_00414df0(param_1);
  *(undefined1 *)(lVar3 + 0xf) = 1;
  FUN_00b15100(local_20,param_8);
  FUN_004155b0(param_1,local_20[0]);
  FUN_004144d0(local_20);
  FUN_00414520(&param_8);
  return param_1;
}

