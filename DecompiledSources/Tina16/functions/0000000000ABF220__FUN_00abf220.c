/* Ghidra address: 00abf220 */
/* Ghidra symbol: FUN_00abf220 */


uint FUN_00abf220(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4,
                 longlong *param_5,undefined8 param_6,undefined8 *param_7)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 local_30;
  int local_2c;
  
  *param_7 = 0;
  uVar3 = FUN_00414480(param_7);
  uVar2 = FUN_00a9bc60(param_1,param_2,param_3,param_4,param_5,param_6,uVar3);
  local_2c = param_4 - *(int *)(*(longlong *)(param_1 + 0x20) + 0x94);
  local_30 = param_3;
  cVar1 = FUN_004231e0(param_1 + 0x60,&local_30);
  if (cVar1 != '\0') {
    if (((uVar2 & 4) == 0) && (*(longlong *)(param_1 + 0x70) != 0)) {
      FUN_00414ad0(param_7,*(undefined8 *)(param_1 + 0x70));
      uVar2 = uVar2 | 4;
    }
    if (((uVar2 & 1) == 0) && (*(longlong *)(param_1 + 0x78) != 0)) {
      lVar4 = FUN_00a72ca0(&DAT_00a69b68,1);
      *param_5 = lVar4;
      FUN_00414ad0(*param_5 + 8,*(undefined8 *)(param_1 + 0x78));
      FUN_00414ad0(*param_5 + 0x10,*(undefined8 *)(param_1 + 0x80));
      uVar2 = uVar2 | 1;
    }
  }
  return uVar2;
}

