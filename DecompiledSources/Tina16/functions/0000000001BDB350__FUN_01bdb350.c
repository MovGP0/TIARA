/* Ghidra address: 01bdb350 */
/* Ghidra symbol: FUN_01bdb350 */


bool FUN_01bdb350(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_30 = *param_2;
  uStack_28 = param_2[1];
  uStack_20 = param_2[2];
  FUN_0046bd60(&local_30);
  *param_3 = 0;
  FUN_00414520(param_3);
  FUN_004685b0(&local_50,0,1);
  cVar1 = FUN_0046f320(&local_30,&local_50);
  if (cVar1 != '\0') {
    FUN_01bfd990(*(undefined8 *)(param_1 + 0x18),&local_58);
    FUN_00416ad0(&local_58,L" menu");
    FUN_004168e0(param_3,local_58);
  }
  uVar2 = 0;
  if (*param_3 != 0) {
    uVar2 = *(uint *)(*param_3 + -4) >> 1;
  }
  FUN_00414480(&local_58);
  FUN_00460ba0(&local_50);
  FUN_00460ba0(&local_30);
  return uVar2 == 0;
}

