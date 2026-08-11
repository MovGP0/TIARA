/* Ghidra address: 01bda310 */
/* Ghidra symbol: FUN_01bda310 */


undefined4
FUN_01bda310(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_40 = *param_3;
  uStack_38 = param_3[1];
  uStack_30 = param_3[2];
  *param_2 = 0;
  FUN_0046bd60(&local_40);
  FUN_00414520(param_2);
  *param_4 = 0;
  local_64 = 1;
  FUN_004685b0(&local_60,0,1);
  cVar2 = FUN_0046f320(&local_40,&local_60);
  if (cVar2 != '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    cVar2 = FUN_004113d0(uVar1,&PTR_FUN_01bf1690);
    if (cVar2 != '\0') {
      lVar3 = FUN_01bfd980(uVar1);
      if (lVar3 != 0) {
        lVar3 = FUN_01bfd980(*(undefined8 *)(param_1 + 0x18));
        *param_4 = *(undefined4 *)(lVar3 + 0xe0);
        local_64 = 0;
      }
    }
  }
  FUN_00460ba0(&local_60);
  FUN_00460ba0(&local_40);
  return local_64;
}

