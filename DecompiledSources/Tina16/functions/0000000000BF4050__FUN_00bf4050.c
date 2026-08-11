/* Ghidra address: 00bf4050 */
/* Ghidra symbol: FUN_00bf4050 */


undefined8 FUN_00bf4050(longlong param_1,undefined8 param_2,ulonglong param_3,char param_4)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  iVar2 = (int)param_3;
  local_10 = 0;
  local_18 = 0;
  if (param_4 != '\0') {
    uVar3 = param_3;
    uVar1 = FUN_00c09df0(param_1);
    if (((uVar1 & 0x2000000) == 0) && (*(int *)(param_1 + 0x618) <= iVar2)) {
      uVar1 = (longlong)iVar2 / (longlong)*(int *)(param_1 + 0x618) & 0xffffffff;
      FUN_00bd1750(&local_10,CONCAT62((int6)(uVar3 >> 0x10),9) & 0xffffffff,uVar1);
      FUN_00bd1750(&local_18,CONCAT62((int6)(uVar1 >> 0x10),0x20) & 0xffffffff,
                   (longlong)iVar2 % (longlong)*(int *)(param_1 + 0x618) & 0xffffffff);
      FUN_00416ba0(param_2,local_10,local_18);
      goto code_r0x00bf4113;
    }
  }
  FUN_00bd1750(param_2,0x20,param_3 & 0xffffffff);
code_r0x00bf4113:
  FUN_00414560(&local_18,2);
  return param_2;
}

